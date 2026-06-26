#include <iostream>
#include <string>
#include <map>




void exibir_palavra (std::string& palavra_secreta, std::map <char, bool>& chutou) {
    for (char letra : palavra_secreta) {
        if (chutou[letra]) {
            std::cout << letra << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
    std::cout << "\n";    
}