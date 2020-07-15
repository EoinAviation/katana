//
// Created by Eoin Motherway on 15/7/20.
//

#ifndef KATANA_TOKENTYPE_H
#define KATANA_TOKENTYPE_H

enum TokenType {
    Unknown,
    Comment,

    Keyword,

    Type,

    Symbol,

    LeftParen,
    RightParen,

    StartScope,
    EndScope
};

#endif //KATANA_TOKENTYPE_H
