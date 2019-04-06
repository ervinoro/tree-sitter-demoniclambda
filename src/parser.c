#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 55
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_ = 1,
  anon_sym_LF = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_2 = 5,
  anon_sym_DOT = 6,
  sym_bin_op_0 = 7,
  sym_bin_op_1 = 8,
  sym_bin_op_2 = 9,
  sym_number = 10,
  anon_sym_3 = 11,
  anon_sym_4 = 12,
  sym_identifier = 13,
  sym_program = 14,
  sym_assignment = 15,
  sym__term = 16,
  sym_paren_term = 17,
  sym_abstraction = 18,
  sym_application = 19,
  sym_variable = 20,
  sym_bin_op = 21,
  sym_boolean = 22,
  aux_sym_program_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "≔",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_2] = "λ",
  [anon_sym_DOT] = ".",
  [sym_bin_op_0] = "bin_op_0",
  [sym_bin_op_1] = "bin_op_1",
  [sym_bin_op_2] = "bin_op_2",
  [sym_number] = "number",
  [anon_sym_3] = "⊤",
  [anon_sym_4] = "⊥",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym_assignment] = "assignment",
  [sym__term] = "_term",
  [sym_paren_term] = "paren_term",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_variable] = "variable",
  [sym_bin_op] = "bin_op",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_bin_op_0] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op_1] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op_2] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_paren_term] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym_application] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8788)
        ADVANCE(6);
      if (lookahead == 8868)
        ADVANCE(7);
      if (lookahead == 8869)
        ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(9);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(10);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_bin_op_1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_bin_op_2);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_bin_op_0);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8788)
        ADVANCE(6);
      if (lookahead == 8868)
        ADVANCE(7);
      if (lookahead == 8869)
        ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(9);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(10);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8868)
        ADVANCE(7);
      if (lookahead == 8869)
        ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(9);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(10);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8788)
        ADVANCE(6);
      if (lookahead == 8868)
        ADVANCE(7);
      if (lookahead == 8869)
        ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(9);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(10);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '\n')
        ADVANCE(19);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8868)
        ADVANCE(7);
      if (lookahead == 8869)
        ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(9);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(10);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_bin_op_0] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [sym_bin_op_2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_bin_op_1] = ACTIONS(1),
  },
  [1] = {
    [sym_paren_term] = STATE(9),
    [sym_abstraction] = STATE(9),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_program] = STATE(7),
    [sym_application] = STATE(9),
    [sym_variable] = STATE(8),
    [sym_assignment] = STATE(6),
    [sym__term] = STATE(9),
    [sym_bin_op] = STATE(9),
    [sym_boolean] = STATE(9),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [2] = {
    [sym_identifier] = ACTIONS(13),
  },
  [3] = {
    [anon_sym_2] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_bin_op_0] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(15),
    [sym_bin_op_2] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_bin_op_1] = ACTIONS(15),
  },
  [4] = {
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_3] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_bin_op_0] = ACTIONS(17),
    [anon_sym_4] = ACTIONS(17),
    [sym_bin_op_2] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_bin_op_1] = ACTIONS(17),
  },
  [5] = {
    [sym_variable] = STATE(12),
    [sym_paren_term] = STATE(12),
    [sym_abstraction] = STATE(12),
    [sym__term] = STATE(12),
    [sym_bin_op] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_application] = STATE(12),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [6] = {
    [sym_paren_term] = STATE(14),
    [sym_abstraction] = STATE(14),
    [aux_sym_program_repeat1] = STATE(13),
    [sym_application] = STATE(14),
    [sym_variable] = STATE(8),
    [sym_assignment] = STATE(13),
    [sym__term] = STATE(14),
    [sym_bin_op] = STATE(14),
    [sym_boolean] = STATE(14),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(23),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [8] = {
    [anon_sym_2] = ACTIONS(27),
    [sym_number] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_bin_op_0] = ACTIONS(27),
    [anon_sym_4] = ACTIONS(27),
    [sym_bin_op_2] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_bin_op_1] = ACTIONS(27),
  },
  [9] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_3] = ACTIONS(9),
    [sym_identifier] = ACTIONS(7),
    [sym_bin_op_0] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_bin_op_1] = ACTIONS(39),
  },
  [10] = {
    [anon_sym_DOT] = ACTIONS(41),
  },
  [11] = {
    [sym_identifier] = ACTIONS(43),
  },
  [12] = {
    [sym_variable] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym__term] = STATE(26),
    [sym_bin_op] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_application] = STATE(26),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_3] = ACTIONS(9),
    [sym_identifier] = ACTIONS(7),
    [sym_bin_op_0] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_bin_op_1] = ACTIONS(53),
  },
  [13] = {
    [sym_variable] = STATE(27),
    [sym_assignment] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [anon_sym_2] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_4] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
  },
  [14] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_3] = ACTIONS(9),
    [sym_identifier] = ACTIONS(7),
    [sym_bin_op_0] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_bin_op_1] = ACTIONS(39),
  },
  [15] = {
    [sym_variable] = STATE(32),
    [sym_paren_term] = STATE(32),
    [sym_abstraction] = STATE(32),
    [sym__term] = STATE(32),
    [sym_bin_op] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_application] = STATE(32),
    [anon_sym_2] = ACTIONS(62),
    [sym_number] = ACTIONS(64),
    [sym_identifier] = ACTIONS(66),
    [anon_sym_4] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_3] = ACTIONS(68),
  },
  [16] = {
    [sym_variable] = STATE(33),
    [sym_paren_term] = STATE(33),
    [sym_abstraction] = STATE(33),
    [sym__term] = STATE(33),
    [sym_bin_op] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_application] = STATE(33),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(72),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [17] = {
    [sym_variable] = STATE(34),
    [sym_paren_term] = STATE(34),
    [sym_abstraction] = STATE(34),
    [sym__term] = STATE(34),
    [sym_bin_op] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_application] = STATE(34),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(74),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [18] = {
    [sym_variable] = STATE(35),
    [sym_paren_term] = STATE(35),
    [sym_abstraction] = STATE(35),
    [sym__term] = STATE(35),
    [sym_bin_op] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_application] = STATE(35),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(76),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [19] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [anon_sym_2] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_3] = ACTIONS(78),
    [sym_identifier] = ACTIONS(78),
    [sym_bin_op_0] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(78),
    [sym_bin_op_2] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(78),
    [sym_bin_op_1] = ACTIONS(39),
  },
  [20] = {
    [sym_variable] = STATE(36),
    [sym_paren_term] = STATE(36),
    [sym_abstraction] = STATE(36),
    [sym__term] = STATE(36),
    [sym_bin_op] = STATE(36),
    [sym_boolean] = STATE(36),
    [sym_application] = STATE(36),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(80),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [21] = {
    [anon_sym_DOT] = ACTIONS(82),
  },
  [22] = {
    [anon_sym_2] = ACTIONS(84),
    [sym_number] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [sym_identifier] = ACTIONS(84),
    [sym_bin_op_0] = ACTIONS(84),
    [anon_sym_4] = ACTIONS(84),
    [sym_bin_op_2] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_bin_op_1] = ACTIONS(84),
  },
  [23] = {
    [sym_variable] = STATE(38),
    [sym_paren_term] = STATE(38),
    [sym_abstraction] = STATE(38),
    [sym__term] = STATE(38),
    [sym_bin_op] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_application] = STATE(38),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(86),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [24] = {
    [sym_variable] = STATE(39),
    [sym_paren_term] = STATE(39),
    [sym_abstraction] = STATE(39),
    [sym__term] = STATE(39),
    [sym_bin_op] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_application] = STATE(39),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(88),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [25] = {
    [sym_variable] = STATE(40),
    [sym_paren_term] = STATE(40),
    [sym_abstraction] = STATE(40),
    [sym__term] = STATE(40),
    [sym_bin_op] = STATE(40),
    [sym_boolean] = STATE(40),
    [sym_application] = STATE(40),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(90),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [26] = {
    [sym_variable] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym__term] = STATE(26),
    [sym_bin_op] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_application] = STATE(26),
    [anon_sym_2] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_3] = ACTIONS(78),
    [sym_identifier] = ACTIONS(78),
    [sym_bin_op_0] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(78),
    [sym_bin_op_2] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(78),
    [sym_bin_op_1] = ACTIONS(53),
  },
  [27] = {
    [anon_sym_] = ACTIONS(29),
  },
  [28] = {
    [sym_identifier] = ACTIONS(92),
  },
  [29] = {
    [anon_sym_2] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
    [anon_sym_3] = ACTIONS(94),
    [sym_identifier] = ACTIONS(94),
    [anon_sym_LF] = ACTIONS(15),
    [sym_bin_op_0] = ACTIONS(94),
    [anon_sym_4] = ACTIONS(94),
    [sym_bin_op_2] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [sym_bin_op_1] = ACTIONS(94),
  },
  [30] = {
    [anon_sym_2] = ACTIONS(96),
    [sym_number] = ACTIONS(96),
    [anon_sym_3] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_LF] = ACTIONS(17),
    [sym_bin_op_0] = ACTIONS(96),
    [anon_sym_4] = ACTIONS(96),
    [sym_bin_op_2] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [sym_bin_op_1] = ACTIONS(96),
  },
  [31] = {
    [sym_variable] = STATE(42),
    [sym_paren_term] = STATE(42),
    [sym_abstraction] = STATE(42),
    [sym__term] = STATE(42),
    [sym_bin_op] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_application] = STATE(42),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(98),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [32] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [anon_sym_2] = ACTIONS(100),
    [sym_number] = ACTIONS(102),
    [anon_sym_3] = ACTIONS(104),
    [sym_identifier] = ACTIONS(106),
    [anon_sym_LF] = ACTIONS(108),
    [sym_bin_op_0] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(104),
    [sym_bin_op_2] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(114),
    [sym_bin_op_1] = ACTIONS(116),
  },
  [33] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [anon_sym_2] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(118),
    [sym_bin_op_2] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_bin_op_1] = ACTIONS(39),
  },
  [34] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [anon_sym_2] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(118),
    [sym_bin_op_2] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_bin_op_1] = ACTIONS(118),
  },
  [35] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [anon_sym_2] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(118),
    [sym_bin_op_2] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_bin_op_1] = ACTIONS(118),
  },
  [36] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [anon_sym_2] = ACTIONS(3),
    [sym_number] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(9),
    [sym_identifier] = ACTIONS(7),
    [sym_bin_op_0] = ACTIONS(35),
    [anon_sym_4] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_bin_op_1] = ACTIONS(39),
  },
  [37] = {
    [sym_variable] = STATE(48),
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym__term] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(122),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(9),
  },
  [38] = {
    [sym_variable] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym__term] = STATE(26),
    [sym_bin_op] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_application] = STATE(26),
    [anon_sym_2] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(118),
    [sym_bin_op_2] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_bin_op_1] = ACTIONS(53),
  },
  [39] = {
    [sym_variable] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym__term] = STATE(26),
    [sym_bin_op] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_application] = STATE(26),
    [anon_sym_2] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(118),
    [sym_bin_op_2] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_bin_op_1] = ACTIONS(118),
  },
  [40] = {
    [sym_variable] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym__term] = STATE(26),
    [sym_bin_op] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_application] = STATE(26),
    [anon_sym_2] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(118),
    [sym_bin_op_2] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_bin_op_1] = ACTIONS(118),
  },
  [41] = {
    [anon_sym_DOT] = ACTIONS(124),
  },
  [42] = {
    [sym_variable] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym__term] = STATE(26),
    [sym_bin_op] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_application] = STATE(26),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_3] = ACTIONS(9),
    [sym_identifier] = ACTIONS(7),
    [sym_bin_op_0] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_bin_op_1] = ACTIONS(53),
  },
  [43] = {
    [anon_sym_2] = ACTIONS(128),
    [sym_number] = ACTIONS(128),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_4] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_3] = ACTIONS(128),
  },
  [44] = {
    [sym_variable] = STATE(51),
    [sym_paren_term] = STATE(51),
    [sym_abstraction] = STATE(51),
    [sym__term] = STATE(51),
    [sym_bin_op] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_application] = STATE(51),
    [anon_sym_2] = ACTIONS(62),
    [sym_number] = ACTIONS(130),
    [sym_identifier] = ACTIONS(66),
    [anon_sym_4] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_3] = ACTIONS(68),
  },
  [45] = {
    [sym_variable] = STATE(52),
    [sym_paren_term] = STATE(52),
    [sym_abstraction] = STATE(52),
    [sym__term] = STATE(52),
    [sym_bin_op] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_application] = STATE(52),
    [anon_sym_2] = ACTIONS(62),
    [sym_number] = ACTIONS(132),
    [sym_identifier] = ACTIONS(66),
    [anon_sym_4] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_3] = ACTIONS(68),
  },
  [46] = {
    [sym_variable] = STATE(53),
    [sym_paren_term] = STATE(53),
    [sym_abstraction] = STATE(53),
    [sym__term] = STATE(53),
    [sym_bin_op] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_application] = STATE(53),
    [anon_sym_2] = ACTIONS(62),
    [sym_number] = ACTIONS(134),
    [sym_identifier] = ACTIONS(66),
    [anon_sym_4] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_3] = ACTIONS(68),
  },
  [47] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [anon_sym_2] = ACTIONS(136),
    [sym_number] = ACTIONS(136),
    [anon_sym_3] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [anon_sym_LF] = ACTIONS(78),
    [sym_bin_op_0] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(136),
    [sym_bin_op_2] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_bin_op_1] = ACTIONS(116),
  },
  [48] = {
    [sym_variable] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym__term] = STATE(26),
    [sym_bin_op] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_application] = STATE(26),
    [anon_sym_2] = ACTIONS(19),
    [sym_number] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(9),
    [sym_identifier] = ACTIONS(7),
    [sym_bin_op_0] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_bin_op_1] = ACTIONS(53),
  },
  [49] = {
    [sym_variable] = STATE(54),
    [sym_paren_term] = STATE(54),
    [sym_abstraction] = STATE(54),
    [sym__term] = STATE(54),
    [sym_bin_op] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_application] = STATE(54),
    [anon_sym_2] = ACTIONS(62),
    [sym_number] = ACTIONS(138),
    [sym_identifier] = ACTIONS(66),
    [anon_sym_4] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_3] = ACTIONS(68),
  },
  [50] = {
    [anon_sym_2] = ACTIONS(140),
    [sym_number] = ACTIONS(140),
    [anon_sym_3] = ACTIONS(140),
    [sym_identifier] = ACTIONS(140),
    [anon_sym_LF] = ACTIONS(84),
    [sym_bin_op_0] = ACTIONS(140),
    [anon_sym_4] = ACTIONS(140),
    [sym_bin_op_2] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym_bin_op_1] = ACTIONS(140),
  },
  [51] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [anon_sym_2] = ACTIONS(142),
    [sym_number] = ACTIONS(142),
    [anon_sym_3] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(142),
    [anon_sym_4] = ACTIONS(142),
    [sym_bin_op_2] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(142),
    [sym_bin_op_1] = ACTIONS(116),
  },
  [52] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [anon_sym_2] = ACTIONS(142),
    [sym_number] = ACTIONS(142),
    [anon_sym_3] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(142),
    [anon_sym_4] = ACTIONS(142),
    [sym_bin_op_2] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [sym_bin_op_1] = ACTIONS(142),
  },
  [53] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [anon_sym_2] = ACTIONS(142),
    [sym_number] = ACTIONS(142),
    [anon_sym_3] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(142),
    [anon_sym_4] = ACTIONS(142),
    [sym_bin_op_2] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(142),
    [sym_bin_op_1] = ACTIONS(142),
  },
  [54] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [anon_sym_2] = ACTIONS(100),
    [sym_number] = ACTIONS(102),
    [anon_sym_3] = ACTIONS(104),
    [sym_identifier] = ACTIONS(106),
    [anon_sym_LF] = ACTIONS(120),
    [sym_bin_op_0] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(104),
    [sym_bin_op_2] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(114),
    [sym_bin_op_1] = ACTIONS(116),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(9),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym__term, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, SHIFT(21),
  [45] = {.count = 1, .reusable = true}, SHIFT(26),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(25),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_program, 2),
  [62] = {.count = 1, .reusable = true}, SHIFT(28),
  [64] = {.count = 1, .reusable = true}, SHIFT(32),
  [66] = {.count = 1, .reusable = true}, SHIFT(29),
  [68] = {.count = 1, .reusable = true}, SHIFT(30),
  [70] = {.count = 1, .reusable = true}, SHIFT(31),
  [72] = {.count = 1, .reusable = true}, SHIFT(33),
  [74] = {.count = 1, .reusable = true}, SHIFT(34),
  [76] = {.count = 1, .reusable = true}, SHIFT(35),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_application, 2),
  [80] = {.count = 1, .reusable = true}, SHIFT(36),
  [82] = {.count = 1, .reusable = true}, SHIFT(37),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_paren_term, 3),
  [86] = {.count = 1, .reusable = true}, SHIFT(38),
  [88] = {.count = 1, .reusable = true}, SHIFT(39),
  [90] = {.count = 1, .reusable = true}, SHIFT(40),
  [92] = {.count = 1, .reusable = true}, SHIFT(41),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [98] = {.count = 1, .reusable = true}, SHIFT(42),
  [100] = {.count = 1, .reusable = false}, SHIFT(28),
  [102] = {.count = 1, .reusable = false}, SHIFT(47),
  [104] = {.count = 1, .reusable = false}, SHIFT(30),
  [106] = {.count = 1, .reusable = false}, SHIFT(29),
  [108] = {.count = 1, .reusable = true}, SHIFT(43),
  [110] = {.count = 1, .reusable = false}, SHIFT(44),
  [112] = {.count = 1, .reusable = false}, SHIFT(45),
  [114] = {.count = 1, .reusable = false}, SHIFT(31),
  [116] = {.count = 1, .reusable = false}, SHIFT(46),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_bin_op, 3),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_abstraction, 4),
  [122] = {.count = 1, .reusable = true}, SHIFT(48),
  [124] = {.count = 1, .reusable = true}, SHIFT(49),
  [126] = {.count = 1, .reusable = true}, SHIFT(50),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 4),
  [130] = {.count = 1, .reusable = true}, SHIFT(51),
  [132] = {.count = 1, .reusable = true}, SHIFT(52),
  [134] = {.count = 1, .reusable = true}, SHIFT(53),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_application, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(54),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_paren_term, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_bin_op, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_demoniclambda(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
