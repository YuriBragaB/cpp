#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome) : cpf(cpf), nome(nome)
{
    verifica_tamanho_do_nome();
}

void Pessoa::verifica_tamanho_do_nome() const
{
        if (nome.size() < 5){
        std::cout << "Nome muito curto\n";
        exit(1);
    }
}

std::string Pessoa::recupera_nome() const
{
    return nome;
}
std::string Pessoa::recupera_cpf() const
{
    return cpf.recupera_cpf();
}