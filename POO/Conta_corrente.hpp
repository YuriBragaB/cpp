#pragma once
#include "Conta.hpp"

class Conta_corrente final : public Conta
{
    float taxa_de_saque() const override;
public:
    Conta_corrente(std::string numero, Titular titular);

};
