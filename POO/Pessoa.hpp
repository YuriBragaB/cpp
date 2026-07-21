#pragma once
#include "Cpf.hpp"
#include <string>
#include <iostream>

class Pessoa 
{
private:
    void verifica_tamanho_do_nome() const;

protected:
    Cpf cpf;
    std::string nome;

public:
    Pessoa(Cpf cpf, std::string nome);
    
    std::string recupera_nome() const;
    std::string recupera_cpf() const;
};