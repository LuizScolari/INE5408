// Copyright [2025] <Luiz Roberto Scolari>
#include <string>
#include "array_queue.h

structures::ArrayQueue<char> editaTexto(std::string texto) {
    structures::ArrayQueue<char> fila(500);
    char ultimo = '\0'; 

    for (char c : texto) {
        if (c == '<') {
            if (fila.empty()) {
                throw std::out_of_range("Tentativa de remover de uma fila vazia.");
            }
            fila.dequeue();
        } else if (c == '>') {
            if (ultimo != '\0') {
                fila.enqueue(ultimo);
            }
        } else {
            fila.enqueue(c);
            ultimo = c;
        }
    }

    return fila;
}