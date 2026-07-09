#include <iostream>
#include <string>
#include "Conta.hpp"

int main (void) {
    Conta uma_conta("32", Titular("32", "yuri braga"));
    uma_conta.depositar(500);
    uma_conta.sacar(100);
    std::cout << "o saldo da uma_conta é: " << uma_conta.recupera_saldo() << "\n";

    std::cout << "O seu nome é: " << uma_conta.recupera_nome() << "\n";
    return 0;
}