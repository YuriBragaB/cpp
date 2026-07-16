#pragma once
#include "Pessoa.hpp"
#include <string>

class Funcionario : public Pessoa {
    float salario;

public:
    Funcionario(Cpf cpf, std::string nome, float salario);
    ~Funcionario();
};
