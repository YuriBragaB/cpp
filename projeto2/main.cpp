// em cpp existe dicionários(map<key type, value type> nome;)
// em cpp possui vetores dinamicas(vector<type do índice> nome;)
// em cpp uma lista não dinâmica é chamada de vetor
// em um projeto real as funcionalidades são separadas em arquivos
// é necessário declarar para o compilador que a função existe(head files)
// extern = existe em algujm lu8gar, mas n nesse file 
// # são instruções de pré-processamento (inclui o conteúdo no compilador), pega a desfinição 
// #include pega a cópia do arquivo e trraz para o sistema
// #pragma once inclui o arquivo apenas uma vez, é útil para maximizar o código
// #pragma once é botado no head file
// compilador: pré-processamento = pega a unidade de tradução(#include) e processa = transforma em algo que a maquina entenda(binario)
// linking = junta os códigos, extern ajuda para demonstrar qual a original
// extern ignora o erro de variável não definida
// quando for compilar é possível compilar apenas uma unidade de tradução por vez
// variáveis globais são ruins de ser utilizadi, pois dificulta no controle do código(não sabe quem altera as variáveis), por isso é melhor passar asa variáveis como parâmetros e bota-las no escopo da int main

#include <iostream> // i = input, o = outpot, stream = fluxo
#include <string> // biblioteca de string
#include <map> // pega o dicionário
#include <vector> // pega a lista dinâmica
#include <fstream> // biblioteca trata do fluxo de dados em uma string
#include <ctime>
#include <cstdlib>
#include "nao_acertou.hpp"
#include "abertura.hpp"
#include "sorteia_palavra.hpp"
#include "nao_enforcou.hpp"
#include "exibir_erros.hpp"
#include "exibir_palavra.hpp"
#include "pegando_chute.hpp"
#include "conferindo_chute.hpp"
// ao final dos include é gerado uma unidade de tradução, que é utilizada para compilar o código
using namespace std;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;
vector <char> erros;

int main () {
    abertura();

    sorteia_palavra();

    while (nao_acertou() && nao_enforcou()) {
        exibir_erros();
        exibir_palavra();

        char chute = pegando_chute();
        conferindo_chute(chute);
    }
}