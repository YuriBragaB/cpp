// em cpp existe dicionários(map<key type, value type> nome;)
// em cpp possui vetores dinamicas(vector<type do índice> nome;)
// em cpp uma lista não dinâmica é chamada de vetor
// em um projeto real as funcionalidades são separadas em arquivos
// é necessário declarar para o compilador que a função existe(head files)
// extern = existe em algujm lu8gar, mas n nesse file 
// # são instruções de pré-processamento (inclui o conteúdo no compilador), pega a desfinição 
// #include pega a cópia do arquivo e trraz para o sistema
// #pragma once inclui o arquivo apenas uma vez, é útil para maximizar o código
// #pragma once é botado no head file
// compilador: pré-processamento = pega a unidade de tradução(#include) e processa = transforma em algo que a maquina entenda(binario)
// linking = junta os códigos, extern ajuda para demonstrar qual a original
// extern ignora o erro de variável não definida
// quando for compilar é possível compilar apenas uma unidade de tradução por vez
// variáveis globais são ruins de ser utilizadi, pois dificulta no controle do código(não sabe quem altera as variáveis), por isso é melhor passar asa variáveis como parâmetros e bota-las no escopo da int main
// em c+ os ponteiros ficaram mais fácil, é so utilizar as referências (&), pare muito com o ponteiro, porém é mais fácil
// referência poupa memória
// Uma referência em C++ poupa tempo de processamento e memória RAM ao evitar a cópia desnecessária de objetos grandes. Em vez de duplicar dados, ela atua apenas como um apelido (ou rótulo) para o dado original que já existe na memória
// const define uma promessa de que não se vai alterar esse valor
// namespace é como se fosse uma pasta virtual, algo para organizar melhor o nosso código
// para utilizar o namespace é necessário utilizare iguasl o std
// std é um namespace, que pega as funções da biblioteca padrão
// :: é um operdado de busca de namespace
// o nome do :: é operador de resolução
// é possível criar um namespace:
//      namespace nomedonamespace {bloco de código}
// using namespace é um aviso para o compilador de que se nao tiver nada no operador de resolução é bem possível que seja o que vem dps do namespace
// ::std = uma resolução de um namespace
// é ruim utilizar using namespace pois tira a liberdade do nome nos códigos, pois já pode existir na biblioteca std::
// using namespace tira o poder sobre o código
// não é para utilizar namespace no cabeçario(head files ou hpp)
// colocar using namespace dentro de um escopo é ok
// é possível ter vários namespace, tornando eles muito grandes
// é possível renomear um namespace, ex: a = std
// é comum empresas grandes mudarem os nomes do std
// nunca adicione um using namespace em um cabeçalho
// stack(pilha) é um algoritmo de memória, quando é chamado a função ela é alocada em um espaço, quando ela é finalizada sai desse espaço
// stack frame é um espaço onde é alocado na memória 
// a maioria das linguagens compiladas utilizam stacks
// #if 0 + #endif ignora o escopo que está entre o código
// heap é um espaço do código que é compartilhado em todas funções, fora da stack
// quando n é dado o tamanho de uma vector é alocado na heap, que é mais custoso
// para ser alocado na steak é necessário criar um array

#include <iostream> // i = input, o = outpot, stream = fluxo
#include <string> // biblioteca de string
#include <map> // pega o dicionário
#include <vector> // pega a lista dinâmica
#include <fstream> // biblioteca trata do fluxo de dados em uma string
#include <ctime>
#include <cstdlib>
#include "nao_acertou.hpp"
#include "abertura.hpp"
#include "sorteia_palavra.hpp"
#include "nao_enforcou.hpp"
#include "exibir_erros.hpp"
#include "exibir_palavra.hpp"
#include "pegando_chute.hpp"
#include "conferindo_chute.hpp"
// ao final dos include é gerado uma unidade de tradução, que é utilizada para compilar o código



int main () {
    std::string palavra_secreta;
    std::map<char, bool> chutou;
    std::vector <char> erros;

    forca::abertura();

    forca::sorteia_palavra(palavra_secreta);

    while (forca::nao_acertou(palavra_secreta, chutou) && forca::nao_enforcou(erros, palavra_secreta)) {
        forca::exibir_erros(erros);
        forca::exibir_palavra(palavra_secreta, chutou);

        char chute = forca::pegando_chute(chutou);
        forca::conferindo_chute(chute, erros, palavra_secreta);
    }
}