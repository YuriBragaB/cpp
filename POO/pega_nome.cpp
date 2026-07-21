#include "pega_nome.hpp"

std::string pega_nome()
{
    std::string nome = "";
    std::cout << "Digite o seu nome:\n";
    std::cin >> nome;

    while (nome.size() < 5) {
        std::cout << "Nome pequeno (digite um nome com mais de 5 letras)\n";
        std::cout << "Digite o seu nome:\n";
        std::cin >> nome;
    }

    std::cout << "Nome válido\n";

    return nome;
}
