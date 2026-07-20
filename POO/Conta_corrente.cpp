#include "Conta_corrente.hpp"

Conta_corrente::Conta_corrente(std::string numero, Titular titular) :Conta(numero, titular)
{
}

float Conta_corrente::taxa_de_saque() const
{
    return 0.05;
}