(comment) @comment

(key) @property

(value) @string

(value (escape) @string.escape)

(index) @number

(property [ "=" ":" ] @operator)

[ "${" "}" ] @punctuation.special

(substitution ":" @punctuation.special)

[ "[" "]" ] @punctuation.bracket

[ "." "\\" ] @punctuation.delimiter
