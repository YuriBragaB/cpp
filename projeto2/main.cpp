// em cpp existe dicionários(map<key type, value type> nome;)
// em cpp possui vetores dinamicas(vector<type do índice> nome;)
// em cpp uma lista não dinâmica é chamada de vetor

#include <iostream> // i = input, o = outpot, stream = fluxo
#include <string> // biblioteca de string
#include <map> // pega o dicionário
#include <vector> // pega a lista dinâmica
using namespace std;


// em c++ possui string
const string PALAVRA_SECRETA = "MELANCIA"; 
map<char, bool> chutou;
vector<char> erros;


void abertura () {
    cout << "-------------------------------\n" ; // endl = end line, finaliza a linha, já que ele é da biblioteca de C++, é colocado std(standation(iniciar))
    cout << "* Bem vindo ao jogo da forca *\n" ; 
    cout << "-------------------------------\n" ;
}
bool letra_existe (char chute) {
    // for (int i = 0; i < PALAVRA_SECRETA.size(); i ++) {
    //     if (chute == PALAVRA_SECRETA[i]){
    //         return true;
    //     }
    // }
    for (char letra : PALAVRA_SECRETA) { // basicamente um for in, percorre um intervalo, utilizado no c++11 (-std=c++11) para utilizar essa versão é necessário dizer ao compilador
        if (toupper(chute) == letra) {
            return true;
        }
    }
    return false;
}

bool nao_acertou() {
    for (char letra : PALAVRA_SECRETA) {
        if (!chutou[letra]) {
            return true;
        }
    }
    return false;
}

bool nao_enforcou() {
    if (erros.size() == 5) {
        cout << "Você perdeu, tente novamente";
        return false;
    }
    return true;
}


int main () {
    abertura();

    while (nao_acertou() && nao_enforcou()) {
        cout << "Chutes errados:";
        for (char letra : erros){
            cout << letra << " ";
        }
        cout << "\n";
        for (char letra : PALAVRA_SECRETA) {
            if (chutou[letra]) {
                cout << letra << " ";
            }
            else {
                cout << "_ ";
            }
        }
        cout << "\n";

        cout << "Digite o seu chute: \n";
        char chute;
        cin >> chute;
        cout << "\n";

        chutou[toupper(chute)] =true;

        if (letra_existe(chute)) {
            cout << "\nVocê acertou! Seu chute está na palavra\n" ;
        }
        else {
            cout << "\nVocê errou, seu chute não está na palavra secreta\n";

            erros.push_back(toupper(chute)); // adiciona o chute a lista dinâmica, é um tipo de lista ordenada
        }
    }
}
