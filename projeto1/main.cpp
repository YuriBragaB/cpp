// igual ao C a função principal é a main
// cout = abreviação para saida em C (outpot)
// tem que colocar quando um função é padrão std(standation)
// precisa pegar as funções com include, pegar as bibliotecas
// o nome do compilador é g++

#include <iostream> // i = input, o = outpot, stream = fluxo
using namespace std; // não precisa mais do std::, pois essa célula diz que vai ser utilizado váriasa funções do std

int main () {
    // mensagem de boas vindas
    cout << "-----------------------------------------" << endl; // endl = end line, finaliza a linha, já que ele é da biblioteca de C++, é colocado std(standation(iniciar))
    cout << "* Bem vindo ao jogo do número secreto! *" << endl; 
    cout << "-----------------------------------------" << endl;

    //valor número secreto
    const int NUMERO_SECRETO = 42; // tem como declarar const, de uma forma bem mais fácil do que o C, const ajuda o compilador, não deixa alterar o valor do numero_secreto, por padrão const é em capslock
    int tentativas = 0;
    bool nao_acertou = true;


    while (nao_acertou)  {
        tentativas ++;
        cout << "Tentativa: " << tentativas << "\n ";
        // pegando chute
        cout << "Digite o seu chute:\n";
        int chute;
        cin >> chute;   //cin = ncinput

        // verificando chute
        bool acertou = chute == NUMERO_SECRETO; // uma boa pratica na programação, deixa o código mais explícito
        bool maior = chute > NUMERO_SECRETO;

        if (acertou) {
            cout << "Parabéns você acertou(o número secreto era " << NUMERO_SECRETO << ")\n";
            nao_acertou = false;
        } 
        else if (maior) {
            cout << "O número secreto é menor do que " << chute << "\n";
        }
        else {
            cout << "O número secreto é maior do que " << chute << "\n";
        }
    }
    cout << "Fim do jogo! \n";
    cout << "Você acertou o número secreto em " << tentativas << " tentativas \n";
}
