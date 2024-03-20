#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  sym__scope_keyword = 8,
  sym__end_scope_keyword = 9,
  sym_text_content = 10,
  anon_sym_SEMI = 11,
  aux_sym_calculated_member_token1 = 12,
  anon_sym_as = 13,
  anon_sym_COMMA = 14,
  anon_sym_LTMdxScript_GT = 15,
  anon_sym_LT_SLASHMdxScript_GT = 16,
  sym_program = 17,
  sym_tag_with_content = 18,
  sym_tag_without_content = 19,
  sym_mdx_content = 20,
  sym_calculated_member = 21,
  sym_mdx_script = 22,
  aux_sym_program_repeat1 = 23,
  aux_sym_tag_with_content_repeat1 = 24,
  aux_sym_mdx_content_repeat1 = 25,
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
  [aux_sym_calculated_member_token1] = "calculated_member_token1",
  [anon_sym_as] = "as",
  [anon_sym_COMMA] = ",",
  [anon_sym_LTMdxScript_GT] = "<MdxScript>",
  [anon_sym_LT_SLASHMdxScript_GT] = "</MdxScript>",
  [sym_program] = "program",
  [sym_tag_with_content] = "tag_with_content",
  [sym_tag_without_content] = "tag_without_content",
  [sym_mdx_content] = "mdx_content",
  [sym_calculated_member] = "calculated_member",
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
  [aux_sym_calculated_member_token1] = aux_sym_calculated_member_token1,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LTMdxScript_GT] = anon_sym_LTMdxScript_GT,
  [anon_sym_LT_SLASHMdxScript_GT] = anon_sym_LT_SLASHMdxScript_GT,
  [sym_program] = sym_program,
  [sym_tag_with_content] = sym_tag_with_content,
  [sym_tag_without_content] = sym_tag_without_content,
  [sym_mdx_content] = sym_mdx_content,
  [sym_calculated_member] = sym_calculated_member,
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
  [aux_sym_calculated_member_token1] = {
    .visible = false,
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
  [21] = 12,
  [22] = 22,
  [23] = 22,
  [24] = 10,
  [25] = 25,
  [26] = 26,
  [27] = 11,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 28,
  [35] = 35,
  [36] = 30,
  [37] = 31,
  [38] = 32,
  [39] = 35,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'x') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '<') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_tag_with_content_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_calculate_keyword);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__createmember_keyword);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__scope_keyword);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__end_scope_keyword);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_text_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_text_content);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_calculated_member_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_calculated_member_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LTMdxScript_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_SLASHMdxScript_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
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
    [sym_program] = STATE(40),
    [sym_tag_with_content] = STATE(8),
    [sym_tag_without_content] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
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
    STATE(6), 4,
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
  [95] = 4,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(38), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(17), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [109] = 3,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [121] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_LT,
    STATE(9), 3,
      sym_tag_with_content,
      sym_tag_without_content,
      aux_sym_program_repeat1,
  [133] = 2,
    ACTIONS(51), 1,
      sym_text_content,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [142] = 2,
    ACTIONS(55), 1,
      sym_text_content,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [151] = 2,
    ACTIONS(59), 1,
      sym_text_content,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [160] = 3,
    ACTIONS(61), 1,
      sym__createmember_keyword,
    ACTIONS(64), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(13), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [171] = 3,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(66), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(13), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [182] = 3,
    ACTIONS(70), 1,
      anon_sym_as,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(68), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [193] = 2,
    ACTIONS(76), 1,
      sym_text_content,
    ACTIONS(74), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LTMdxScript_GT,
  [202] = 3,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(78), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(13), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [213] = 3,
    ACTIONS(36), 1,
      sym__createmember_keyword,
    ACTIONS(78), 1,
      anon_sym_LT_SLASHMdxScript_GT,
    STATE(14), 2,
      sym_calculated_member,
      aux_sym_mdx_content_repeat1,
  [224] = 2,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(80), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [232] = 1,
    ACTIONS(80), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [237] = 1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [242] = 2,
    ACTIONS(84), 1,
      anon_sym_GT,
    ACTIONS(86), 1,
      anon_sym_SLASH_GT,
  [249] = 2,
    ACTIONS(88), 1,
      anon_sym_GT,
    ACTIONS(90), 1,
      anon_sym_SLASH_GT,
  [256] = 1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [261] = 1,
    ACTIONS(92), 2,
      sym__createmember_keyword,
      anon_sym_LT_SLASHMdxScript_GT,
  [266] = 2,
    ACTIONS(94), 1,
      sym_calculate_keyword,
    STATE(33), 1,
      sym_mdx_content,
  [273] = 1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LT,
  [278] = 1,
    ACTIONS(96), 1,
      anon_sym_GT,
  [282] = 1,
    ACTIONS(98), 1,
      aux_sym_calculated_member_token1,
  [286] = 1,
    ACTIONS(100), 1,
      aux_sym_tag_with_content_token1,
  [290] = 1,
    ACTIONS(102), 1,
      aux_sym_tag_with_content_token1,
  [294] = 1,
    ACTIONS(104), 1,
      aux_sym_tag_with_content_token1,
  [298] = 1,
    ACTIONS(106), 1,
      anon_sym_LT_SLASHMdxScript_GT,
  [302] = 1,
    ACTIONS(108), 1,
      anon_sym_GT,
  [306] = 1,
    ACTIONS(110), 1,
      anon_sym_GT,
  [310] = 1,
    ACTIONS(112), 1,
      aux_sym_tag_with_content_token1,
  [314] = 1,
    ACTIONS(114), 1,
      aux_sym_tag_with_content_token1,
  [318] = 1,
    ACTIONS(116), 1,
      aux_sym_tag_with_content_token1,
  [322] = 1,
    ACTIONS(118), 1,
      anon_sym_GT,
  [326] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 237,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 249,
  [SMALL_STATE(24)] = 256,
  [SMALL_STATE(25)] = 261,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 273,
  [SMALL_STATE(28)] = 278,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 286,
  [SMALL_STATE(31)] = 290,
  [SMALL_STATE(32)] = 294,
  [SMALL_STATE(33)] = 298,
  [SMALL_STATE(34)] = 302,
  [SMALL_STATE(35)] = 306,
  [SMALL_STATE(36)] = 310,
  [SMALL_STATE(37)] = 314,
  [SMALL_STATE(38)] = 318,
  [SMALL_STATE(39)] = 322,
  [SMALL_STATE(40)] = 326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(36),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_with_content_repeat1, 2), SHIFT_REPEAT(26),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_without_content, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_without_content, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_with_content, 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_with_content, 6),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2), SHIFT_REPEAT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mdx_content_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mdx_script, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_script, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mdx_content, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calculated_member, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
