#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string cpf):cpf(cpf){
    verifica_digitos(cpf);
    verifica_numero(cpf);
}

void Cpf::verifica_digitos(std::string cpf){
    if(cpf.size() != 11){
        std::cout << "Quantidade de digitos inválida\n";
        exit(1);
    }    
}

void Cpf::verifica_numero(std::string cpf){
    std::string numeros = "0123456789";
    int contador = 0;    
    for(char numero : cpf){
        for(char num : numeros){
            if(num == numero){
                contador ++;
            }
        }
    }

    if (contador != 11){
        std::cout << "Digite apenas números!!\n";
    }
}

std::string Cpf::recupera_cpf(){
    return cpf;
}