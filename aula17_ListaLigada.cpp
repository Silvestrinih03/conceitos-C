#include <iostream>
#include <cstdlib>

using namespace std;

//Funções principais
typedef int elemento;
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
        cout<<"Erro de alocação de memória";
        exit(1);
    }
    return novo;
}

void imprimir(no*pri){
    while (pri!=NULL)
    {
        cout<<pri->info<<"  ";
        pri=pri->link;
    }
    
}

// void inserir_ordenado(no**pri, elemento a){
//     no*novo, *p, *anterior;
//     novo=novo_no();
//     anterior=NULL;
//     novo->info=a;
//     p=*pri;
//     while (p!=NULL && a > p->info)    {
//         anterior=p;
//         p=p->link;
//     }
//     if (p==*pri) *pri=novo;
//     else anterior->link=novo;
//     novo->link=p;
// }

void inserir_final(no**pri, elemento a){
    no*novo, *p;
    novo=novo_no();
    p=*pri;
    novo->info=a;
    novo->link=NULL;
    while (p!=NULL && p->link!=NULL)
        p=p->link;
    if (p==NULL) *pri=novo;
    else p->link=novo;
}

//Exercício 01
int contar_nos(no*pri){
    no*p;
    p=pri;
    int contador=0;
    while (p->link!=NULL)
    {
        contador++;
        p=p->link;
    }
    return contador;
}

//Exercício 02 e 03
int numero_repetido(no* pri) {
    no* p, *q;
    p = pri;
    while (p != NULL) {
        q = p->link;
        while (q != NULL) {
            if (p->info == q->info) {
                return 1; // Encontrou um número repetido
            }
            q = q->link;
        }
        p = p->link;
    }
    return 0; // Não encontrou números repetidos
}

// Exercício 04
int verifica_ordenacao(no*pri){
    no *p, *q;
    p=pri;
    while (p!=NULL){
        q=p->link;
        while (q!=NULL){
            if (p->info>q->info) return 0;
            q= q->link;
        }
        p=p->link;
        }
    return 1;
}

//Exercício 05
// float porcentagem_repeticao(no*pri){
//     no*p, *q;
//     p=pri;
    
// }

int main(){
    no*pri;
    pri=init();
    int n, valor, cont, repete, ordem;
    cout<<"Quantidade de valores que serao inseridos: "; cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Valor "<<i+1<<": "; cin>>valor;
        // inserir_ordenado(&pri, valor);
        inserir_final(&pri, valor);
    }
    imprimir(pri);
    //Exercício 01
    cout<<"\n\nQuantidade de nos: "<<contar_nos(pri)<<endl;

    //Exercício 02 e 03
    repete=numero_repetido(pri);
    if (repete==1)cout<<"\n\nExistem elementos repetidos na lista!";
    else if (repete==0)cout<<"\n\nNao existem elementos repetidos na lista!";

    // Exercício 04
    ordem=verifica_ordenacao(pri);
    if(ordem==1)cout<<"\n\nA lista e ordenada!";
    else if(ordem==0)cout<<"\n\nA lista nao e ordenada!";

    return 0;
}