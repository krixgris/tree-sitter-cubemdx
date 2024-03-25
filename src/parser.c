#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 11,
  [22] = 22,
  [23] = 12,
  [24] = 24,
  [25] = 14,
  [26] = 17,
  [27] = 27,
  [28] = 16,
  [29] = 29,
  [30] = 8,
  [31] = 31,
  [32] = 32,
  [33] = 22,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 20,
  [38] = 38,
  [39] = 19,
  [40] = 32,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 29,
  [45] = 18,
  [46] = 46,
  [47] = 47,
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
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 63,
  [69] = 67,
  [70] = 47,
  [71] = 65,
  [72] = 50,
  [73] = 49,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 75,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 86,
  [89] = 89,
  [90] = 77,
  [91] = 74,
  [92] = 89,
  [93] = 93,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == '[') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 65:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '[') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_tag_with_content_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_calculate_keyword);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__createmember_keyword);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__scope_keyword_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__end_scope_keyword_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_text_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_text_content);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_scope_this_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_numeric_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_member_expression_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_member_expression_token3);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LTMdxScript_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_SLASHMdxScript_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 71},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 71},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 71},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 71},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 71},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 71},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 71},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 71},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 71},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 71},
  [43] = {.lex_state = 71},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 71},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 71},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 71},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 71},
  [62] = {.lex_state = 71},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 71},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 65},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 65},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 65},
  [92] = {.lex_state = 65},
  [93] = {.lex_state = 0},
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
    [sym_program] = STATE(93),
    [sym_tag_with_content] = STATE(34),
    [sym_tag_without_content] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
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
    STATE(7), 4,
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
    STATE(2), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [38] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LTMdxScript_GT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(21), 1,
      sym_text_content,
    STATE(5), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [57] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_text_content,
    ACTIONS(13), 1,
      anon_sym_LTMdxScript_GT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    STATE(7), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [76] = 6,
    ACTIONS(25), 1,
      sym__createmember_keyword,
    ACTIONS(27), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(36), 1,
      sym_scope_begin,
    STATE(13), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [97] = 5,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      anon_sym_LT_SLASH,
    ACTIONS(38), 1,
      sym_text_content,
    ACTIONS(41), 1,
      anon_sym_LTMdxScript_GT,
    STATE(7), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [116] = 3,
    ACTIONS(46), 1,
      aux_sym_member_expression_token2,
    ACTIONS(48), 1,
      aux_sym_member_expression_token3,
    ACTIONS(44), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [130] = 5,
    ACTIONS(50), 1,
      sym__createmember_keyword,
    ACTIONS(53), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(56), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(36), 1,
      sym_scope_begin,
    STATE(9), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [148] = 5,
    ACTIONS(25), 1,
      sym__createmember_keyword,
    ACTIONS(27), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(58), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(36), 1,
      sym_scope_begin,
    STATE(9), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [166] = 3,
    ACTIONS(62), 1,
      aux_sym_member_expression_token2,
    ACTIONS(64), 1,
      aux_sym_member_expression_token3,
    ACTIONS(60), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [180] = 3,
    ACTIONS(68), 1,
      aux_sym_member_expression_token2,
    ACTIONS(70), 1,
      aux_sym_member_expression_token3,
    ACTIONS(66), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [194] = 5,
    ACTIONS(25), 1,
      sym__createmember_keyword,
    ACTIONS(27), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(72), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(36), 1,
      sym_scope_begin,
    STATE(9), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [212] = 3,
    ACTIONS(76), 1,
      aux_sym_member_expression_token2,
    ACTIONS(78), 1,
      aux_sym_member_expression_token3,
    ACTIONS(74), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [226] = 5,
    ACTIONS(25), 1,
      sym__createmember_keyword,
    ACTIONS(27), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(72), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(36), 1,
      sym_scope_begin,
    STATE(10), 3,
      sym_calculated_member,
      sym_scope_statement,
      aux_sym_mdx_content_repeat1,
  [244] = 3,
    ACTIONS(82), 1,
      aux_sym_member_expression_token2,
    ACTIONS(84), 1,
      aux_sym_member_expression_token3,
    ACTIONS(80), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [258] = 3,
    ACTIONS(88), 1,
      aux_sym_member_expression_token2,
    ACTIONS(90), 1,
      aux_sym_member_expression_token3,
    ACTIONS(86), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [272] = 2,
    ACTIONS(68), 1,
      aux_sym_member_expression_token2,
    ACTIONS(66), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [283] = 2,
    ACTIONS(94), 1,
      aux_sym_member_expression_token2,
    ACTIONS(92), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [294] = 2,
    ACTIONS(46), 1,
      aux_sym_member_expression_token2,
    ACTIONS(44), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [305] = 2,
    ACTIONS(96), 1,
      aux_sym_member_expression_token3,
    ACTIONS(60), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [316] = 2,
    ACTIONS(82), 1,
      aux_sym_member_expression_token2,
    ACTIONS(80), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [327] = 2,
    ACTIONS(98), 1,
      aux_sym_member_expression_token3,
    ACTIONS(66), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [338] = 5,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_numeric_value,
    ACTIONS(105), 1,
      aux_sym_member_expression_token1,
    ACTIONS(108), 1,
      aux_sym_member_expression_token2,
    STATE(24), 2,
      sym_member_expression,
      aux_sym_expression_statement_repeat1,
  [355] = 2,
    ACTIONS(111), 1,
      aux_sym_member_expression_token3,
    ACTIONS(74), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [366] = 2,
    ACTIONS(113), 1,
      aux_sym_member_expression_token3,
    ACTIONS(86), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [377] = 5,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      sym_numeric_value,
    ACTIONS(119), 1,
      aux_sym_member_expression_token1,
    ACTIONS(121), 1,
      aux_sym_member_expression_token2,
    STATE(24), 2,
      sym_member_expression,
      aux_sym_expression_statement_repeat1,
  [394] = 2,
    ACTIONS(123), 1,
      aux_sym_member_expression_token3,
    ACTIONS(80), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [405] = 2,
    ACTIONS(76), 1,
      aux_sym_member_expression_token2,
    ACTIONS(74), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [416] = 2,
    ACTIONS(125), 1,
      aux_sym_member_expression_token3,
    ACTIONS(44), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [427] = 5,
    ACTIONS(119), 1,
      aux_sym_member_expression_token1,
    ACTIONS(121), 1,
      aux_sym_member_expression_token2,
    ACTIONS(127), 1,
      sym_numeric_value,
    STATE(76), 1,
      sym_expression_statement,
    STATE(27), 2,
      sym_member_expression,
      aux_sym_expression_statement_repeat1,
  [444] = 2,
    ACTIONS(62), 1,
      aux_sym_member_expression_token2,
    ACTIONS(60), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN_SEMI,
      sym_numeric_value,
      aux_sym_member_expression_token1,
  [455] = 1,
    ACTIONS(80), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [463] = 3,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(35), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [475] = 3,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_LT,
    STATE(35), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [487] = 4,
    ACTIONS(27), 1,
      aux_sym__scope_keyword_token1,
    ACTIONS(136), 1,
      aux_sym_scope_this_token1,
    STATE(36), 1,
      sym_scope_begin,
    STATE(60), 2,
      sym_scope_this,
      sym_scope_statement,
  [501] = 1,
    ACTIONS(44), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [509] = 5,
    ACTIONS(119), 1,
      aux_sym_member_expression_token1,
    ACTIONS(121), 1,
      aux_sym_member_expression_token2,
    ACTIONS(138), 1,
      anon_sym_RPAREN_SEMI,
    STATE(43), 1,
      aux_sym_scope_condition_repeat1,
    STATE(51), 1,
      sym_member_expression,
  [525] = 1,
    ACTIONS(92), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [533] = 1,
    ACTIONS(60), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [541] = 3,
    ACTIONS(142), 1,
      anon_sym_as,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(140), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [553] = 5,
    ACTIONS(119), 1,
      aux_sym_member_expression_token1,
    ACTIONS(121), 1,
      aux_sym_member_expression_token2,
    STATE(38), 1,
      aux_sym_scope_condition_repeat1,
    STATE(51), 1,
      sym_member_expression,
    STATE(80), 1,
      sym_scope_condition,
  [569] = 5,
    ACTIONS(146), 1,
      anon_sym_RPAREN_SEMI,
    ACTIONS(148), 1,
      aux_sym_member_expression_token1,
    ACTIONS(151), 1,
      aux_sym_member_expression_token2,
    STATE(43), 1,
      aux_sym_scope_condition_repeat1,
    STATE(51), 1,
      sym_member_expression,
  [585] = 1,
    ACTIONS(74), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [593] = 1,
    ACTIONS(66), 5,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [601] = 1,
    ACTIONS(154), 4,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      aux_sym__end_scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [608] = 2,
    ACTIONS(158), 1,
      sym_text_content,
    ACTIONS(156), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [617] = 2,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(160), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [626] = 2,
    ACTIONS(166), 1,
      sym_text_content,
    ACTIONS(164), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [635] = 2,
    ACTIONS(170), 1,
      sym_text_content,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [644] = 3,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      aux_sym_member_expression_token2,
    ACTIONS(174), 2,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [655] = 1,
    ACTIONS(178), 4,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      aux_sym__end_scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [662] = 2,
    ACTIONS(182), 1,
      sym_text_content,
    ACTIONS(180), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [671] = 2,
    ACTIONS(184), 1,
      aux_sym_member_expression_token2,
    ACTIONS(146), 2,
      anon_sym_RPAREN_SEMI,
      aux_sym_member_expression_token1,
  [679] = 1,
    ACTIONS(160), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [685] = 3,
    ACTIONS(186), 1,
      aux_sym_member_expression_token1,
    ACTIONS(188), 1,
      aux_sym_member_expression_token2,
    STATE(41), 1,
      sym_member_expression,
  [695] = 1,
    ACTIONS(190), 3,
      sym__createmember_keyword,
      aux_sym__scope_keyword_token1,
      anon_sym_LT_SLASHMdxScript_GT,
  [701] = 2,
    ACTIONS(192), 1,
      sym_calculate_keyword,
    STATE(78), 1,
      sym_mdx_content,
  [708] = 1,
    ACTIONS(194), 2,
      aux_sym__scope_keyword_token1,
      aux_sym_scope_this_token1,
  [713] = 2,
    ACTIONS(196), 1,
      aux_sym__end_scope_keyword_token1,
    STATE(52), 1,
      sym_scope_end,
  [720] = 2,
    ACTIONS(198), 1,
      aux_sym_member_expression_token1,
    ACTIONS(200), 1,
      aux_sym_member_expression_token2,
  [727] = 2,
    ACTIONS(202), 1,
      aux_sym_member_expression_token1,
    ACTIONS(204), 1,
      aux_sym_member_expression_token2,
  [734] = 2,
    ACTIONS(206), 1,
      aux_sym_member_expression_token1,
    ACTIONS(208), 1,
      aux_sym_member_expression_token2,
  [741] = 2,
    ACTIONS(210), 1,
      aux_sym_member_expression_token1,
    ACTIONS(212), 1,
      aux_sym_member_expression_token2,
  [748] = 2,
    ACTIONS(214), 1,
      aux_sym_member_expression_token1,
    ACTIONS(216), 1,
      aux_sym_member_expression_token2,
  [755] = 2,
    ACTIONS(218), 1,
      aux_sym_member_expression_token1,
    ACTIONS(220), 1,
      aux_sym_member_expression_token2,
  [762] = 2,
    ACTIONS(222), 1,
      anon_sym_GT,
    ACTIONS(224), 1,
      anon_sym_SLASH_GT,
  [769] = 2,
    ACTIONS(226), 1,
      aux_sym_member_expression_token1,
    ACTIONS(228), 1,
      aux_sym_member_expression_token2,
  [776] = 2,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(232), 1,
      anon_sym_SLASH_GT,
  [783] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [788] = 2,
    ACTIONS(234), 1,
      aux_sym_member_expression_token1,
    ACTIONS(236), 1,
      aux_sym_member_expression_token2,
  [795] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [800] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [805] = 1,
    ACTIONS(238), 1,
      aux_sym_tag_with_content_token1,
  [809] = 1,
    ACTIONS(240), 1,
      anon_sym_GT,
  [813] = 1,
    ACTIONS(242), 1,
      anon_sym_SEMI,
  [817] = 1,
    ACTIONS(244), 1,
      aux_sym_tag_with_content_token1,
  [821] = 1,
    ACTIONS(246), 1,
      anon_sym_LT_SLASHMdxScript_GT,
  [825] = 1,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
  [829] = 1,
    ACTIONS(250), 1,
      anon_sym_RPAREN_SEMI,
  [833] = 1,
    ACTIONS(252), 1,
      anon_sym_SEMI,
  [837] = 1,
    ACTIONS(254), 1,
      anon_sym_GT,
  [841] = 1,
    ACTIONS(256), 1,
      anon_sym_GT,
  [845] = 1,
    ACTIONS(258), 1,
      anon_sym_EQ,
  [849] = 1,
    ACTIONS(260), 1,
      anon_sym_GT,
  [853] = 1,
    ACTIONS(262), 1,
      aux_sym_member_expression_token2,
  [857] = 1,
    ACTIONS(264), 1,
      aux_sym__end_scope_keyword_token1,
  [861] = 1,
    ACTIONS(266), 1,
      aux_sym_member_expression_token2,
  [865] = 1,
    ACTIONS(268), 1,
      aux_sym_tag_with_content_token1,
  [869] = 1,
    ACTIONS(270), 1,
      aux_sym_tag_with_content_token1,
  [873] = 1,
    ACTIONS(272), 1,
      aux_sym_tag_with_content_token1,
  [877] = 1,
    ACTIONS(274), 1,
      aux_sym_tag_with_content_token1,
  [881] = 1,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 338,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 366,
  [SMALL_STATE(27)] = 377,
  [SMALL_STATE(28)] = 394,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 416,
  [SMALL_STATE(31)] = 427,
  [SMALL_STATE(32)] = 444,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 463,
  [SMALL_STATE(35)] = 475,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 501,
  [SMALL_STATE(38)] = 509,
  [SMALL_STATE(39)] = 525,
  [SMALL_STATE(40)] = 533,
  [SMALL_STATE(41)] = 541,
  [SMALL_STATE(42)] = 553,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 585,
  [SMALL_STATE(45)] = 593,
  [SMALL_STATE(46)] = 601,
  [SMALL_STATE(47)] = 608,
  [SMALL_STATE(48)] = 617,
  [SMALL_STATE(49)] = 626,
  [SMALL_STATE(50)] = 635,
  [SMALL_STATE(51)] = 644,
  [SMALL_STATE(52)] = 655,
  [SMALL_STATE(53)] = 662,
  [SMALL_STATE(54)] = 671,
  [SMALL_STATE(55)] = 679,
  [SMALL_STATE(56)] = 685,
  [SMALL_STATE(57)] = 695,
  [SMALL_STATE(58)] = 701,
  [SMALL_STATE(59)] = 708,
  [SMALL_STATE(60)] = 713,
  [SMALL_STATE(61)] = 720,
  [SMALL_STATE(62)] = 727,
  [SMALL_STATE(63)] = 734,
  [SMALL_STATE(64)] = 741,
  [SMALL_STATE(65)] = 748,
  [SMALL_STATE(66)] = 755,
  [SMALL_STATE(67)] = 762,
  [SMALL_STATE(68)] = 769,
  [SMALL_STATE(69)] = 776,
  [SMALL_STATE(70)] = 783,
  [SMALL_STATE(71)] = 788,
  [SMALL_STATE(72)] = 795,
  [SMALL_STATE(73)] = 800,
  [SMALL_STATE(74)] = 805,
  [SMALL_STATE(75)] = 809,
  [SMALL_STATE(76)] = 813,
  [SMALL_STATE(77)] = 817,
  [SMALL_STATE(78)] = 821,
  [SMALL_STATE(79)] = 825,
  [SMALL_STATE(80)] = 829,
  [SMALL_STATE(81)] = 833,
  [SMALL_STATE(82)] = 837,
  [SMALL_STATE(83)] = 841,
  [SMALL_STATE(84)] = 845,
  [SMALL_STATE(85)] = 849,
  [SMALL_STATE(86)] = 853,
  [SMALL_STATE(87)] = 857,
  [SMALL_STATE(88)] = 861,
  [SMALL_STATE(89)] = 865,
  [SMALL_STATE(90)] = 869,
  [SMALL_STATE(91)] = 873,
  [SMALL_STATE(92)] = 877,
  [SMALL_STATE(93)] = 881,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 1),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(89),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(58),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2), SHIFT_REPEAT(56),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2), SHIFT_REPEAT(79),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 6),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 7),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 7),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_statement_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_statement_repeat1, 2), SHIFT_REPEAT(24),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_statement_repeat1, 2), SHIFT_REPEAT(66),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_statement_repeat1, 2), SHIFT_REPEAT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_condition, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_condition_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_condition_repeat1, 2), SHIFT_REPEAT(66),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scope_condition_repeat1, 2), SHIFT_REPEAT(17),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_end, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 7),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_without_content, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_without_content, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_condition_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_condition_repeat1, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_statement, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mdx_script, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_script, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scope_condition_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_begin, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_this, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [276] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
