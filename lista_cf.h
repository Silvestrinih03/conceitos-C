#ifndef LISTA_CF_H_INCLUDED
#define LISTA_CF_H_INCLUDED


// ListaLinear.h
// -------------------------------------------------------------------------
// esta biblioteca foi construida exclusivamente para teste dos exercicios
// nao altere o seu conteudo ( nao acrescente e nem faca insercoes).
// considere uma biblioteca fechada.
// -------------------------------------------------------------------------
// para o desenvolvimento das operacoes foi utilizada a representacao por
// contiguidade fisica
// -------------------------------------------------------------------------
#include <stdlib.h>
#include <iostream>
#define MAXELEMENTOS 100

using namespace std;

typedef int elemento_lista;

struct Lista{
    int comp;
    elemento_lista itens[MAXELEMENTOS];
};

///fun��o auxiliar para as mensagens de erros
void  Erro ( int k ){
    switch( k)    {
    case 1: cout << "  Posicao Invalida"; exit(1);
    case 2: cout << "  Erro de Overflow ";exit(1);
    case 3:cout  << "  Erro de Underflow "; exit(1);
    default:exit(1);
    }
}
///fun��o para iniciar a lista linear vazia
void init(Lista& l){
    l.comp=0;
}
///fun��o que testa se a lista linear est� vazia 1 (sim) 0 (n�o)
int vazia(Lista l){
    if(l.comp == 0)return 1;
    return 0;
}
/// fun��o que retorna o n�mero de elementos na lista linear
int compr (Lista l){
    return l.comp;
}
///fun��o que insere uma informa��o na I-�sima posi��o
void inserir(Lista& l, elemento_lista x, int i){

    if(l.comp == MAXELEMENTOS) Erro (2);
    if((i <= 0) || (i>l.comp+1)) Erro(1);

    if(i<=l.comp)
        for(int k=l.comp; k>=i; k--)
            l.itens[k]=l.itens[k-1];
    l.itens[i-1]=x;
    l.comp++;
}
///fun��o que insere uma informa��o na I-�sima posi��o
elemento_lista eliminar(Lista& l, int i){
    elemento_lista x;
    if((i<=0) || (i>l.comp)) Erro(1);
    x=l.itens[i-1];
    if(i<l.comp)
        for ( int k = i; k<=l.comp-1; k++)
            l.itens[k-1] = l.itens[k];
    l.comp--;
    return x;
}
///fun��o que consulta uma informa��o da I-�sima posi��o
elemento_lista consultar(Lista l, int i){
    if((i<=0) || (i>l.comp))Erro(1);
        return l.itens[i-1];
}
///fun��o que altera a informa��o da I-�sima posi��o
void alterar(Lista& l, elemento_lista x, int i){

    if((i<=0) || (i>l.comp)) Erro(1);
    l.itens[i-1] = x;
}


#endif // LISTA_CF_H_INCLUDED
