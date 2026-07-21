#pragma once
#include "Pessoa.hpp"
#include <string>
#include <iostream>

class Funcionario : public Pessoa 
{
protected:
    float salario;

public:
    Funcionario(Cpf cpf, std::string nome, float salario);
    ~Funcionario();
    std::string recupera_nome() const;
    virtual float bonificacao() const = 0;
};
