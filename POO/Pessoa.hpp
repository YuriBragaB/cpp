#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa {
    Cpf cpf;
    std::string nome;

    void verifica_tamanho_do_nome();
public:
    Pessoa(Cpf cpf, std::string nome);
    
    std::string recupera_nome();
    std::string recupera_cpf();
};