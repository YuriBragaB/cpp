#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Conta_poupanca.hpp"
#include "Conta_corrente.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

#include "pega_nome.hpp"
#include "pega_cpf.hpp"
#include "pega_numero.hpp"
#include "escolhe_conta.hpp"
#include "pega_opcao.hpp"
#include "operacao_c.hpp"

int main (void) 
{
    int conta = escolhe_conta();

    if (conta == 1){
        Conta_poupanca uma_conta(pega_numero(), Titular(Cpf(pega_cpf()), pega_nome()));
        
        while (true) {
            int opcao = pega_opcao();
            operacao_c(uma_conta, opcao);
        }
    }

    if (conta == 2){
        Conta_corrente uma_conta(pega_numero(), Titular(Cpf(pega_cpf()), pega_nome()));

        while(true){
            int opcao = pega_opcao();
            operacao_c(uma_conta, opcao);
        }
    }

    return 0;
}