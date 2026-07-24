#include "pega_opcao.hpp"

int pega_opcao ()
{
    int opcao = 0;

    std::cout << "Escolha uma opção:\n1 - sacar\n2 - depositar\n";
    std::cin >> opcao;
    std::system("cls");

    while (opcao != 1 && opcao != 2) {
    std::cout << "Escolha uma opção:\n1 - sacar\n2 - depositar\n";
    std::cin >> opcao;
    std::system("cls");
    }

    return opcao;
}