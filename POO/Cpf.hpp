#pragma once
#include <string>
#include <iostream>

class Cpf 
{
    std::string cpf;

    void verifica_digitos(std::string cpf) const;
    void verifica_numero(std::string cpf) const;

public:
    Cpf(std::string cpf);
    
    std::string recupera_cpf() const;
};