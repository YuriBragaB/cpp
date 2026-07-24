#include "pega_numero.hpp"
#include "validacao.hpp"

std::string pega_numero ()
{
    std::string numero = "";
    
    while (true) {
        std::string numeros = "1234567890";

        std::cout << "Digite um número:\n";
        std::cin >> numero;

        bool confere_numero = true;

        for (char algarismo : numero) {
                bool encontrou = false;

            for (char numeral : numeros) {
                if (algarismo == numeral) {
                    encontrou = true;
                    break;
                }
            }

                if (!encontrou) {
                confere_numero = false;
                break;
            }
        }

        system("cls");

        if (confere_numero) {
            break;
        }
    }

    system("cls");

    validacao("Número", 'o');
           
    return numero;
}