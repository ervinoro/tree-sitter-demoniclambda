module.exports = grammar({
  name: 'demoniclambda',

  rules: {
    program: $ => $._term,

    _term: $ => choice(
      $.paren_term,
      $.abstraction,
      $.application,
      $._expression,
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
      $._identifier,
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

    variable: $ => $._identifier,

    _expression: $ => choice(
      $.plus,
      $.times,
      $.minus,
      $.divide
    ),

    plus : $ => prec.left(
      3,
      seq(
        $._term,
        '+',
        $._term
      )
    ),

    times : $ => prec.left(
      4,
      seq(
        $._term,
        '·',
        $._term
      )
    ),

    minus : $ => prec.left(
      3,
      seq(
        $._term,
        '-',
        $._term
      )
    ),

    divide : $ => prec.left(
      4,
      seq(
        $._term,
        '/',
        $._term
      )
    ),

    number: $ => /\d+/,

    boolean : $ => choice(
      '⊤',
      '⊥'
    ),

    _identifier: $ => /[a-z]+/,
  }
});
