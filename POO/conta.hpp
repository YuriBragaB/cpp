#pragma once
#include <string>
#include <iostream>
#include "Titular.hpp"

class Conta 
{
private:
    static int numero_de_contas;

    std::string numero;
    Titular titular;

protected:    
    float saldo;

public:
    Conta() = delete;
    Conta(std::string numero, Titular titular);

    virtual ~Conta();

    void sacar(float valor_a_sacar);
    void depositar(float valor_a_depositar);

    std::string recupera_cpf() const;
    std::string recupera_nome() const;
    float recupera_saldo() const;
    std::string recupera_numero() const;
    static int recupera_numero_de_contas();
    virtual float taxa_de_saque() const = 0;
};