#include "Conta.hpp"
#include <iostream>

int Conta::numero_de_contas = 0;

Conta::Conta(std::string numero, Titular titular)
    :numero(numero),
    titular(titular),
    saldo(0)
{
    numero_de_contas ++;      
}

Conta::~Conta(){
    numero_de_contas --;
}

void Conta::sacar (float valor_a_sacar){
    if (valor_a_sacar < 0) {
        std::cout << "Não pode sacar valor negativo\n";
        return;
    }
    else if (valor_a_sacar > Conta::saldo) {
        std::cout << "Saldo insuficiente\n";
        return;
    }
    Conta::saldo -= valor_a_sacar;
}
void Conta::depositar (float valor_a_depositar) {
    if (valor_a_depositar < 0) {
        std::cout << "Não pode depositar valor negativo\n";
        return;
    }
    Conta::saldo += valor_a_depositar;
}

int Conta::recupera_numero_de_contas() {
    return numero_de_contas;
}

float Conta::recupera_saldo(){
    return saldo;
}

std::string Conta::recupera_nome(){
    return titular.recupera_nome();
}

std::string Conta::recupera_cpf(){
    return titular.recupera_cpf();
}

std::string Conta::recupera_numero(){
    return numero;
}


