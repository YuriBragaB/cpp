#include <iostream>
#include <string>
#include "conta.hpp"

int main (void) {
    conta conta;
    conta.depositar(500);
    conta.sacar(100);
    std::cout << "o saldo da conta é: " << conta.recupera_saldo() << "\n";
    return 0;
}