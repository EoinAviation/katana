//
// Created by Eoin Motherway on 14/7/20.
//

#ifndef KATANA_LEXER_H
#define KATANA_LEXER_H

#include <vector>

class Lexer {
public:
    Lexer();
    void lex(std::string sourceText);

private:
    std::vector<char> tokenBuffer;
    static bool isWhitespace(char);
    bool isInComment();
};

#endif //KATANA_LEXER_H
