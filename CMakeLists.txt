cmake_minimum_required(VERSION 3.16)
project(katana)

set(CMAKE_CXX_STANDARD 20)

add_executable(katana main.cpp include/Lexer.h src/Lexer.cpp include/Token.h src/Token.cpp include/TokenType.h)
