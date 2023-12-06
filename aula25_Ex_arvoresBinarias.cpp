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

void inserir(no_arvb **raiz, elemento num) {
    no_arvb *novo;
    novo = novo_no_arvb();
    novo->info = num;
    if (*raiz == NULL) {
        *raiz = novo;
        return;
    }
    no_arvb *p;
    p = *raiz;
    while (p != NULL) {
        if (num > p->info) {
            if (p->ld == NULL) {
                p->ld = novo;
                return;
            }
            p = p->ld;
        } else {
            if (p->le == NULL) {
                p->le = novo;
                return;
            }
            p = p->le; // Correção aqui
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
    no_arvb*p=raiza;
    while (p!=NULL && p->info!=raizb->info){
        if(raizb->info>p->info) p=p->ld;
        else p=p->le;
    }
    if(p==NULL) return 0; // Não achou
    if(p->le==NULL || p->ld==NULL) return 0; // Não achou
    if(p->le->info == raizb->le->info && p->ld->info == raizb->ld->info) return 1; // Achou
}

// Exercício 03 - Construir uma função que recebe o endereço do nó raiz e localiza um elemento V lido na main e passado na lista de parâmetros.
//  Se existir na árvore retorne pelo return o endereço de localização de V na árvore. Caso não exista retorne NULL
int localizaV(no_arvb*raiz, int v){
    no_arvb*p=raiz;
    if(raiz==NULL) return 0;
    else{
        while (p!=NULL && v != p->info){
            if(v<p->info) p=p->le;
            else p= p->ld;
        }
        if(p==NULL) return 0;
        else return 1;
    }

}

int main(){
    no_arvb*raiz=NULL, *raizb=NULL;
    elemento a;
    int n, cont, aaa, v, resultado;
    cout<<"Quantidade de elementos que serão inseridos arv1: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Elemento arv1: "; cin>>a;
        inserir(&raiz, a);
    }
    cout<<endl;
    preordem(raiz);
    // for(int i=0; i<3; i++){
    //     cout<<"Elemento arv2: "; cin>>a;
    //     inserir(&raizb, a);
    // }
    // cout<<endl;
    // preordem(raizb);

    cont= conta_nos(raiz);
    cout<<"\nQuantidade de nos: "<< cont;

    // aaa = esta_contida(raiz, raizb);
    // if (aaa==0) cout<<endl<<"Nao esta contida!";
    // else cout<<endl<<"Esta contida";
    cout<<endl;
    cout<<"Digite o valor que deseja encontrar: "; cin>>v;
    resultado = localizaV(raiz, v);
    cout<<endl;
    if(resultado==1) cout<<"Achou!";
    else cout<<"Nao achou!";
}