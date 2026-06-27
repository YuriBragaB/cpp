#include <iostream>
#include <vector>

namespace forca {
    void exibir_erros(std::vector <char>& erros) {
        std::cout << "Chutes errados:";
        for (char letra : erros){
            std::cout << letra << " ";
        }
        std::cout << "\n";
    }
}




