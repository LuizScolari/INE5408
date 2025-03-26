// Copyright [2025] <Luiz Roberto Scolari>

/*
Write a function that, given the input text of a program snippet (in the form of a string), 
checks if all opening braces ('{') and closing braces ('}') are properly nested.
*/

#include <string>
#include "array_stack.h"

bool verificaChaves(std::string trecho_programa) {
    bool resposta = true;
    structures::ArrayStack<char> pilha(500);

    for (char c : trecho_programa) {
        if (c == '{') {
            pilha.push(c);
        } else if (c == '}') {
            if (pilha.empty()) {
                return false; 
            }
            pilha.pop();
        }
    }

    return resposta; 
}