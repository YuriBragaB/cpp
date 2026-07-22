#include "operacao_c.hpp"

void operacao_c(Conta& conta, int opcao)
{
    if (opcao == 1) {
        float valor = 0.0;

        std::cout << "Digite o valor que você deseja sacar\n";
        std::cin >> valor;

        conta.sacar(valor);
    }

    else if (opcao == 2) {
        float valor = 0.0;

        std::cout << "Digite o valor que você deseja sacar\n";
        std::cin >> valor;

        conta.depositar(valor);
    }
}