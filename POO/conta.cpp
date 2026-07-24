#include "Conta.hpp"

int Conta::numero_de_contas = 0;

Conta::Conta(std::string numero, Titular titular) : numero(numero), titular(titular), saldo(0)
{
    numero_de_contas ++;      
}

Conta::~Conta(){
    numero_de_contas --;
}

void Conta::sacar (float valor_a_sacar)
{
    if (valor_a_sacar < 0) {
        negado("Saque", 'o', "não pode sacar valor negativo\n");
        return;
    }

    float tarifa_de_saque = valor_a_sacar * taxa_de_saque();
    float valor_do_saque = valor_a_sacar + tarifa_de_saque;

    if (valor_do_saque > saldo) {
        negado("Saque", 'o', "saldo insuficiente\n");
        return;
    }
    saldo -= valor_do_saque;
    validacao("Saque", 'o');
}

void Conta::depositar (float valor_a_depositar) 
{
    if (valor_a_depositar < 0) {
        negado("Deposito", 'o', "não pode depositar valor negativo\n");
        return;
    }
    saldo += valor_a_depositar;
    validacao("Deposito", 'o');
}

int Conta::recupera_numero_de_contas() 
{
    return numero_de_contas;
}

float Conta::recupera_saldo() const
{
    return saldo;
}

std::string Conta::recupera_nome() const
{
    return titular.recupera_nome();
}

std::string Conta::recupera_cpf() const
{
    return titular.recupera_cpf();
}

std::string Conta::recupera_numero() const
{
    return numero;
}


