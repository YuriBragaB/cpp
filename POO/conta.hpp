#pragma once
#include <string>

class conta {
    static int numero_de_contas;

    std::string numero;
    std::string cpf_titular;
    std::string nome_titular;
    float saldo;

    void verifica_tamanho_do_nome();
    
public:
    conta() = delete;
    conta(std::string numero, std::string cpf_titular, std::string nome_titular);

    ~conta();

    void sacar(float valor_a_sacar);
    void depositar(float valor_a_depositar);

    float recupera_saldo();
    std::string recupera_nome_titular();
    std::string recupera_cpf_titular();
    std::string recupera_numero();
    static int recupera_numero_de_contas();

};