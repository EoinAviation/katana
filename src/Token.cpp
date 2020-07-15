//
// Created by Eoin Motherway on 15/7/20.
//

#include "../include/TokenType.h"
#include "../include/Token.h"

Token::Token(TokenType type, const char* value) {
    this->type = type;
    this->value = value;
}

TokenType Token::getType() {
    return type;
}

const char* Token::getValue() {
    return value;
}
