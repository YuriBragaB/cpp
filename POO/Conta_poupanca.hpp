#pragma once
#include "Conta.hpp"

class Conta_poupanca : public Conta {
public:
    Conta_poupanca(std::string numero, Titular titular);
    void sacar (float valor_a_sacar);
};