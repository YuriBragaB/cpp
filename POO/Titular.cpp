#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string cpf,std::string nome):cpf(cpf), nome(nome){
    verifica_tamanho_do_nome();
}

void Titular::verifica_tamanho_do_nome(){
        if (nome.size() < 5){
        std::cout << "Nome muito curto\n";
        exit(1);
    }
}

std::string Titular::recupera_nome(){
    return nome;
}
std::string Titular::recupera_cpf(){
    return cpf.recupera_cpf();
}