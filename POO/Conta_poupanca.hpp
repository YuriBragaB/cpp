#pragma once
#include <iostream>
#include "Conta.hpp"

class Conta_poupanca : public Conta 
{
public:
    Conta_poupanca(std::string numero, Titular titular);
    float taxa_de_saque() const override;
};