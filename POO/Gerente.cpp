#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario) : Funcionario(cpf, nome, salario)
{
} 

float Gerente::bonficacao() const
{
    return salario * 0.5;
}