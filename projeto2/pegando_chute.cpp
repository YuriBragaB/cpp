#include <iostream>
#include <map>


extern std::map <char, bool> chutou;

char pegando_chute (){
    std::cout << "Digite o seu chute: \n";
    char chute;
    std::cin >> chute;
    std::cout << "\n";

    chutou[toupper(chute)] =true;
    return chute;
}