#include <iostream>
#include <vector>

extern std::vector <char> erros;

void exibir_erros() {
    std::cout << "Chutes errados:";
    for (char letra : erros){
        std::cout << letra << " ";
    }
    std::cout << "\n";
}