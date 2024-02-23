#include "tree_sitter/parser.h"
#include <stdio.h>
#include <stdlib.h>

enum TokenType { FAKE_EOL };

typedef struct {
  bool reached_eof;
} Scanner;

void *tree_sitter_properties_external_scanner_create() {
  Scanner *scanner = malloc(sizeof(Scanner));
  scanner->reached_eof = false;
  return scanner;
}

bool tree_sitter_properties_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *) payload;

  if (valid_symbols[FAKE_EOL] && !scanner->reached_eof && lexer->eof(lexer)) {
    lexer->result_symbol = FAKE_EOL;
    return scanner->reached_eof = true;
  }

  return false;
}

unsigned tree_sitter_properties_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *) payload;
  return scanner->reached_eof ? 1 : 0;
}

void tree_sitter_properties_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *) payload;
  scanner->reached_eof = length == 1;
}

void tree_sitter_properties_external_scanner_destroy(void *payload) {
  free(payload);
}
