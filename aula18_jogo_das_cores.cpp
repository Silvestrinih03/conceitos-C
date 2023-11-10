#include <iostream>
#include <windows.h>
# include <time.h>
#include "stack.h"

using namespace std;

#define TAM 6 //Qnt de tubos
typedef int stack_element;
typedef struct {
    int num_elementos;
    Stack pilha;
}tubo;

void iniciar_vazias(tubo T[]){
    for(int i=0; i<TAM; i++){
        initStack(T[i].pilha);
        T[i].num_elementos=0;
    }
}

void distribuir(tubo T[]){
    int freq[TAM-1]={0};
    int num;
    srand(time(0));
    for (int i = 0; i < TAM - 1; i++){
        do{
            num=rand()%(TAM-1);
        }while (freq[num]>=5);
        freq[num]++;
        push(T[i].pilha, num+1);
    }
}

void mudacor(int cor){
    /*
    0 - Preto           8 - Cinza
    1 - Azul            9 - Azul claro
    2 - Verde           A - Verde claro
    3 - Verde-Água      B - Verde Água claro
    4 - Vermelho        C - Vermelho claro
    5 - Roxo            D - Lilas
    6 - Amarelo         E - Amarelo claro
    7 - Branco          F - Branco brilhante
    */
    HANDLE Saida;
    Saida = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Saida, cor);
}

void printa_cor(int I){
    int cor[5]={9, 13, 2, 15, 6};
    mudacor(cor[I-1]);
    cout<<"O";
    mudacor(15);
}

void mostrar(tubo T[]);

int validar_fim(tubo T[]);

int jogada(tubo T[]);

int main(){
    tubo T[TAM];
    int repetir=1, retorno;
    do {
        iniciar_vazias(T);
        distribuir(T);
        mostrar(T);
        do{
            retorno=jogada(T); // [1] continua e [0] Acabou o jogo
            mostrar(T);
            if(retorno==0)break;
        }while (retorno);
        mostrar(T);
        cout<<"\n P A R Á B E N S ! ! ! !";
        cout<<"\n Jogar novamente? 1(sim) ou 0(não): "; cin>>repetir;
    }while (repetir);
    cout<<"Fim de jogo!"<<endl;
    return 0;
}