#include <iostream>
#include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
#include "queue_lg.h"
#include "stack.h"
using namespace std;

#define GR_MAX 6
typedef int elemento;
typedef struct no_arv{
    elemento info;
    no_arv* link[GR_MAX];
}no_arv;



// Percorrer árvore (largura) - Utiliza fila
// 1 - Insere raiz na fila
// 2 - Enquanto fila não estiver vázia
    //Elimina valor da fila
    //Imprime
    // Insere decendentes
typedef no_arv* elemento_fila;
void percorrer_largura(no_arv* raiz, int grau){
    elemento_fila num;
    Queue fila;
    initQueue(fila);
    if(raiz==NULL) return;
    insert(fila, raiz);
    while (!isEmptyQ(fila)){
        num= eliminate(fila);
        cout<<" "<<num->info;
        for(int i=0; i<grau; i++)
            if(num->link[i]!=NULL)
                insert(fila, num->link[i]);
            else break;
    }
}


// Percorrer árvore (profundidade) - Utiliza pilha
// 1 - Insere raiz na pila
// 2 - Enquanto a pilha não estiver vazia
    // elimina valor da pilha
    // Imprime
    // Insere os descendentes
typedef no_arv* elemento_pilha;
void percorrer_profundidade(no_arv* raiz, int grau){
    elemento_pilha num;
    Stack pilha;
    initStack(pilha);
    if(raiz==NULL) return;
    push(pilha, raiz);
    while (!isEmpty(pilha)){
        num = pop(pilha);
        cout<<" "<< num->info;
        for(int i=0; i<grau; i++)
            if(num->link!=NULL)
                push(pilha, num->link[i]);
            else break;
    }
    
}

// Alocação de memória
no_arv* novo_no_arv(){
    no_arv* novo;
    novo= (no_arv*) malloc(sizeof(no_arv));
    if(novo==NULL){
        cout<<"Erro de alocação de memória";
        exit(1);
    }
    for(int i=0; i<GR_MAX; i++) novo->link[i]=NULL;
    return novo;
}

// Inserir por nível - Terminar
// void inserir_por_nivel(no_arv** raiz, int grau, elemento x){
//     elemento_fila V;
//     no_arv* novo;
//     Queue fila; initQueue(fila);
//     novo=novo_no_arv();
//     novo->info = x;
//     if(*raiz==NULL){
//         *raiz=novo;
//         return;
//     }
//     insert(fila, *raiz);
//     while (!isEmptyQ(fila)){
//         V = eliminate(fila);
//         for (int i=0; i<grau; i++){

//         }
//     }
    
// }