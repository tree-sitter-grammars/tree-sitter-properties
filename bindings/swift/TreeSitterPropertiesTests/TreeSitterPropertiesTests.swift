import XCTest
import SwiftTreeSitter
import TreeSitterProperties

final class TreeSitterPropertiesTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_properties())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Java properties grammar")
    }
}
