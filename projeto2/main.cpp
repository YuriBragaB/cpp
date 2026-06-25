// em cpp existe dicionários(map<key type, value type> nome;)
// em cpp possui vetores dinamicas(vector<type do índice> nome;)
// em cpp uma lista não dinâmica é chamada de vetor
// em um projeto real as funcionalidades são separadas em arquivos
// é necessário declarar para o compilador que a função existe(head files)


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
        cout << chute << endl;
        conferindo_chute(chute);
    }
}