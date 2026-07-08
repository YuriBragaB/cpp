#pragma once
#include <string>

class conta {
    std::string numero;
    std::string cpf_titular;
    std::string nome_titular;
    float saldo;

public:
    conta() = delete;
    conta(std::string numero, std::string cpf_titular, std::string nome_titular);

    void sacar(float valor_a_sacar);
    void depositar(float valor_a_depositar);

    float recupera_saldo();
    std::string recupera_nome_titular();
    std::string recupera_cpf_titular();
    std::string recupera_numero();

};