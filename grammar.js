module.exports = grammar({
    name: 'cubemdx',

    rules: {
        program: $ => repeat(choice(
            $.tag_with_content,
            $.tag_without_content
        )),

        tag_with_content: $ => seq(
            "<",
            /[A-Za-z][A-Za-z0-9]*/, // Tag name starting with an alphabet character and followed by alphanumeric characters
            ">",
            repeat(choice(
                $.mdx_script,
                $.tag_with_content,
                $.tag_without_content,
                $.text_content
            )),
            "</",
            /[A-Za-z][A-Za-z0-9]*/,
            ">"
        ),

        tag_without_content: $ => seq(
            "<",
            /[A-Za-z][A-Za-z0-9]*/, // Tag name starting with an alphabet character and followed by alphanumeric characters
            "/>"
        ),

        calculate_keyword: $ => /calculate/i,
        _createmember_keyword: $ => /create member/i,
        _scope_keyword: $ => /scope/i,
        _end_scope_keyword: $ => /end scope/i,

        text_content: $ => /[^<]+/, // Match anything except "<"
        mdx_content: $ => seq(
            $.calculate_keyword,
            optional(';'),
            repeat(
                choice($.calculated_member,
                )
            ),
            //repeat(
            //    choice(
            //        $.calculated_member,
            //        /[^<]+/,
            //    ),
            //),

        ),
        calculated_member: $ =>
            seq(
                $._createmember_keyword,
                /.*/,
                optional('as'),
                optional(','),
            ),

        mdx_script: $ => seq(
            "<MdxScript>",
            $.mdx_content,
            "</MdxScript>"
        ),
    }
});
