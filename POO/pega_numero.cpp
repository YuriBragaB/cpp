#include "pega_numero.hpp"
#include "validacao.hpp"

std::string pega_numero ()
{
    std::string numero = "";

    std::cout << "Digite um número:\n";
    std::cin >>numero;
    
    validacao("Número", 'o');
}