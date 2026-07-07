#pragma once
#include <string>

class conta {
    std::string numero;
    std::string cpf_titular;
    std::string nome_titular;
    float saldo = 0;

public:
    void sacar(float valor_a_sacar);
    void depositar(float valor_a_depositar);

    float recupera_saldo();
    std::string recupera_nome_titular();
    std::string recupera_cpf_titular();
    std::string recupera_numero();

    void definir_nome_titular(std::string nome);
    void definir_cpf_titular(std::string cpf);
    void definir_numero(std::string telefone);
};