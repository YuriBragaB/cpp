#include <iostream>
#include <string>
#include <map>

extern std::string palavra_secreta;

extern std::map <char,bool> chutou;

bool nao_acertou() {
    for (char letra : palavra_secreta) {
        if (!chutou[letra]) {
            return true;
        }
    }
    std::cout << "Parabéns você acertou! A paralavra era " << palavra_secreta << "\n"; 
    return false;
}