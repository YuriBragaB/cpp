#pragma once
#include <iostream>

inline void abertura () { // deixa a compilação mais rápida, é tipo uma substituição, bota na maisn, se for viável, a escolha é do complidor
    std::cout << "-------------------------------\n" ; // endl = end line, finaliza a linha, já que ele é da biblioteca de C++, é colocado std(standation(iniciar))
    std::cout << "* Bem vindo ao jogo da forca *\n" ; 
    std::cout << "-------------------------------\n" ;
}

void abertura ();