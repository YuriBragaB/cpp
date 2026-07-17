#include "Conta_poupanca.hpp"
#include <iostream>

Conta_poupanca::Conta_poupanca(std::string numero, Titular titular)
    :Conta(numero,titular) 
{
}

void Conta_poupanca::sacar (float valor_a_sacar)
{
    if (valor_a_sacar < 0) {
        std::cout << "Não pode sacar valor negativo\n";
        return;
    }

    float tarifa_de_saque = valor_a_sacar * 0.03;
    float valor_do_saque = valor_a_sacar + tarifa_de_saque;

    if (valor_do_saque > saldo) {
        std::cout << "Saldo insuficiente\n";
        return;
    }
    saldo -= valor_do_saque;
}