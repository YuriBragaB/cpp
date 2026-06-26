#include <iostream>
#include <string>
#include <map>


bool nao_acertou(std::string& palavra_secreta, std::map <char,bool>& chutou) {
    for (char letra : palavra_secreta) {
        if (!chutou[letra]) {
            return true;
        }
    }
    std::cout << "Parabéns você acertou! A paralavra era " << palavra_secreta << "\n"; 
    return false;
}