#include "Ordenacao.h"
#include <iostream>

Ordenacao::Ordenacao(int tam){
    vetorOrdenado = new int[tam];
    vetorOriginal = new int[tam];
    for(int i=0; i<tam; i++){
        vetorOriginal[i] = rand()%1000;
    }
}

void Ordenacao::embaralharVetor(int tam){
    trocou = verificou = 0;
    for(int i=0; i<tam; i++){
        vetorOrdenado[i] = vetorOriginal[i];
    }
}

void Ordenacao::mostrarVetor(bool vet, int tam){
    if(vet){
        for(int i=0; i<tam; i++){
            std::cout << vetorOrdenado[i] << " ";
        }
        std::cout << "\n";
    }else{
        for(int i=0; i<tam; i++){
            std::cout << vetorOriginal[i] << " ";
        }
        std::cout << "\n";
    }
}

int Ordenacao::getTrocou(){
    return trocou;
}

int Ordenacao::getVerificou(){
    return verificou;
}

void Ordenacao::bolha(int tam){
    embaralharVetor(tam);
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

void Ordenacao::bolha_melhorada(int tam){
    embaralharVetor(tam);
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
    embaralharVetor(tam);
    int j, i;
    for(int i=1; i<tam; i++){
        aux = vetorOrdenado[i];
        j = i-1;
        while((j >=0) && vetorOrdenado[j] > aux){
            trocou++;
            vetorOrdenado[j+1] = vetorOrdenado[j];
            j--;
            verificou++;
        }
        vetorOrdenado[j+1] = aux;
        trocou++;
    }
}

void Ordenacao::selecao(int tam){
    embaralharVetor(tam);
    for(int i=0; i<tam; i++){
        menor = vetorOrdenado[i + 1];
        aux = vetorOrdenado[i];
        pos = i+1;
        for(int j = i+2; j<tam; j++){
            verificou++;
            if(vetorOrdenado[j] < menor){
                trocou++;
                menor = vetorOrdenado[j];
                pos = j;
            }
        }
        verificou++;
        if(menor < aux){
            trocou++;
            vetorOrdenado[i] = menor;
            vetorOrdenado[pos] = aux;
        }
    }
}
