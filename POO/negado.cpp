#include "negado.hpp"

void negado(std::string operacao, char genero, std::string motivo)
{
    std::system("cls");
    std::cout << operacao <<" negad" << genero << "\n";

    std::cout << "Motivo: "<< motivo << "\n";

    Sleep(3000);
    std::system("cls");
}