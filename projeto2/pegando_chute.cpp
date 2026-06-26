#include <iostream>
#include <map>




char pegando_chute (std::map <char, bool>& chutou){
    std::cout << "Digite o seu chute: \n";
    char chute;
    std::cin >> chute;
    std::cout << "\n";

    chutou[toupper(chute)] =true;
    return chute;
}