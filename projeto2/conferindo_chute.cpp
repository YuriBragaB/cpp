#include <iostream>
#include "letra_existe.hpp"
#include <vector>

extern std::vector <char> erros;

void conferindo_chute (int chute) {
    if (letra_existe(chute)) {
        std::cout << "\nVocê acertou! Seu chute está na palavra\n" ;
    }
    else {
        std::cout << "\nVocê errou, seu chute não está na palavra secreta\n";

        erros.push_back(toupper(chute)); // adiciona o chute a lista dinâmica, é um tipo de lista ordenada
    }
}