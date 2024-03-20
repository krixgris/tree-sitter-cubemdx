#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  aux_sym_tag_with_content_token1 = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_SLASH_GT = 5,
  sym_calculate_keyword = 6,
  sym__createmember_keyword = 7,
  sym__scope_keyword = 8,
  sym__end_scope_keyword = 9,
  sym_text_content = 10,
  anon_sym_SEMI = 11,
  anon_sym_as = 12,
  anon_sym_COMMA = 13,
  aux_sym_member_expression_token1 = 14,
  aux_sym_member_expression_token2 = 15,
  aux_sym_member_expression_token3 = 16,
  anon_sym_LTMdxScript_GT = 17,
  anon_sym_LT_SLASHMdxScript_GT = 18,
  sym_program = 19,
  sym_tag_with_content = 20,
  sym_tag_without_content = 21,
  sym_mdx_content = 22,
  sym_calculated_member = 23,
  sym_member_expression = 24,
  sym_mdx_script = 25,
  aux_sym_program_repeat1 = 26,
  aux_sym_tag_with_content_repeat1 = 27,
  aux_sym_mdx_content_repeat1 = 28,
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
  [sym__scope_keyword] = "_scope_keyword",
  [sym__end_scope_keyword] = "_end_scope_keyword",
  [sym_text_content] = "text_content",
  [anon_sym_SEMI] = ";",
  [anon_sym_as] = "as",
  [anon_sym_COMMA] = ",",
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
  [sym_member_expression] = "member_expression",
  [sym_mdx_script] = "mdx_script",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_tag_with_content_repeat1] = "tag_with_content_repeat1",
  [aux_sym_mdx_content_repeat1] = "mdx_content_repeat1",
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
  [sym__scope_keyword] = sym__scope_keyword,
  [sym__end_scope_keyword] = sym__end_scope_keyword,
  [sym_text_content] = sym_text_content,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_member_expression] = sym_member_expression,
  [sym_mdx_script] = sym_mdx_script,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_tag_with_content_repeat1] = aux_sym_tag_with_content_repeat1,
  [aux_sym_mdx_content_repeat1] = aux_sym_mdx_content_repeat1,
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
  [sym__scope_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__end_scope_keyword] = {
    .visible = false,
    .named = true,
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
  [4] = 2,
  [5] = 3,
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 79,
  [103] = 103,
  [104] = 78,
  [105] = 77,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 110,
  [113] = 107,
  [114] = 108,
  [115] = 115,
  [116] = 111,
  [117] = 117,
  [118] = 115,
  [119] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '[') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ']') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == ' ' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '[') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 70:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 72:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '[') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_tag_with_content_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_calculate_keyword);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__createmember_keyword);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__scope_keyword);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__end_scope_keyword);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_text_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_text_content);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '&') ADVANCE(22);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_member_expression_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ']') ADVANCE(95);
      if (lookahead == ' ' ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_member_expression_token2);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_member_expression_token3);
      if (lookahead == ']') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LTMdxScript_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_SLASHMdxScript_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 75},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 75},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 75},
  [93] = {.lex_state = 75},
  [94] = {.lex_state = 75},
  [95] = {.lex_state = 75},
  [96] = {.lex_state = 75},
  [97] = {.lex_state = 75},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 75},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 75},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 75},
  [105] = {.lex_state = 75},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 70},
  [111] = {.lex_state = 70},
  [112] = {.lex_state = 70},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 70},
  [116] = {.lex_state = 70},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 70},
  [119] = {.lex_state = 0},
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
    [sym__scope_keyword] = ACTIONS(1),
    [sym__end_scope_keyword] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LTMdxScript_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(119),
    [sym_tag_with_content] = STATE(63),
    [sym_tag_without_content] = STATE(63),
    [aux_sym_program_repeat1] = STATE(63),
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
    STATE(5), 4,
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
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(21), 1,
      sym_text_content,
    STATE(3), 4,
      sym_tag_with_content,
      sym_tag_without_content,
      sym_mdx_script,
      aux_sym_tag_with_content_repeat1,
  [57] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LTMdxScript_GT,
    ACTIONS(17), 1,
      sym_text_content,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    STATE(6), 4,
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
  [95] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(40), 1,
      aux_sym_member_expression_token3,
    ACTIONS(36), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [107] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(42), 1,
      aux_sym_member_expression_token3,
    ACTIONS(36), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [119] = 3,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(48), 1,
      aux_sym_member_expression_token3,
    ACTIONS(44), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [131] = 3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_LT,
    STATE(10), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [143] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      aux_sym_member_expression_token3,
    ACTIONS(55), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [155] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      aux_sym_member_expression_token3,
    ACTIONS(55), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [167] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      aux_sym_member_expression_token3,
    ACTIONS(63), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [179] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      aux_sym_member_expression_token3,
    ACTIONS(63), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [191] = 4,
    ACTIONS(71), 1,
      sym__createmember_keyword,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(89), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [205] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      aux_sym_member_expression_token3,
    ACTIONS(63), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [217] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      aux_sym_member_expression_token3,
    ACTIONS(79), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [229] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      aux_sym_member_expression_token3,
    ACTIONS(79), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [241] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      aux_sym_member_expression_token3,
    ACTIONS(79), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [253] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      aux_sym_member_expression_token3,
    ACTIONS(79), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [265] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      aux_sym_member_expression_token3,
    ACTIONS(91), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [277] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      aux_sym_member_expression_token3,
    ACTIONS(91), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [289] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      aux_sym_member_expression_token3,
    ACTIONS(91), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [301] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      aux_sym_member_expression_token3,
    ACTIONS(91), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [313] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      aux_sym_member_expression_token3,
    ACTIONS(103), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [325] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      aux_sym_member_expression_token3,
    ACTIONS(91), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [337] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      aux_sym_member_expression_token3,
    ACTIONS(111), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [349] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      aux_sym_member_expression_token3,
    ACTIONS(111), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [361] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      aux_sym_member_expression_token3,
    ACTIONS(111), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [373] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      aux_sym_member_expression_token3,
    ACTIONS(111), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [385] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      aux_sym_member_expression_token3,
    ACTIONS(123), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [397] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      aux_sym_member_expression_token3,
    ACTIONS(123), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [409] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      aux_sym_member_expression_token3,
    ACTIONS(111), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [421] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      aux_sym_member_expression_token3,
    ACTIONS(111), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [433] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      aux_sym_member_expression_token3,
    ACTIONS(36), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [445] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      aux_sym_member_expression_token3,
    ACTIONS(137), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [457] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      aux_sym_member_expression_token3,
    ACTIONS(137), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [469] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      aux_sym_member_expression_token3,
    ACTIONS(137), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [481] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      aux_sym_member_expression_token3,
    ACTIONS(147), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [493] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      aux_sym_member_expression_token3,
    ACTIONS(147), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [505] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      aux_sym_member_expression_token3,
    ACTIONS(155), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [517] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      aux_sym_member_expression_token3,
    ACTIONS(155), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [529] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      aux_sym_member_expression_token3,
    ACTIONS(155), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [541] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      aux_sym_member_expression_token3,
    ACTIONS(155), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [553] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      aux_sym_member_expression_token3,
    ACTIONS(147), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [565] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      aux_sym_member_expression_token3,
    ACTIONS(169), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [577] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      aux_sym_member_expression_token3,
    ACTIONS(169), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [589] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      aux_sym_member_expression_token3,
    ACTIONS(169), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [601] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      aux_sym_member_expression_token3,
    ACTIONS(169), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [613] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      aux_sym_member_expression_token3,
    ACTIONS(169), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [625] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      aux_sym_member_expression_token3,
    ACTIONS(147), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [637] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      aux_sym_member_expression_token3,
    ACTIONS(185), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [649] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym_member_expression_token3,
    ACTIONS(185), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [661] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      aux_sym_member_expression_token3,
    ACTIONS(185), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [673] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      aux_sym_member_expression_token3,
    ACTIONS(185), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [685] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      aux_sym_member_expression_token3,
    ACTIONS(185), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [697] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      aux_sym_member_expression_token3,
    ACTIONS(185), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [709] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_member_expression_token3,
    ACTIONS(147), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [721] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      aux_sym_member_expression_token3,
    ACTIONS(36), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [733] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      aux_sym_member_expression_token3,
    ACTIONS(36), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [745] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      aux_sym_member_expression_token3,
    ACTIONS(36), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [757] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      aux_sym_member_expression_token3,
    ACTIONS(36), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [769] = 3,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(10), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [781] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      aux_sym_member_expression_token3,
    ACTIONS(147), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [793] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [805] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [817] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [829] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [841] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [853] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [865] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [877] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      aux_sym_member_expression_token3,
    ACTIONS(215), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [889] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      aux_sym_member_expression_token3,
    ACTIONS(147), 3,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_LT_SLASHMdxScript_GT,
  [901] = 1,
    ACTIONS(44), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [908] = 1,
    ACTIONS(237), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [915] = 1,
    ACTIONS(79), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [922] = 2,
    ACTIONS(241), 1,
      sym_text_content,
    ACTIONS(239), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [931] = 2,
    ACTIONS(245), 1,
      sym_text_content,
    ACTIONS(243), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [940] = 2,
    ACTIONS(249), 1,
      sym_text_content,
    ACTIONS(247), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [949] = 3,
    ACTIONS(251), 1,
      sym__createmember_keyword,
    ACTIONS(254), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(80), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [960] = 1,
    ACTIONS(55), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [967] = 1,
    ACTIONS(63), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [974] = 1,
    ACTIONS(147), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [981] = 3,
    ACTIONS(71), 1,
      sym__createmember_keyword,
    ACTIONS(256), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(86), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [992] = 1,
    ACTIONS(91), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [999] = 3,
    ACTIONS(71), 1,
      sym__createmember_keyword,
    ACTIONS(258), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(80), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [1010] = 1,
    ACTIONS(111), 4,
      sym__createmember_keyword,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LT_SLASHMdxScript_GT,
  [1017] = 3,
    ACTIONS(262), 1,
      anon_sym_as,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(260), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [1028] = 3,
    ACTIONS(71), 1,
      sym__createmember_keyword,
    ACTIONS(256), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(80), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [1039] = 2,
    ACTIONS(268), 1,
      sym_text_content,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [1048] = 2,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(270), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [1056] = 3,
    ACTIONS(274), 1,
      aux_sym_member_expression_token1,
    ACTIONS(276), 1,
      aux_sym_member_expression_token2,
    STATE(88), 1,
      sym_member_expression,
  [1066] = 2,
    ACTIONS(278), 1,
      aux_sym_member_expression_token1,
    ACTIONS(280), 1,
      aux_sym_member_expression_token2,
  [1073] = 2,
    ACTIONS(282), 1,
      aux_sym_member_expression_token1,
    ACTIONS(284), 1,
      aux_sym_member_expression_token2,
  [1080] = 2,
    ACTIONS(286), 1,
      aux_sym_member_expression_token1,
    ACTIONS(288), 1,
      aux_sym_member_expression_token2,
  [1087] = 2,
    ACTIONS(290), 1,
      aux_sym_member_expression_token1,
    ACTIONS(292), 1,
      aux_sym_member_expression_token2,
  [1094] = 2,
    ACTIONS(294), 1,
      aux_sym_member_expression_token1,
    ACTIONS(296), 1,
      aux_sym_member_expression_token2,
  [1101] = 2,
    ACTIONS(298), 1,
      anon_sym_GT,
    ACTIONS(300), 1,
      anon_sym_SLASH_GT,
  [1108] = 2,
    ACTIONS(302), 1,
      anon_sym_GT,
    ACTIONS(304), 1,
      anon_sym_SLASH_GT,
  [1115] = 2,
    ACTIONS(306), 1,
      aux_sym_member_expression_token1,
    ACTIONS(308), 1,
      aux_sym_member_expression_token2,
  [1122] = 2,
    ACTIONS(310), 1,
      sym_calculate_keyword,
    STATE(117), 1,
      sym_mdx_content,
  [1129] = 1,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [1134] = 1,
    ACTIONS(270), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [1139] = 1,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [1144] = 1,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [1149] = 1,
    ACTIONS(312), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [1154] = 1,
    ACTIONS(314), 1,
      anon_sym_GT,
  [1158] = 1,
    ACTIONS(316), 1,
      anon_sym_GT,
  [1162] = 1,
    ACTIONS(318), 1,
      aux_sym_member_expression_token2,
  [1166] = 1,
    ACTIONS(320), 1,
      aux_sym_tag_with_content_token1,
  [1170] = 1,
    ACTIONS(322), 1,
      aux_sym_tag_with_content_token1,
  [1174] = 1,
    ACTIONS(324), 1,
      aux_sym_tag_with_content_token1,
  [1178] = 1,
    ACTIONS(326), 1,
      anon_sym_GT,
  [1182] = 1,
    ACTIONS(328), 1,
      anon_sym_GT,
  [1186] = 1,
    ACTIONS(330), 1,
      aux_sym_tag_with_content_token1,
  [1190] = 1,
    ACTIONS(332), 1,
      aux_sym_tag_with_content_token1,
  [1194] = 1,
    ACTIONS(334), 1,
      anon_sym_LT_SLASHMdxScript_GT,
  [1198] = 1,
    ACTIONS(336), 1,
      aux_sym_tag_with_content_token1,
  [1202] = 1,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 191,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 229,
  [SMALL_STATE(19)] = 241,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 277,
  [SMALL_STATE(23)] = 289,
  [SMALL_STATE(24)] = 301,
  [SMALL_STATE(25)] = 313,
  [SMALL_STATE(26)] = 325,
  [SMALL_STATE(27)] = 337,
  [SMALL_STATE(28)] = 349,
  [SMALL_STATE(29)] = 361,
  [SMALL_STATE(30)] = 373,
  [SMALL_STATE(31)] = 385,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 421,
  [SMALL_STATE(35)] = 433,
  [SMALL_STATE(36)] = 445,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 469,
  [SMALL_STATE(39)] = 481,
  [SMALL_STATE(40)] = 493,
  [SMALL_STATE(41)] = 505,
  [SMALL_STATE(42)] = 517,
  [SMALL_STATE(43)] = 529,
  [SMALL_STATE(44)] = 541,
  [SMALL_STATE(45)] = 553,
  [SMALL_STATE(46)] = 565,
  [SMALL_STATE(47)] = 577,
  [SMALL_STATE(48)] = 589,
  [SMALL_STATE(49)] = 601,
  [SMALL_STATE(50)] = 613,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 637,
  [SMALL_STATE(53)] = 649,
  [SMALL_STATE(54)] = 661,
  [SMALL_STATE(55)] = 673,
  [SMALL_STATE(56)] = 685,
  [SMALL_STATE(57)] = 697,
  [SMALL_STATE(58)] = 709,
  [SMALL_STATE(59)] = 721,
  [SMALL_STATE(60)] = 733,
  [SMALL_STATE(61)] = 745,
  [SMALL_STATE(62)] = 757,
  [SMALL_STATE(63)] = 769,
  [SMALL_STATE(64)] = 781,
  [SMALL_STATE(65)] = 793,
  [SMALL_STATE(66)] = 805,
  [SMALL_STATE(67)] = 817,
  [SMALL_STATE(68)] = 829,
  [SMALL_STATE(69)] = 841,
  [SMALL_STATE(70)] = 853,
  [SMALL_STATE(71)] = 865,
  [SMALL_STATE(72)] = 877,
  [SMALL_STATE(73)] = 889,
  [SMALL_STATE(74)] = 901,
  [SMALL_STATE(75)] = 908,
  [SMALL_STATE(76)] = 915,
  [SMALL_STATE(77)] = 922,
  [SMALL_STATE(78)] = 931,
  [SMALL_STATE(79)] = 940,
  [SMALL_STATE(80)] = 949,
  [SMALL_STATE(81)] = 960,
  [SMALL_STATE(82)] = 967,
  [SMALL_STATE(83)] = 974,
  [SMALL_STATE(84)] = 981,
  [SMALL_STATE(85)] = 992,
  [SMALL_STATE(86)] = 999,
  [SMALL_STATE(87)] = 1010,
  [SMALL_STATE(88)] = 1017,
  [SMALL_STATE(89)] = 1028,
  [SMALL_STATE(90)] = 1039,
  [SMALL_STATE(91)] = 1048,
  [SMALL_STATE(92)] = 1056,
  [SMALL_STATE(93)] = 1066,
  [SMALL_STATE(94)] = 1073,
  [SMALL_STATE(95)] = 1080,
  [SMALL_STATE(96)] = 1087,
  [SMALL_STATE(97)] = 1094,
  [SMALL_STATE(98)] = 1101,
  [SMALL_STATE(99)] = 1108,
  [SMALL_STATE(100)] = 1115,
  [SMALL_STATE(101)] = 1122,
  [SMALL_STATE(102)] = 1129,
  [SMALL_STATE(103)] = 1134,
  [SMALL_STATE(104)] = 1139,
  [SMALL_STATE(105)] = 1144,
  [SMALL_STATE(106)] = 1149,
  [SMALL_STATE(107)] = 1154,
  [SMALL_STATE(108)] = 1158,
  [SMALL_STATE(109)] = 1162,
  [SMALL_STATE(110)] = 1166,
  [SMALL_STATE(111)] = 1170,
  [SMALL_STATE(112)] = 1174,
  [SMALL_STATE(113)] = 1178,
  [SMALL_STATE(114)] = 1182,
  [SMALL_STATE(115)] = 1186,
  [SMALL_STATE(116)] = 1190,
  [SMALL_STATE(117)] = 1194,
  [SMALL_STATE(118)] = 1198,
  [SMALL_STATE(119)] = 1202,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(115),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(101),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 7),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 7),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 15),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 15),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(118),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 14),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 14),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 13),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 12),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 11),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 11),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 10),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 9),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 9),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 6),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 8),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 8),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 16),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 7),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 6),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_without_content, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_without_content, 3),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2), SHIFT_REPEAT(92),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mdx_script, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_script, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
