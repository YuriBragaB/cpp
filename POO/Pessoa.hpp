#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa {
    void verifica_tamanho_do_nome();

protected:
    Cpf cpf;
    std::string nome;

public:
    Pessoa(Cpf cpf, std::string nome);
    
    std::string recupera_nome();
    std::string recupera_cpf();
};