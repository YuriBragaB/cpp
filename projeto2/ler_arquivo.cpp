#include <iostream>
#include <string>
#include <vector>
#include <fstream>




std::vector<std::string> ler_arquivo() {
    std::ifstream arquivo; // é um tipoi de dado que é utilizado para ler arquivos
    arquivo.open("palavras.txt");
    if (arquivo.is_open()) { // utilizado para lidar com erros, tipo try e except
        int quantidade_palavras;
        arquivo >> quantidade_palavras; // primeira linha do aqruivo é um int

        std::vector<std::string> palavras_do_arquivo;

        for (int i = 0; i < quantidade_palavras; i ++) {
            std::string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
        }

        arquivo.close(); // é uma boa prática sempre fechar o arquivo depois de utilizar
        return palavras_do_arquivo;
    }
    else {
        std::cout << "Não foi possível acessar o banco de palavras\n";
        exit(0); // para todo o código até o da main
    }
}