#include <iostream>
#include "Ordenacao.h"
#include "time.h"

using namespace std;

int main()
{
    const int TAM = 100;
    srand(time(NULL));
    Ordenacao ordem(TAM);
    cout << "Vetor original:\n";
    ordem.mostrarVetor(false, TAM);
    ordem.bolha(TAM);
    cout << "\nVetor ordenado pelo metodo bolha:\n";
    ordem.mostrarVetor(true, TAM);
    cout << ordem.getTrocou() << " trocas e "<< ordem.getVerificou() << " verificacoes \n";
    ordem.bolha_melhorada(TAM);
    cout << "\nVetor ordenado pelo metodo bolha melhorado:\n";
    ordem.mostrarVetor(true, TAM);
    cout << ordem.getTrocou() << " trocas e "<< ordem.getVerificou() << " verificacoes \n";
    ordem.insercao(TAM);
    cout << "\nVetor ordenado pelo metodo de insercao:\n";
    ordem.mostrarVetor(true, TAM);
    cout << ordem.getTrocou() << " trocas e "<< ordem.getVerificou() << " verificacoes \n";
    ordem.selecao(TAM);
    cout << "\nVetor ordenado pelo metodo de selecao:\n";
    ordem.mostrarVetor(true, TAM);
    cout << ordem.getTrocou() << " trocas e "<< ordem.getVerificou() << " verificacoes \n";
    cout << "\nFim do programa!";
    return 0;
}
