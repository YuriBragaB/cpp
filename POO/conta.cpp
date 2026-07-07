#include "conta.hpp"
#include <iostream>


void conta::sacar (float valor_a_sacar){
    if (valor_a_sacar < 0) {
        std::cout << "Não pode sacar valor negativo\n";
        return;
    }
    else if (valor_a_sacar > conta::saldo) {
        std::cout << "Saldo insuficiente\n";
        return;
    }
    conta::saldo -= valor_a_sacar;
}
void conta::depositar (float valor_a_depositar) {
    if (valor_a_depositar < 0) {
        std::cout << "Não pode sacar valor negativo\n";
        return;
    }
    conta::saldo += valor_a_depositar;
}

float conta::recupera_saldo(){
    return saldo;
}

std::string conta::recupera_nome_titular(){
    return nome_titular;
}

std::string conta::recupera_cpf_titular(){
    return cpf_titular;
}

std::string conta::recupera_numero(){
    return numero;
}

void conta::definir_nome_titular(std::string nome){
    nome_titular = nome;
}

void conta::definir_cpf_titular(std::string cpf){
    cpf_titular = cpf;
}

void conta::definir_numero(std::string telefone){
    numero = telefone;
}