/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 */

const EOL = /\r|\n|\r\n/;

module.exports = grammar({
  name: 'properties',

  extras: $ => [],

  rules: {
    file: $ => repeat(seq(
      optional($._space),
      optional(choice(
        $.property,
        $.comment
      )),
      EOL
    )),

    property: $ => seq(
      $.key,
      optional($._space),
      optional(choice('=', ':')),
      optional($._space),
      optional($.value)
    ),

    key: $ => prec.right(
      repeat1(
        choice(
          '.',
          $._char,
          $.escape,
          $._index
        )
      )
    ),

    _index: $ => seq(
      '[', alias(/\d+/, $.index), ']'
    ),

    value: $ => repeat1(choice(
      $._char,
      $.escape,
      $.substitution,
      $._linebreak
    )),

    substitution: $ => seq(
      '${',
      $._content,
      optional($._default),
      '}'
    ),

    _content: $ => repeat1(
      choice(
        $.key,
        $.substitution
      )
    ),

    _default: $ => seq(
      ':', field('default', $._content)
    ),

    escape: _ => choice(
      /\\./, /\\u[0-9a-fA-F]{4}/
    ),

    comment: _ => /[#!].*/,

    _linebreak: _ => seq('\\', EOL),

    _space: _ => /[ \t\f]/,

    _char: _ => prec(-1, /./)
  }
});
