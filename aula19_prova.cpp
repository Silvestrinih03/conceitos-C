#include <iostream>
#include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
using namespace std;

// Lista ligada/ Dinâmica
typedef char elemento;
typedef struct no{
    elemento info;
    no*link;
}no;

no*init(){
    return NULL;
}

no*novo_no(){
    no*novo;
    novo=(no*)malloc(sizeof(no));
    if (novo==NULL){
        cout<<"Erro de alocação de memória!";
        exit(1);
    }
    return novo;
}

void imprime(no*pri){
    while (pri!=NULL)
    {
        cout<<pri->info<<"  ";
        pri=pri->link;
    }
}

void inserir_final(no**pri, elemento a){
    no*novo, *p;
    novo=novo_no();
    novo -> info=a;
    novo->link=NULL;
    p=*pri;
    while (p!=NULL && p->link!=NULL)
        p=p->link;
    if (p==NULL)
        *pri=novo;
    else p->link=novo;
}

// Exercício 01
// int contar(no*pri){
//     no*p=pri; int cont=0;
//     while(p!=NULL){
//         if (pri->link==NULL) return -1; //vazia
//         else if(p->info=='a'|| p->info=='A')
//             cont ++;
//         p=p->link;
//     }
//     return cont;
// }

// int main(){
//     no *pri, *Pmaior=pri, *Pmenor=pri;
//     pri=init();
//     int cont;
//     elemento valor;
//     int n, i;
//     cout<<"Digite a quantidade de valores que serão inseridos:  "; cin>>n;
//     for (i=0; i<n; i++){
//         cout<<"Valor "<<i+1<< ": "; cin>> valor;
//         inserir_final(&pri, valor);
//     }
//     cont = contar(pri);
//     cout<<cont;
// }


// Exercício 02
// void duplicar_ultimo(no*pri){
//     no*p=pri, *anterior=NULL, *novo=novo_no();
//     while(p!=NULL){
//         anterior=p;
//         p=p->link;
//     }
//     if (pri->info==NULL)cout<<"Lista vazia";
//     else {
//         anterior
//     }
// }