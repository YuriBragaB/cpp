#include <string>


extern std::string palavra_secreta;

bool letra_existe (char chute) {
    for (char letra : palavra_secreta) { // basicamente um for in, percorre um intervalo, utilizado no c++11 (-std=c++11) para utilizar essa versão é necessário dizer ao compilador
        if (toupper(chute) == letra) {
            return true;
        }
    }
    return false;
}