#include "pega_cpf.hpp"

std::string pega_cpf()
{
    std::string cpf;

    std::cout << "Digite um cpf\n";
    std::cin >> cpf;

    while (cpf.size() != 11){
        std::cout << "Digite um cpf\n";
        std::cin >> cpf;
    }

    std::cout << "Cpf válido\n";
    
    return cpf;
}