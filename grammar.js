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
          $.scope_statement,
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
        $.member_expression,
        optional('as'),
        optional(','),
      ),

    scope_begin: $ => seq(
      /scope/i,
      "(",
      $.scope_condition,
      ");",
    ),
    scope_end: $ => seq(
      /end scope/i,
      ";",
    ),

    scope_condition: $ => repeat1(
      seq(
        $.member_expression,
        optional(","),
      ),
    ),
    scope_this: $ => seq(
      /this/i,
      '=',
      $.member_expression,
      ';',
    ),

    scope_statement: $ => seq(
      $.scope_begin,
      choice(
        //$.scope_statement,
        $.scope_this,
      ),
      $.scope_end,
    ),


    member_expression: $ => seq(
      optional(/\[?(\w+)\]?\./),
      optional(/\[?(\w+)\]?\./),
      optional(/\[?(\w+)\]?\./),
      optional(/\[?(\w+)\]?\./),
      optional(/\[?(\w+)\]?\./),
      optional(/\[?(\w+)\]?\./),
      optional(/\[?(\w+)\]?\./),
      /\[?[a-zA-Z][A-z0-9 ]+/,
      ///\[?([A-z]{1}[A-z0-9 ]\w+)\]?/,
      optional(/.\&\[([A-z0-9])+\]/),
      optional(/.\&\[([A-z0-9])+\]/),
      optional(/.\&\[([A-z0-9])+\]/),
      optional(/.\&\[([A-z0-9])+\]/),
      optional(/.\&\[([A-z0-9])+\]/),

      optional(/.\&\[([A-z0-9])+\]/),
      optional(/.\&\[([A-z0-9])+\]/),
      optional(/.\&\[([A-z0-9])+\]/),
      //optional(/\.&\[?(\w+)\]?\./),
    ),

    mdx_script: $ => seq(
      "<MdxScript>",
      $.mdx_content,
      "</MdxScript>"
    ),
  }
});
