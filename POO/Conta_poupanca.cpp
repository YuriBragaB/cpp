#include "Conta_poupanca.hpp"

Conta_poupanca::Conta_poupanca(std::string numero, Titular titular) : Conta(numero,titular) 
{
}

float Conta_poupanca::taxa_de_saque() const 
{
    return 0.03;
}