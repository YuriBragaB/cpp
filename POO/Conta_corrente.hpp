#pragma once
#include "Conta.hpp"

class Conta_corrente final : public Conta
{
public:
    Conta_corrente(std::string numero, Titular titular);
    float taxa_de_saque() const override;
    void transfere_para(Conta& conta, float valor);
};
