#include "Ordenacao.h"
#include <iostream>

Ordenacao::Ordenacao(int tam){
    vetorOrdenado = new int[tam];
    vetorOriginal = new int[tam]
    for(int i=0; i<tam; i++){
        vetorOriginal[i] = rand()%100;
    }
}

void Ordenacao::embaralharVetor(int tam){
    for(int i=0; i<tam; i++){
        vetorOrdenado[i] = vetorOriginal[i];
    }
}

int Ordenacao::getTrocou(){
    return trocou;
}

int Ordenacao::getVerificou(){
    return verificou;
}

void Ordenacao::bolha(int tam){
    trocou = verificou = 0;
    for(int i=0; i<tam; i++){
        for(int i=0; i<tam-1; i++){
            verificou++;
            if(vetorOrdenado[i] > vetorOrdenado[i+1]){
                trocou++;
                aux = vetorOrdenado[i];
                vetorOrdenado[i] = vetorOrdenado[i+1];
                vetorOrdenado[i+1] = aux;
            }
        }
    }
}

void Ordenacao::bolha_melhorada(){
    trocou = verificou = 0;
    do{
        troca = false;
        for(int i=0; i<tam-1; i++){
            verificou++;
            if(vetorOrdenado[i] > vetorOrdenado[i+1]){
                trocou++;
                troca = true;
                aux = vetorOrdenado[i];
                vetorOrdenado[i] = vetorOrdenado[i+1];
                vetorOrdenado[i+1] = aux;
            }
        }
        verificou++;
    }while(troca);
}

void Ordenacao::insercao(int tam){
    int i,j;
    for(i=1; i<tam; i++){
        aux = vet[i];
        j = i-1
        while((j >= 0) && (vet[j]) > aux){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = aux;
    }
}
