#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 31
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_ = 3,
  anon_sym_DOT = 4,
  sym_bin_op_0 = 5,
  sym_bin_op_1 = 6,
  sym_bin_op_2 = 7,
  sym_number = 8,
  anon_sym_2 = 9,
  anon_sym_3 = 10,
  sym_identifier = 11,
  sym_program = 12,
  sym__term = 13,
  sym_paren_term = 14,
  sym_abstraction = 15,
  sym_application = 16,
  sym_variable = 17,
  sym_bin_op = 18,
  sym_boolean = 19,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_] = "λ",
  [anon_sym_DOT] = ".",
  [sym_bin_op_0] = "bin_op_0",
  [sym_bin_op_1] = "bin_op_1",
  [sym_bin_op_2] = "bin_op_2",
  [sym_number] = "number",
  [anon_sym_2] = "⊤",
  [anon_sym_3] = "⊥",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym__term] = "_term",
  [sym_paren_term] = "paren_term",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_variable] = "variable",
  [sym_bin_op] = "bin_op",
  [sym_boolean] = "boolean",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
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
      if (lookahead == 8868)
        ADVANCE(6);
      if (lookahead == 8869)
        ADVANCE(7);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(8);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(9);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
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
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_bin_op_1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_bin_op_2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_bin_op_0);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8868)
        ADVANCE(6);
      if (lookahead == 8869)
        ADVANCE(7);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(8);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(9);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_bin_op_0] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_bin_op_1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_bin_op_2] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_abstraction] = STATE(7),
    [sym_application] = STATE(7),
    [sym_program] = STATE(6),
    [sym_variable] = STATE(7),
    [sym_bin_op] = STATE(7),
    [sym__term] = STATE(7),
    [sym_paren_term] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_number] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
  },
  [2] = {
    [sym_bin_op_0] = ACTIONS(13),
    [anon_sym_3] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_bin_op_1] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [sym_bin_op_2] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
  },
  [3] = {
    [sym_bin_op_0] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_bin_op_1] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_bin_op_2] = ACTIONS(15),
    [anon_sym_2] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
  },
  [4] = {
    [sym_bin_op] = STATE(9),
    [sym_abstraction] = STATE(9),
    [sym_application] = STATE(9),
    [sym__term] = STATE(9),
    [sym_paren_term] = STATE(9),
    [sym_boolean] = STATE(9),
    [sym_variable] = STATE(9),
    [sym_number] = ACTIONS(17),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
  },
  [5] = {
    [sym_identifier] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [7] = {
    [sym_bin_op] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym__term] = STATE(14),
    [sym_paren_term] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_variable] = STATE(14),
    [sym_bin_op_0] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_bin_op_1] = ACTIONS(29),
    [sym_identifier] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_] = ACTIONS(11),
    [sym_number] = ACTIONS(33),
  },
  [8] = {
    [sym_identifier] = ACTIONS(35),
  },
  [9] = {
    [sym_bin_op] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym__term] = STATE(20),
    [sym_paren_term] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_bin_op_0] = ACTIONS(37),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym_bin_op_2] = ACTIONS(43),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_] = ACTIONS(19),
    [sym_number] = ACTIONS(45),
  },
  [10] = {
    [anon_sym_DOT] = ACTIONS(47),
  },
  [11] = {
    [sym_bin_op] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_application] = STATE(22),
    [sym__term] = STATE(22),
    [sym_paren_term] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_number] = ACTIONS(49),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
  },
  [12] = {
    [sym_bin_op] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym__term] = STATE(23),
    [sym_paren_term] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_variable] = STATE(23),
    [sym_number] = ACTIONS(51),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
  },
  [13] = {
    [sym_bin_op] = STATE(24),
    [sym_abstraction] = STATE(24),
    [sym_application] = STATE(24),
    [sym__term] = STATE(24),
    [sym_paren_term] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_variable] = STATE(24),
    [sym_number] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
  },
  [14] = {
    [sym_bin_op] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym__term] = STATE(14),
    [sym_paren_term] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_variable] = STATE(14),
    [sym_bin_op_0] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym_bin_op_1] = ACTIONS(29),
    [sym_identifier] = ACTIONS(55),
    [sym_bin_op_2] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_DOT] = ACTIONS(57),
  },
  [16] = {
    [sym_bin_op] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym_application] = STATE(26),
    [sym__term] = STATE(26),
    [sym_paren_term] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_number] = ACTIONS(59),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
  },
  [17] = {
    [sym_bin_op] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_application] = STATE(27),
    [sym__term] = STATE(27),
    [sym_paren_term] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_number] = ACTIONS(61),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
  },
  [18] = {
    [sym_bin_op_0] = ACTIONS(63),
    [anon_sym_3] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_bin_op_1] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_bin_op_2] = ACTIONS(63),
    [anon_sym_2] = ACTIONS(63),
    [anon_sym_] = ACTIONS(63),
    [sym_number] = ACTIONS(63),
  },
  [19] = {
    [sym_bin_op] = STATE(28),
    [sym_abstraction] = STATE(28),
    [sym_application] = STATE(28),
    [sym__term] = STATE(28),
    [sym_paren_term] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_variable] = STATE(28),
    [sym_number] = ACTIONS(65),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
  },
  [20] = {
    [sym_bin_op] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym__term] = STATE(20),
    [sym_paren_term] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_bin_op_0] = ACTIONS(37),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym_bin_op_2] = ACTIONS(43),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
  },
  [21] = {
    [sym_bin_op] = STATE(29),
    [sym_abstraction] = STATE(29),
    [sym_application] = STATE(29),
    [sym__term] = STATE(29),
    [sym_paren_term] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_variable] = STATE(29),
    [sym_number] = ACTIONS(67),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
  },
  [22] = {
    [sym_bin_op] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym__term] = STATE(14),
    [sym_paren_term] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_variable] = STATE(14),
    [sym_bin_op_0] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_bin_op_1] = ACTIONS(29),
    [sym_identifier] = ACTIONS(69),
    [sym_bin_op_2] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
  },
  [23] = {
    [sym_bin_op] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym__term] = STATE(14),
    [sym_paren_term] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_variable] = STATE(14),
    [sym_bin_op_0] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_bin_op_1] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym_bin_op_2] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
  },
  [24] = {
    [sym_bin_op] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym__term] = STATE(14),
    [sym_paren_term] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_variable] = STATE(14),
    [sym_bin_op_0] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_bin_op_1] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym_bin_op_2] = ACTIONS(69),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
  },
  [25] = {
    [sym_bin_op] = STATE(30),
    [sym_abstraction] = STATE(30),
    [sym_application] = STATE(30),
    [sym__term] = STATE(30),
    [sym_paren_term] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_variable] = STATE(30),
    [sym_number] = ACTIONS(71),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
  },
  [26] = {
    [sym_bin_op] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym__term] = STATE(20),
    [sym_paren_term] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_bin_op_0] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_bin_op_2] = ACTIONS(43),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
  },
  [27] = {
    [sym_bin_op] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym__term] = STATE(20),
    [sym_paren_term] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_bin_op_0] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_bin_op_1] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_bin_op_2] = ACTIONS(43),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
  },
  [28] = {
    [sym_bin_op] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym__term] = STATE(20),
    [sym_paren_term] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_bin_op_0] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [sym_bin_op_1] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_bin_op_2] = ACTIONS(69),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
  },
  [29] = {
    [sym_bin_op] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym__term] = STATE(14),
    [sym_paren_term] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_variable] = STATE(14),
    [sym_bin_op_0] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_bin_op_1] = ACTIONS(29),
    [sym_identifier] = ACTIONS(9),
    [sym_bin_op_2] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_] = ACTIONS(11),
    [sym_number] = ACTIONS(33),
  },
  [30] = {
    [sym_bin_op] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym__term] = STATE(20),
    [sym_paren_term] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_variable] = STATE(20),
    [sym_bin_op_0] = ACTIONS(37),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_bin_op_2] = ACTIONS(43),
    [anon_sym_2] = ACTIONS(5),
    [anon_sym_] = ACTIONS(19),
    [sym_number] = ACTIONS(45),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(7),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_application, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 1, .reusable = true}, SHIFT(27),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_paren_term, 3),
  [65] = {.count = 1, .reusable = true}, SHIFT(28),
  [67] = {.count = 1, .reusable = true}, SHIFT(29),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_bin_op, 3),
  [71] = {.count = 1, .reusable = true}, SHIFT(30),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_abstraction, 4),
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
