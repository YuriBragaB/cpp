#include "Funcionario.hpp"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario) : Pessoa(cpf, nome), salario(salario)
{
}

Funcionario::~Funcionario()
{
}

std::string Funcionario::recupera_nome() const
{
    return this -> Pessoa::nome; 
}