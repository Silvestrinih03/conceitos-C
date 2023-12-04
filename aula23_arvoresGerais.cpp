#include <iostream>
#include <cstdlib>
using namespace std;

#define GR_MAX 6
typedef char arv_elemento;
typedef struct no_arv
{
    arv_elemento info;
    no_arv *link[GR_MAX];
} no_arv;

typedef no_arv *queue_element;
#include "queue_lg.h"
typedef no_arv *stack_element;
#include "stack.h"

no_arv *novo_no_arv()
{
    no_arv *nv;
    nv = (no_arv *)malloc(sizeof(no_arv));
    if (nv == NULL)
    {
        cout << "\n Erro de alocacao!";
        exit(1);
    }
    for (int i = 0; i < GR_MAX; i++)
        nv->link[i] = NULL;
    return nv;
}
void inserir_por_nivel(no_arv **raiz, int grau, arv_elemento x)
{
    queue_element v;
    no_arv *novo;
    Queue F;
    initQueue(F);
    novo = novo_no_arv();
    novo->info = x;
    if (*raiz == NULL)
    { // raiz vazia
        *raiz = novo;
        return;
    }
    insert(F, *raiz);
    while (!isEmptyQ(F))
    {
        v = eliminate(F);
        for (int j = 0; j < grau; j++)
        {
            if (v->link[j] == NULL)
            {
                v->link[j] = novo;
                return;
            }
            else
                insert(F, v->link[j]);
        } /// fim-for
    }     /// fim-while
}
void percorrer_largura(no_arv *raiz, int grau)
{
    queue_element v;
    Queue F;
    initQueue(F);
    if (raiz == NULL)
        return;
    insert(F, raiz);
    while (!isEmptyQ(F))
    {
        v = eliminate(F);
        cout << " " << v->info;
        for (int j = 0; j < grau; j++)
            if (v->link[j] != NULL)
                insert(F, v->link[j]);
            else
                break;
    }
}
void percorrer_profundidade(no_arv *raiz, int grau)
{
    stack_element v;
    Stack P;
    initStack(P);
    if (raiz == NULL)
        return;
    push(P, raiz);
    while (!isEmpty(P))
    {
        v = pop(P);
        cout << " " << v->info;
        for (int j = grau - 1; j >= 0; j--)
            if (v->link[j] != NULL)
                push(P, v->link[j]);
    }
}

// Exercício 01 - Considere uma árvore qualquer, cujo nó raiz está armazenado na variável raiz.
//  Construir uma função que recebe o endereço do nó raiz e conta quantos nós a árvore possui. Retorna pelo return número de nós
int conta_nos(no_arv*raiz, int grau){
    Queue fila;
    initQueue(fila);
    queue_element num_fila;
    int cont=0;
    if(raiz!=NULL){
        insert(fila, raiz);
        cont++;
    }
    while (!isEmptyQ(fila)){
        num_fila = eliminate(fila);
        for(int i=0; i<grau; i++){
            if(num_fila->link[i]!=NULL){
                insert(fila, num_fila->link[i]);
                cont++;
            }
            else break;
        }
    }
    return cont;
}

// Exercício 02 - Considere uma árvore qualquer, cujo nó raiz está armazenado na variável raiz. Construir uma função que verifica quantos nós folha a árvore possui. O total deve retornar pelo return
int conta_nos_folhas(no_arv*raiz, int grau){
    Queue fila; initQueue(fila);
    queue_element num_fila;
    int cont = 0;
    if(raiz==NULL) return -1; //Arvore vazia
    insert(fila, raiz);
    while (!isEmptyQ(fila)){
        num_fila = eliminate(fila);
        int temfilhos =0;
        for(int i=0; i<grau; i++){
            if(num_fila->link[i]!=NULL){
                insert(fila, num_fila->link[i]);
                temfilhos++;
            }
        }
        if(!temfilhos)cont++;
    }
    return cont;
}

// Exercício 03 - Considere uma árvore qualquer, cujo nó raiz está armazenado na variável raiz.
//  Construir uma função que recebe o endereço do nó raiz e conta quantos nós dessa árvore possui apenas um descendente. Retorna pelo return número de nós
int conta_um_descendente(no_arv*raiz, int grau){
    Queue fila; initQueue(fila);
    queue_element x;
    int cont=0;
    if(raiz==NULL) return -1; // Arvore vazia
    insert(fila, raiz);
    while (!isEmptyQ(fila)){
        x = eliminate(fila);
        int numFilhos=0;
        for(int i=0; i<grau; i++){
            if(x->link[i]!=NULL){
                insert(fila, x->link[i]);
                numFilhos++;
            }
        }
        if(numFilhos==1){
            cont++;
        }
    }
    return cont;
}

// Exercício 04 - Considere uma árvore qualquer, cujo nó raiz está armazenado na variável raiz. 
// Construir uma função que recebe o endereço do nó raiz e conta quantos nós dessa árvore possui todos os descendentes. 
// Isto é, nenhum dos seus links é NULL. Retorna pelo return número de nós
int conta_todos_descendentes(no_arv*raiz, int grau){
    Queue fila; initQueue(fila);
    queue_element elemento_fila;
    int cont=0;
    if(raiz==NULL) return -1; // Arvore vazia
    insert(fila, raiz);
    while (!isEmptyQ(fila)){
        elemento_fila = eliminate(fila);
        int link_null=0;
        for(int i=0; i<grau; i++){
            if(elemento_fila->link[i]==NULL){
                link_null++;
                break;
            }
            else insert(fila, elemento_fila->link[i]);
        }
        if(link_null==0)cont++;
    }
    return cont;
    
}


int main()
{
    no_arv *raiz;
    raiz = NULL;
    arv_elemento x;
    int grau, cont;
    /// popular a árvore de GRAU (lido) por nivel - largura
    int N;
    cout << "\n Grau da arvore:(max " << GR_MAX << "): ";
    do
    {
        cin >> grau;
    } while (grau < 1 || grau > GR_MAX); // validar GR_MAX
    cout << "\n Numero de nos: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << i << "o. :";
        cin >> x;
        inserir_por_nivel(&raiz, grau, x);
    }
    /// IMPRIMIR os valores da árvore - largura e profundidade
    cout << "\n Valores da Arvore Busca em Largura \n";
    percorrer_largura(raiz, grau);
    cout << "\n Valores da Arvore Busca em Profundidade \n";
    percorrer_profundidade(raiz, grau);
    cont = conta_nos(raiz,grau);
    cout<<endl<<"Quantidade de nos: "<< cont; 
    cont = conta_nos_folhas(raiz, grau);
    cout<<endl<<"Quantidade de nos folhas: "<<cont;
    cont = conta_um_descendente(raiz, grau);
    cout<<endl<<"Quantidade de nos com um único descendente: "<< cont;
    cont = conta_todos_descendentes(raiz, grau);
    cout<<endl<<"Quantidade de nos sem links nulos: "<< cont;
    return 0;
}