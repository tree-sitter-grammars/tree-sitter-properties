package tree_sitter_properties_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_properties "github.com/tree-sitter-grammars/tree-sitter-properties/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_properties.Language())
	if language == nil {
		t.Errorf("Error loading Java properties grammar")
	}
}
