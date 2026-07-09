#include "conta.hpp"
#include <iostream>

int conta::numero_de_contas = 0;

conta::conta(std::string numero, std::string cpf_titular, std::string nome_titular)
    :numero(numero),
    cpf_titular(cpf_titular),
    nome_titular(nome_titular),
    saldo(0)
{
    verifica_tamanho_do_nome();
    numero_de_contas ++;      
}

conta::~conta(){
    numero_de_contas --;
}

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
        std::cout << "Não pode depositar valor negativo\n";
        return;
    }
    conta::saldo += valor_a_depositar;
}

int conta::recupera_numero_de_contas() {
    return numero_de_contas;
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

void conta::verifica_tamanho_do_nome(){
        if (nome_titular.size() < 5){
        std::cout << "Nome muito curto\n";
        exit(1);
    }
}
