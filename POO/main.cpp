#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Conta_poupanca.hpp"
#include "Conta_corrente.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

int main (void) 
{
    Conta_poupanca segunda_conta("43", Titular(Cpf("38297779300"), "paola"));
    Conta_corrente uma_conta("32", Titular(Cpf("08070396326"), "yuri braga"));
    uma_conta.depositar(500);
    uma_conta.sacar(100);
    std::cout << "O saldo da uma_conta é: " << segunda_conta.recupera_saldo() << "\n";
    std::cout << "O saldo da uma_conta é: " << uma_conta.recupera_saldo() << "\n";

    std::cout << "O seu nome é: " << uma_conta.recupera_nome() << "\n";
    std::cout << "O seu cpf é: " << uma_conta.recupera_cpf() << "\n";

    Funcionario funcionario(Cpf("08070396343"), "gabriel", 100.0);

    uma_conta.transfere_para(segunda_conta, 200);
    std::cout << "o saldo da uma_conta é: " << segunda_conta.recupera_saldo() << "\n";
    std::cout << "O saldo da uma_conta é: " << uma_conta.recupera_saldo() << "\n";
    return 0;
}