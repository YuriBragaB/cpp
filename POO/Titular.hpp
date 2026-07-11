#pragma once
#include <string>
#include "Cpf.hpp"

class Titular {
    Cpf cpf; //desafio extrair a conta cpf
    std::string nome;

    void verifica_tamanho_do_nome();
public:
    Titular(Cpf cpf ,std::string nome);

    std::string recupera_nome();
    std::string recupera_cpf();
};