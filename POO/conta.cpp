#include "conta.hpp"
#include <iostream>

void conta::sacar (float valor_a_sacar){
    if (valor_a_sacar < 0) {
        std::cout << "Não pode sacar valor negativo\n";
        return;
    }
    if (valor_a_sacar > saldo) {
        std::cout << "Saldo insuficiente\n";
        return;
    }
    conta::saldo -= valor_a_sacar;
}
void depositar (float valor_a_depositar) {
    if (valor_a_depositar < 0) {
        std::cout << "Não pode sacar valor negativo\n";
        return;
    }
    if (valor_a_depositar > conta::saldo) {
        std::cout << "Saldo insuficiente\n";
        return;
    }
    conta::saldo += valor_a_depositar;
}


