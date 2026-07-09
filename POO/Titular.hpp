#pragma once
#include <string>

class Titular {
    std::string cpf; //desafio extrair a conta cpf
    std::string nome;

    void verifica_tamanho_do_nome();
public:
    Titular(std::string cpf,std::string nome);

    std::string recupera_nome();
    std::string recupera_cpf();
};