//
// Created by Eoin Motherway on 14/7/20.
//

#include <string>
#include <tkDecls.h>
#include "../include/Lexer.h"

Lexer::Lexer() {
}

void Lexer::lex(std::string sourceText) {

    for (char& currentChar : sourceText) {

        // Ignore whitespace
        if (isWhitespace(currentChar)) continue;

        // Check for comments

    }
}

bool Lexer::isWhitespace(char currentCharacter) {
    const char whitespaceCharacters[] = { ' ', '\n', '\r' };

    for (char currentWhitespaceCharacter : whitespaceCharacters) {
        if (currentWhitespaceCharacter == currentCharacter) return true;
    }

    return false;
}