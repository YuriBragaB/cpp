#include "pega_nome.hpp"
#include "validacao.hpp"

std::string pega_nome()
{

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string nome;
    std::cout << "Digite o seu nome:\n";
    std::getline(std::cin, nome);
    std::system("cls");

    while (nome.size() < 5) {
        std::cout << "Nome pequeno (digite um nome com mais de 5 letras)\n";
        std::cout << "Digite o seu nome:\n";
        std::getline(std::cin, nome);
        std::system("cls");
    }

    validacao("Nome", 'o');

    return nome;
}