#include <iostream> // i = input, o = outpot, stream = fluxo
#include <string> // biblioteca de stream
using namespace std;

// em c++ possui string
const string PALAVRA_SECRETA = "MELANCIA"; 

bool letra_existe (char chute) {
    // for (int i = 0; i < PALAVRA_SECRETA.size(); i ++) {
    //     if (chute == PALAVRA_SECRETA[i]){
    //         return true;
    //     }
    // }
    for (char letra : PALAVRA_SECRETA) { // basicamente um for in, percorre um intervalo, utilizado no c++11 (-std=c++11) para utilizar essa versão é necessário dizer ao compilador
        if (chute == letra) {
            return true;
        }
    }
    return false;
}

int main () {
    cout << PALAVRA_SECRETA << "\n";

    bool nao_acertou = true;
    bool nao_enforcou  = true;

    while (nao_acertou & nao_enforcou) {
        char chute;
        cin >> chute;

        if (letra_existe(chute)) {
            cout << "Você acertou! Seu chute está na palavra\n" ;
        }
        else {
            cout << "Você errou\\";
        }
    }
}
