#include <vector>
#include <string>
#include <ctime>
#include "ler_arquivo.hpp"

namespace forca {
    void sorteia_palavra(std::string& palavra_secreta) {
        std::vector<std::string> palavras = forca::ler_arquivo();

        srand(time(NULL));
        int indice_sorteado = rand() % palavras.size();

        palavra_secreta = palavras[indice_sorteado];
    }
}

