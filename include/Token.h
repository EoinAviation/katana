//
// Created by Eoin Motherway on 15/7/20.
//

#ifndef KATANA_TOKEN_H
#define KATANA_TOKEN_H

#include "TokenType.h"

class Token {
public:
    Token(TokenType, const char*);
    TokenType getType();
    const char* getValue();

private:
    TokenType type;
    const char* value;
};

#endif //KATANA_TOKEN_H
