#include <iostream>
#include <string>
#include "conta.hpp"

int main (void) {
    conta conta;
    conta.saldo = 500;
    conta.depositar(500);
    conta.sacar(100);
    std::cout << "o saldo da conta é: " << conta.saldo << "\n";
    return 0;
}