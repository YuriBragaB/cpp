#pragma once
#include <string>
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

    std::string recupera_cpf();
    std::string recupera_nome();
    float recupera_saldo();
    std::string recupera_numero();
    static int recupera_numero_de_contas();
    virtual float taxa_de_saque() const = 0;
};