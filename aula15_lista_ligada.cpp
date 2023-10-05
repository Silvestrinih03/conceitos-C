#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
typedef int elemento;

typedef struct no{
    elemento info;
    no*link;
}no;

// Função criar lista ligada vazia (inicialização da estrutura)
no*init(){
    return NULL;
}
int main(){
    no*pri;
    pri = init();
}

// Função novo_no
no*novo_no(){
    no*novo;
    novo = (no*) malloc(sizeof(no));
    if(novo==NULL){
        cout<<"Erro de alocação de memória!";
        exit(1);
    }
    return novo;
}

// Inserção no FINAL da lista ligada
void inserir_final(no**pri, elemento a){
    no*novo, *p;
    novo = novo_no();
    novo->info = a;
    novo->link = NULL;
    p = *pri;
    while (p!=NULL && p->link != NULL)
        p = p -> link;
    if(p==NULL)
        *pri=novo;
    else
        p->link=novo;
}

// Função para inserir itens na lista ORDENADA


// Função para imprimir elementos de uma lista ligada
void imprime(no*pri){
    no*p;
    p=pri;
    while (p!=NULL){
        cout<<p->info<<" ";
        p = p->link;
    }
}

// Função para eliminar informação da lista
