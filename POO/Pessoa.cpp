#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome):
    cpf(cpf),
    nome(nome)
{
    verifica_tamanho_do_nome();
}

void Pessoa::verifica_tamanho_do_nome()
{
        if (nome.size() < 5){
        std::cout << "Nome muito curto\n";
        exit(1);
    }
}

std::string Pessoa::recupera_nome()
{
    return nome;
}
std::string Pessoa::recupera_cpf()
{
    return cpf.recupera_cpf();
}