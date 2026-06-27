#include <iostream>
#include "letra_existe.hpp"
#include <vector>
#include <string>
#include <cctype>

namespace forca {
    void conferindo_chute (char chute, std::vector <char>& erros, std::string& palavra_secreta) {
        if (letra_existe(chute, palavra_secreta)) {
            std::cout << "\nVocê acertou! Seu chute está na palavra\n" ;
        }
        else {
            std::cout << "\nVocê errou, seu chute não está na palavra secreta\n";

            erros.push_back(toupper(chute)); // adiciona o chute a lista dinâmica, é um tipo de lista ordenada
        }
    }
}
