module.exports = grammar({
  name: 'demoniclambda',

  rules: {
    program: $ => seq(
        repeat($.assignment),
        $._term
    ),

    assignment: $ => seq(
        $.variable,
        '≔',
        $._term,
        '\n'
    ),

    _term: $ => choice(
      $.paren_term,
      $.abstraction,
      $.application,
      $.bin_op,
      $.variable,
      $.number,
      $.boolean
    ),

    paren_term : $ => seq(
        '(',
        $._term,
        ')'
    ),

    abstraction : $ => seq(
      'λ',
      $.identifier,
      '.',
      $._term
    ),

    application : $ => prec.left(
      2,
      seq(
        $._term,
        $._term
      )
    ),

    variable: $ => $.identifier,

    bin_op: $ => choice(
        prec.left(
            3,
            seq(
                $._term,
                $.bin_op_0,
                $._term
            )
        ),
        prec.left(
            4,
            seq(
                $._term,
                $.bin_op_1,
                $._term
            )
        ),
        prec.left(
            5,
            seq(
                $._term,
                $.bin_op_2,
                $._term
            )
        )
    ),

    bin_op_0: $ => /[∧∨]/,

    bin_op_1: $ => /[+-]/,

    bin_op_2: $ => /[·\/]/,

    number: $ => /\d+/,

    boolean : $ => choice(
      '⊤',
      '⊥'
    ),

    identifier: $ => /[a-z]+/,
  }
});
