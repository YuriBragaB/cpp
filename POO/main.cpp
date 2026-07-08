#include <iostream>
#include <string>
#include "conta.hpp"

int main (void) {
    conta uma_conta("32", "32", "yuri");
    uma_conta.depositar(500);
    uma_conta.sacar(100);
    std::cout << "o saldo da uma_conta é: " << uma_conta.recupera_saldo() << "\n";
    return 0;
}