#include "pega_cpf.hpp"
#include "validacao.hpp"

std::string pega_cpf()
{
    std::string cpf;

    std::cout << "Digite um cpf:\n";
    std::cin >> cpf;
    std::system("cls");

    while (cpf.size() != 11){
        std::cout << "Digite um cpf válido, que possua 11 caracteres\n";
        std::cin >> cpf;
        std::system("cls");
    }

    validacao("Cpf", 'o');
    
    return cpf;
}