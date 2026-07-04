#include <iostream>
#include <string>

struct Conta {
    std::string numero;
    std::string cpf_titular;
    std::string nome_titular;
    float saldo;


};


int main (void) {
    Conta conta;
    conta.saldo = 500;
    conta.depositar(500);
    conta.sacar(100);
    std::cout << "o saldo da conta é: " << conta.saldo << "\n";
    return 0;
}