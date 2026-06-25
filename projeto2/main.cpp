// em cpp existe dicionários(map<key type, value type> nome;)
// em cpp possui vetores dinamicas(vector<type do índice> nome;)
// em cpp uma lista não dinâmica é chamada de vetor

#include <iostream> // i = input, o = outpot, stream = fluxo
#include <string> // biblioteca de string
#include <map> // pega o dicionário
#include <vector> // pega a lista dinâmica
#include <fstream> // biblioteca trata do fluxo de dados em uma string
#include <ctime>
#include <cstdlib>
using namespace std;


// em c++ possui string
string palavra_secreta; 
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
    for (char letra : palavra_secreta) { // basicamente um for in, percorre um intervalo, utilizado no c++11 (-std=c++11) para utilizar essa versão é necessário dizer ao compilador
        if (toupper(chute) == letra) {
            return true;
        }
    }
    return false;
}

bool nao_acertou() {
    for (char letra : palavra_secreta) {
        if (!chutou[letra]) {
            return true;
        }
    }
    cout << "Parabéns você acertou! A paralavra era " << palavra_secreta << "\n"; 
    return false;
}

bool nao_enforcou() {
    if (erros.size() == 5) {
        cout << "Você perdeu, tente novamente";
        cout << "A palavra era: " << palavra_secreta << "\n";
        return false;
    }
    return true;
}

void exibir_erros() {
    cout << "Chutes errados:";
    for (char letra : erros){
        cout << letra << " ";
    }
    cout << "\n";
}

void exibir_palavra () {
    for (char letra : palavra_secreta) {
        if (chutou[letra]) {
            cout << letra << " ";
        }
        else {
            cout << "_ ";
        }
    }
    cout << "\n";    
}

int pegando_chute (){
    cout << "Digite o seu chute: \n";
    char chute;
    cin >> chute;
    cout << "\n";

    chutou[toupper(chute)] =true;
    return chute;
}

void conferindo_chute (int chute) {
    if (letra_existe(chute)) {
        cout << "\nVocê acertou! Seu chute está na palavra\n" ;
    }
    else {
        cout << "\nVocê errou, seu chute não está na palavra secreta\n";

        erros.push_back(toupper(chute)); // adiciona o chute a lista dinâmica, é um tipo de lista ordenada
    }
}

vector<string> ler_arquivo() {
    ifstream arquivo; // é um tipoi de dado que é utilizado para ler arquivos
    arquivo.open("palavras.txt");
    if (arquivo.is_open()) { // utilizado para lidar com erros, tipo try e except
        int quantidade_palavras;
        arquivo >> quantidade_palavras; // primeira linha do aqruivo é um int

        vector<string> palavras_do_arquivo;

        for (int i = 0; i < quantidade_palavras; i ++) {
            string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
        }

        arquivo.close(); // é uma boa prática sempre fechar o arquivo depois de utilizar
        return palavras_do_arquivo;
    }
    else {
        cout << "Não foi possível acessar o banco de palavras\n";
        exit(0); // para todo o código até o da main
    }
}

void sorteia_palavra() {
    vector<string> palavras = ler_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}

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
