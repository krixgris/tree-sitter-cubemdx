#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  aux_sym_tag_with_content_token1 = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_SLASH_GT = 5,
  sym_calculate_keyword = 6,
  sym__createmember_keyword = 7,
  aux_sym__scope_keyword_token1 = 8,
  aux_sym__end_scope_keyword_token1 = 9,
  sym_text_content = 10,
  anon_sym_SEMI = 11,
  anon_sym_as = 12,
  anon_sym_COMMA = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN_SEMI = 15,
  aux_sym_scope_this_token1 = 16,
  anon_sym_EQ = 17,
  sym_numeric_value = 18,
  aux_sym_member_expression_token1 = 19,
  aux_sym_member_expression_token2 = 20,
  aux_sym_member_expression_token3 = 21,
  anon_sym_LTMdxScript_GT = 22,
  anon_sym_LT_SLASHMdxScript_GT = 23,
  sym_program = 24,
  sym_tag_with_content = 25,
  sym_tag_without_content = 26,
  sym_mdx_content = 27,
  sym_calculated_member = 28,
  sym_scope_begin = 29,
  sym_scope_end = 30,
  sym_scope_condition = 31,
  sym_scope_this = 32,
  sym_scope_statement = 33,
  sym_expression_statement = 34,
  sym_member_expression = 35,
  sym_mdx_script = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_tag_with_content_repeat1 = 38,
  aux_sym_mdx_content_repeat1 = 39,
  aux_sym_scope_condition_repeat1 = 40,
  aux_sym_expression_statement_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [aux_sym_tag_with_content_token1] = "tag_with_content_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [sym_calculate_keyword] = "calculate_keyword",
  [sym__createmember_keyword] = "_createmember_keyword",
  [aux_sym__scope_keyword_token1] = "_scope_keyword_token1",
  [aux_sym__end_scope_keyword_token1] = "_end_scope_keyword_token1",
  [sym_text_content] = "text_content",
  [anon_sym_SEMI] = ";",
  [anon_sym_as] = "as",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN_SEMI] = ");",
  [aux_sym_scope_this_token1] = "scope_this_token1",
  [anon_sym_EQ] = "=",
  [sym_numeric_value] = "numeric_value",
  [aux_sym_member_expression_token1] = "member_expression_token1",
  [aux_sym_member_expression_token2] = "member_expression_token2",
  [aux_sym_member_expression_token3] = "member_expression_token3",
  [anon_sym_LTMdxScript_GT] = "<MdxScript>",
  [anon_sym_LT_SLASHMdxScript_GT] = "</MdxScript>",
  [sym_program] = "program",
  [sym_tag_with_content] = "tag_with_content",
  [sym_tag_without_content] = "tag_without_content",
  [sym_mdx_content] = "mdx_content",
  [sym_calculated_member] = "calculated_member",
  [sym_scope_begin] = "scope_begin",
  [sym_scope_end] = "scope_end",
  [sym_scope_condition] = "scope_condition",
  [sym_scope_this] = "scope_this",
  [sym_scope_statement] = "scope_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_member_expression] = "member_expression",
  [sym_mdx_script] = "mdx_script",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_tag_with_content_repeat1] = "tag_with_content_repeat1",
  [aux_sym_mdx_content_repeat1] = "mdx_content_repeat1",
  [aux_sym_scope_condition_repeat1] = "scope_condition_repeat1",
  [aux_sym_expression_statement_repeat1] = "expression_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_tag_with_content_token1] = aux_sym_tag_with_content_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym_calculate_keyword] = sym_calculate_keyword,
  [sym__createmember_keyword] = sym__createmember_keyword,
  [aux_sym__scope_keyword_token1] = aux_sym__scope_keyword_token1,
  [aux_sym__end_scope_keyword_token1] = aux_sym__end_scope_keyword_token1,
  [sym_text_content] = sym_text_content,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN_SEMI] = anon_sym_RPAREN_SEMI,
  [aux_sym_scope_this_token1] = aux_sym_scope_this_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_numeric_value] = sym_numeric_value,
  [aux_sym_member_expression_token1] = aux_sym_member_expression_token1,
  [aux_sym_member_expression_token2] = aux_sym_member_expression_token2,
  [aux_sym_member_expression_token3] = aux_sym_member_expression_token3,
  [anon_sym_LTMdxScript_GT] = anon_sym_LTMdxScript_GT,
  [anon_sym_LT_SLASHMdxScript_GT] = anon_sym_LT_SLASHMdxScript_GT,
  [sym_program] = sym_program,
  [sym_tag_with_content] = sym_tag_with_content,
  [sym_tag_without_content] = sym_tag_without_content,
  [sym_mdx_content] = sym_mdx_content,
  [sym_calculated_member] = sym_calculated_member,
  [sym_scope_begin] = sym_scope_begin,
  [sym_scope_end] = sym_scope_end,
  [sym_scope_condition] = sym_scope_condition,
  [sym_scope_this] = sym_scope_this,
  [sym_scope_statement] = sym_scope_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_member_expression] = sym_member_expression,
  [sym_mdx_script] = sym_mdx_script,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_tag_with_content_repeat1] = aux_sym_tag_with_content_repeat1,
  [aux_sym_mdx_content_repeat1] = aux_sym_mdx_content_repeat1,
  [aux_sym_scope_condition_repeat1] = aux_sym_scope_condition_repeat1,
  [aux_sym_expression_statement_repeat1] = aux_sym_expression_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_with_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_calculate_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__createmember_keyword] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__scope_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_scope_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scope_this_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_numeric_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_member_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_member_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_member_expression_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LTMdxScript_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHMdxScript_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_with_content] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_without_content] = {
    .visible = true,
    .named = true,
  },
  [sym_mdx_content] = {
    .visible = true,
    .named = true,
  },
  [sym_calculated_member] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_end] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_this] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_mdx_script] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_with_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mdx_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 15,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 36,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 34,
  [47] = 37,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 56,
  [63] = 60,
  [64] = 54,
  [65] = 50,
  [66] = 59,
  [67] = 51,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == ']') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == ' ' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '[') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == '[') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 67:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 68:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 71:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(87);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '_') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_tag_with_content_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_calculate_keyword);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__createmember_keyword);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__scope_keyword_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__end_scope_keyword_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_text_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_text_content);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_scope_this_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_numeric_value);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == ']') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_numeric_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_member_expression_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == ' ' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_member_expression_token3);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LTMdxScript_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_SLASHMdxScript_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 73},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 68},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 68},
  [66] = {.lex_state = 68},
  [67] = {.lex_state = 68},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_calculate_keyword] = ACTIONS(1),
    [sym__createmember_keyword] = ACTIONS(1),
    [aux_sym__scope_keyword_token1] = ACTIONS(1),
    [aux_sym__end_scope_keyword_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN_SEMI] = ACTIONS(1),
    [aux_sym_scope_this_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_numeric_value] = ACTIONS(1),
    [aux_sym_member_expression_token3] = ACTIONS(1),
    [anon_sym_LTMdxScript_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(69),
    [sym_tag_with_content] = STATE(24),
    [sym_tag_without_content] = STATE(24),
    [aux_sym_program_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LT_SLASH,
    ACTIONS(11), 1,
      sym_text_content,
    ACTIONS(13), 1,
      anon_sym_LTMdxScript_GT,
    STATE(3), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [19] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LTMdxScript_GT,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym_text_content,
    STATE(6), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [38] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LTMdxScript_GT,
    ACTIONS(17), 1,
      sym_text_content,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    STATE(6), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [57] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LTMdxScript_GT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      sym_text_content,
    STATE(4), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [76] = 5,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(28), 1,
      anon_sym_LT_SLASH,
    ACTIONS(30), 1,
      sym_text_content,
    ACTIONS(33), 1,
      anon_sym_LTMdxScript_GT,
    STATE(6), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [95] = 6,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(38), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(40), 1,
      anon_sym_SEMI,
    ACTIONS(42), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(25), 1,
      sym_scope_begin,
    STATE(13), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [116] = 5,
    ACTIONS(44), 1,
      sym__createmember_keyword,
    ACTIONS(47), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(50), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(25), 1,
      sym_scope_begin,
    STATE(8), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [134] = 5,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(38), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(52), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(25), 1,
      sym_scope_begin,
    STATE(11), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [152] = 3,
    ACTIONS(58), 1,
      aux_sym_member_expression_token3,
    ACTIONS(56), 2,
      sym_numeric_value,
      aux_sym_member_expression_token2,
    ACTIONS(54), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [166] = 5,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(38), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(25), 1,
      sym_scope_begin,
    STATE(8), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [184] = 3,
    ACTIONS(66), 1,
      aux_sym_member_expression_token3,
    ACTIONS(64), 2,
      sym_numeric_value,
      aux_sym_member_expression_token2,
    ACTIONS(62), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [198] = 5,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(38), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(52), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(25), 1,
      sym_scope_begin,
    STATE(8), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [216] = 2,
    ACTIONS(68), 1,
      aux_sym_member_expression_token3,
    ACTIONS(62), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [227] = 2,
    ACTIONS(72), 2,
      sym_numeric_value,
      aux_sym_member_expression_token2,
    ACTIONS(70), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [238] = 5,
    ACTIONS(74), 1,
      sym_numeric_value,
    ACTIONS(76), 1,
      aux_sym_member_expression_token1,
    ACTIONS(78), 1,
      aux_sym_member_expression_token2,
    STATE(55), 1,
      sym_expression_statement,
    STATE(18), 2,
      sym_member_expression,
      aux_sym_expression_statement_repeat1,
  [255] = 2,
    ACTIONS(64), 2,
      sym_numeric_value,
      aux_sym_member_expression_token2,
    ACTIONS(62), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [266] = 5,
    ACTIONS(76), 1,
      aux_sym_member_expression_token1,
    ACTIONS(78), 1,
      aux_sym_member_expression_token2,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      sym_numeric_value,
    STATE(20), 2,
      sym_member_expression,
      aux_sym_expression_statement_repeat1,
  [283] = 2,
    ACTIONS(84), 1,
      aux_sym_member_expression_token3,
    ACTIONS(54), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [294] = 5,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      sym_numeric_value,
    ACTIONS(91), 1,
      aux_sym_member_expression_token1,
    ACTIONS(94), 1,
      aux_sym_member_expression_token2,
    STATE(20), 2,
      sym_member_expression,
      aux_sym_expression_statement_repeat1,
  [311] = 3,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(21), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [323] = 5,
    ACTIONS(102), 1,
      anon_sym_RPAREN_SEMI,
    ACTIONS(104), 1,
      aux_sym_member_expression_token1,
    ACTIONS(107), 1,
      aux_sym_member_expression_token2,
    STATE(22), 1,
      aux_sym_scope_condition_repeat1,
    STATE(32), 1,
      sym_member_expression,
  [339] = 1,
    ACTIONS(70), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [347] = 3,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(21), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [359] = 4,
    ACTIONS(38), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(112), 1,
      aux_sym_scope_this_token1,
    STATE(25), 1,
      sym_scope_begin,
    STATE(45), 2,
      sym_scope_this,
      sym_scope_statement,
  [373] = 1,
    ACTIONS(62), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [381] = 5,
    ACTIONS(76), 1,
      aux_sym_member_expression_token1,
    ACTIONS(78), 1,
      aux_sym_member_expression_token2,
    ACTIONS(114), 1,
      anon_sym_RPAREN_SEMI,
    STATE(22), 1,
      aux_sym_scope_condition_repeat1,
    STATE(32), 1,
      sym_member_expression,
  [397] = 3,
    ACTIONS(118), 1,
      anon_sym_as,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(116), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [409] = 5,
    ACTIONS(76), 1,
      aux_sym_member_expression_token1,
    ACTIONS(78), 1,
      aux_sym_member_expression_token2,
    STATE(27), 1,
      aux_sym_scope_condition_repeat1,
    STATE(32), 1,
      sym_member_expression,
    STATE(61), 1,
      sym_scope_condition,
  [425] = 1,
    ACTIONS(122), 4,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      aux_sym__end_scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [432] = 2,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(124), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [441] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      aux_sym_member_expression_token2,
    ACTIONS(130), 2,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [452] = 2,
    ACTIONS(136), 1,
      sym_text_content,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [461] = 2,
    ACTIONS(140), 1,
      sym_text_content,
    ACTIONS(138), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [470] = 1,
    ACTIONS(142), 4,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      aux_sym__end_scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [477] = 2,
    ACTIONS(146), 1,
      sym_text_content,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [486] = 2,
    ACTIONS(150), 1,
      sym_text_content,
    ACTIONS(148), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [495] = 1,
    ACTIONS(124), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [501] = 1,
    ACTIONS(152), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [507] = 2,
    ACTIONS(154), 1,
      aux_sym_member_expression_token2,
    ACTIONS(102), 2,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [515] = 3,
    ACTIONS(156), 1,
      aux_sym_member_expression_token1,
    ACTIONS(158), 1,
      aux_sym_member_expression_token2,
    STATE(28), 1,
      sym_member_expression,
  [525] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [530] = 2,
    ACTIONS(160), 1,
      anon_sym_GT,
    ACTIONS(162), 1,
      anon_sym_SLASH_GT,
  [537] = 2,
    ACTIONS(164), 1,
      anon_sym_GT,
    ACTIONS(166), 1,
      anon_sym_SLASH_GT,
  [544] = 2,
    ACTIONS(168), 1,
      aux_sym__end_scope_keyword_token1,
    STATE(35), 1,
      sym_scope_end,
  [551] = 1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [556] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [561] = 2,
    ACTIONS(170), 1,
      sym_calculate_keyword,
    STATE(53), 1,
      sym_mdx_content,
  [568] = 1,
    ACTIONS(172), 2,
      aux_sym__scope_keyword_token1,
      aux_sym_scope_this_token1,
  [573] = 1,
    ACTIONS(174), 1,
      aux_sym_tag_with_content_token1,
  [577] = 1,
    ACTIONS(176), 1,
      aux_sym_tag_with_content_token1,
  [581] = 1,
    ACTIONS(178), 1,
      aux_sym__end_scope_keyword_token1,
  [585] = 1,
    ACTIONS(180), 1,
      anon_sym_LT_SLASHMdxScript_GT,
  [589] = 1,
    ACTIONS(182), 1,
      aux_sym_member_expression_token2,
  [593] = 1,
    ACTIONS(184), 1,
      anon_sym_SEMI,
  [597] = 1,
    ACTIONS(186), 1,
      anon_sym_GT,
  [601] = 1,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
  [605] = 1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [609] = 1,
    ACTIONS(192), 1,
      aux_sym_tag_with_content_token1,
  [613] = 1,
    ACTIONS(194), 1,
      anon_sym_GT,
  [617] = 1,
    ACTIONS(196), 1,
      anon_sym_RPAREN_SEMI,
  [621] = 1,
    ACTIONS(198), 1,
      anon_sym_GT,
  [625] = 1,
    ACTIONS(200), 1,
      anon_sym_GT,
  [629] = 1,
    ACTIONS(202), 1,
      aux_sym_member_expression_token2,
  [633] = 1,
    ACTIONS(204), 1,
      aux_sym_tag_with_content_token1,
  [637] = 1,
    ACTIONS(206), 1,
      aux_sym_tag_with_content_token1,
  [641] = 1,
    ACTIONS(208), 1,
      aux_sym_tag_with_content_token1,
  [645] = 1,
    ACTIONS(210), 1,
      anon_sym_EQ,
  [649] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 216,
  [SMALL_STATE(15)] = 227,
  [SMALL_STATE(16)] = 238,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 311,
  [SMALL_STATE(22)] = 323,
  [SMALL_STATE(23)] = 339,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 359,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 441,
  [SMALL_STATE(33)] = 452,
  [SMALL_STATE(34)] = 461,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 477,
  [SMALL_STATE(37)] = 486,
  [SMALL_STATE(38)] = 495,
  [SMALL_STATE(39)] = 501,
  [SMALL_STATE(40)] = 507,
  [SMALL_STATE(41)] = 515,
  [SMALL_STATE(42)] = 525,
  [SMALL_STATE(43)] = 530,
  [SMALL_STATE(44)] = 537,
  [SMALL_STATE(45)] = 544,
  [SMALL_STATE(46)] = 551,
  [SMALL_STATE(47)] = 556,
  [SMALL_STATE(48)] = 561,
  [SMALL_STATE(49)] = 568,
  [SMALL_STATE(50)] = 573,
  [SMALL_STATE(51)] = 577,
  [SMALL_STATE(52)] = 581,
  [SMALL_STATE(53)] = 585,
  [SMALL_STATE(54)] = 589,
  [SMALL_STATE(55)] = 593,
  [SMALL_STATE(56)] = 597,
  [SMALL_STATE(57)] = 601,
  [SMALL_STATE(58)] = 605,
  [SMALL_STATE(59)] = 609,
  [SMALL_STATE(60)] = 613,
  [SMALL_STATE(61)] = 617,
  [SMALL_STATE(62)] = 621,
  [SMALL_STATE(63)] = 625,
  [SMALL_STATE(64)] = 629,
  [SMALL_STATE(65)] = 633,
  [SMALL_STATE(66)] = 637,
  [SMALL_STATE(67)] = 641,
  [SMALL_STATE(68)] = 645,
  [SMALL_STATE(69)] = 649,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(65),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(48),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 1),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2), SHIFT_REPEAT(41),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2), SHIFT_REPEAT(57),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_statement_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_statement_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_statement_repeat1, 2), SHIFT_REPEAT(64),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_statement_repeat1, 2), SHIFT_REPEAT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_condition_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_condition_repeat1, 2), SHIFT_REPEAT(64),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_condition_repeat1, 2), SHIFT_REPEAT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_condition, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_end, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_condition_repeat1, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_condition_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mdx_script, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_script, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_statement, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 6),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 6),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_without_content, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_without_content, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_condition_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_begin, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_this, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cubemdx() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
