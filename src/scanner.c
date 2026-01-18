#include "tree_sitter/parser.h"

enum TokenType { FAKE_EOL };

typedef struct {
    bool reached_eof;
} Scanner;

bool tree_sitter_properties_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;
    lexer->result_symbol = FAKE_EOL;
    return scanner->reached_eof = !scanner->reached_eof && valid_symbols[FAKE_EOL] && lexer->eof(lexer);
}

unsigned tree_sitter_properties_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    buffer[0] = scanner->reached_eof ? 1 : 0;
    return 1;
}

void tree_sitter_properties_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    scanner->reached_eof = length > 0 && buffer[0] == 1;
}

void *tree_sitter_properties_external_scanner_create(void) {
    Scanner *scanner = (Scanner *)malloc(sizeof(Scanner));
    scanner->reached_eof = false;
    return scanner;
}

void tree_sitter_properties_external_scanner_destroy(void *payload) {
    free(payload);
}
