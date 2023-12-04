#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int elemento;
typedef struct no_arvb
{
    elemento info;
    struct no_arvb *le, *ld;
} no_arvb;

no_arvb *novo_no_arvb()
{
    no_arvb *nv;
    nv = (no_arvb *)malloc(sizeof(no_arvb));
    if (nv == NULL)
    {
        cout << "\n Erro de alocacao!";
        exit(1);
    }
    nv->le = nv->ld = NULL;
    return nv;
}

void inserir(no_arvb**raiz, elemento num){
    no_arvb*novo;
    novo=novo_no_arvb();
    novo->info=num;
    if(*raiz==NULL){
        *raiz=novo;
        return;
    }
    no_arvb*p;
    p=*raiz;
    while (p!=NULL){
        if(num>p->info){
            if(p->ld==NULL){
                p->ld=novo;
                return;
            }
            p=p->ld;
        }
        else{
            if(p->le==NULL){
                p->le=novo;
                return;
            }
            p=p->ld;
        }
    }
}

void preordem(no_arvb*t){
    if(t!=NULL){
        cout<<" "<<t->info;
        preordem(t->le);
        preordem(t->ld);
    }
}

// Exercício 01 - Considere uma árvore binária qualquer, cujo nó raiz está armazenado na variável raiz. 
// Construir uma função que recebe o endereço do nó raiz e conta quantos nós a árvore possui. Retorna pelo return número de nós
// int conta_nos(no_arvb*raiz, elemento num){
//     no_arvb*p=raiz;
//     int cont=-1;
//     if(p==NULL) return -1; // vazia
//     while (p!=NULL){
//         cont++;
//         p=p->le;
//     }
//     p=raiz;
//     while (p!=NULL){
//         cont++;
//         p=p->ld;
//     }
//     return cont;
// }
int conta_nos(no_arvb*raiz){
    if(raiz!=NULL){
        return 1 + conta_nos(raiz->le) + conta_nos(raiz->ld);
    }
    else return 0; // vazia
}

// Exercício 02 - Dadas duas árvores binárias de pesquisa A e B, uma apontada por raizA e outra raizB. 
// Construir uma função que verifica se a árvore B está contida na A. A árvore B é uma árvore com apenas dois níveis compondo uma família nodal completa.
//  Isto é, B é uma árvore composta pelo nó raiz, descendente esquerdo e descendente direito. Retornar pelo return 1, se sim e 0 se não return número de nós
int esta_contida(no_arvb*raiza, no_arvb*raizb){
    
}


int main(){
    no_arvb*raiz=NULL, *raizb=NULL;
    elemento a;
    int n, cont;
    cout<<"Quantidade de elementos que serão inseridos arv1: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Elemento arv1: "; cin>>a;
        inserir(&raiz, a);
    }
    for(int i=0; i<3; i++){
        cout<<"Elemento arv2: "; cin>>a;
        inserir(&raizb, a);
    }
    preordem(raiz);
    cont= conta_nos(raiz);
    cout<<"Quantidade de nos: "<< cont;
}