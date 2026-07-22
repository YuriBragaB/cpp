#include "escolhe_conta.hpp"
#include "validacao.hpp"


int escolhe_conta()
{
    int escolha = 0;

    std::cout << "Digite uma opção:\n1 - Conta poupança\n2 - Conta corrente\n";
    std::cin >> escolha;
    std::system("cls");

    while(escolha != 1 && escolha != 2){
        std::cout << "Digite uma escolha válida\n";
        std::cout << "Digite uma opção:\n1 - Conta poupança\n2 - Conta corrente\n";
        std::cin >> escolha;
        std::system("cls");
    }
    
    if (escolha == 1){
        validacao("Conta poupança", 'a');
    }
    else if (escolha == 2){
        validacao("Conta corrente", 'a');
    }

    return escolha;
}

