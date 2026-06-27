#include <iostream>
#include <vector>
#include <string>

namespace forca {
    bool nao_enforcou(std::vector<char>& erros, std::string& palavra_secreta) {
        if (erros.size() == 5) {
            std::cout << "Você perdeu, tente novamente";
            std::cout << "A palavra era: " << palavra_secreta << "\n";
            return false;
        }
        return true;
    }    
}

