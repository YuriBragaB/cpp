#include "escolhe_conta.hpp"

int escolhe_conta()
{
    int escolha = 0;

    std::cout << "Digite uma opção (1 - Conta poupança | 2 - Conta corrente):\n";
    std::cin >> escolha;
    
    while(escolha != 1 || escolha != 2){
        std::cout << "Digite uma escolha válida\n";
        std::cin>> escolha;
    }
}