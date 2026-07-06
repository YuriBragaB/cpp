#pragma once
#include <string>

struct conta {
    std::string numero;
    std::string cpf_titular;
    std::string nome_titular;
    float saldo;

    void sacar(float valor_a_sacar);
    void depositar(float valor_a_depositar);
};