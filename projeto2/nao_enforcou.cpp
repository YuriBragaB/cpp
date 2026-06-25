#include <iostream>
#include <vector>
#include <string>

extern std::vector<char> erros;

extern std::string palavra_secreta;

bool nao_enforcou() {
    if (erros.size() == 5) {
        std::cout << "Você perdeu, tente novamente";
        std::cout << "A palavra era: " << palavra_secreta << "\n";
        return false;
    }
    return true;
}