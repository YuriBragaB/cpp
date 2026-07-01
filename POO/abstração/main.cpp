#include <iostream>
#include <string>

class Conta {
    std::string numero;
    std::string cpf_titular;
    std::string nome_titular;
    float saldo;

    void depositar (Conta& conta, float valor_a_depositar) {
        if (valor_a_depositar < 0) {
            std::cout << "Não pode sacar valor negativo\n";
            return;
        }
        if (valor_a_depositar > conta.saldo) {
            std::cout << "Saldo insuficiente\n";
            return;
        }
        conta.saldo += valor_a_depositar;
    }

    void sacar (Conta& conta, float valor_a_sacar) {
        if (valor_a_sacar < 0) {
            std::cout << "Não pode sacar valor negativo\n";
            return;
        }
        if (valor_a_sacar > conta.saldo) {
            std::cout << "Saldo insuficiente\n";
            return;
        }
        conta.saldo -= valor_a_sacar;
    }
};


int main (void) {
    return 0;
}