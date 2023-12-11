#include <iostream>
#include <cctype>
#include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
using namespace std;

// Lista ligada/ Dinâmica
// Exercício 01
typedef int elemento;
typedef struct no
{
    elemento info;
    no *link;
} no;

no *init()
{
    return NULL;
}

no *novo_no()
{
    no *novo;
    novo = (no *)malloc(sizeof(no));
    if (novo == NULL)
    {
        cout << "Erro de alocação de memória!";
        exit(1);
    }
    return novo;
}

void imprime(no *pri)
{
    cout << endl;
    while (pri != NULL)
    {
        cout << pri->info << "  ";
        pri = pri->link;
    }
    cout << endl;
}

// void inserir_inicio(no**pri, elemento a){
//     no*novo; novo=novo_no();
//     novo->info=a;
//     novo->link=*pri;
//     *pri=novo;
// }

// void inserir_final(no**pri, elemento a){
//     no*novo, *p;
//     novo=novo_no();
//     novo -> info=a;
//     novo->link=NULL;
//     p=*pri;
//     while (p!=NULL && p->link!=NULL)
//         p=p->link;
//     if (p==NULL)
//         *pri=novo;
//     else p->link=novo;
// }

void inserir_ordenado(no **pri, elemento a)
{
    no *novo, *p, *anterior;
    novo = novo_no();
    novo->info = a;
    p = *pri;
    anterior = NULL;
    while (p != NULL && a > p->info)
    {
        anterior = p;
        p = p->link;
    }
    if (p == *pri)
        *pri = novo;
    else
        anterior->link = novo;
    novo->link = p;
}

// Ecercício 01 - Dada uma lista ligada. Construir uma função que conta o número de nós dessa lista. O número de nós encontrado deverá retornar pelo comando return.
int conta_nos(no *pri)
{
    no *p = pri;
    int cont = 1;
    if (pri == NULL)
        return 0;
    while (p->link != NULL)
    {
        p = p->link;
        cont++;
    }
    return cont;
}

// Exercício 02 e 03
// 02 -  Dada uma lista ligada contendo números inteiros ordenados. Construir uma função que verifica se há algum número repetido na lista ou não. 
// 03 - Dada uma lista ligada contendo números inteiros desordenados. Construir uma função que verifica se há algum número repetido na lista ou não.
// Não usar estruturas auxiliares para a solução, tais como, vetor ou outra lista ligada
// Caso exista alguma repetição retornar 1 senão retornar 0.
int repetidos(no *pri)
{
    no *p = pri;
    int rep = 0;
    while (pri != NULL)
    {
        p = pri->link;
        while (p != NULL)
        {
            if (pri->info == p->info)
            {
                rep = 1;
                break;
            }
            p = p->link;
        }
        pri = pri->link;
    }
    return rep;
}

// Exercício 04 - Dada uma lista ligada contendo números inteiros. Construir uma função que verifica se a lista está ordenada ou não. Se ordenada retornar 1 senão retornar 0. 
//  Não usar estruturas auxiliares para a solução, tais como, vetor ou outra lista ligada.
int verifica_ordenacao(no *pri)
{
    no *p = pri, *anterior = p;
    int ordenada = 1; // É ordenada
    while (p != NULL)
    {
        if (anterior->info > p->info)
        {
            ordenada = 0; // Não é ordenada
            break;
        }
        anterior=p;
        p=p->link;
    }
    return ordenada;
}

//Exercício prova - Dada uma lista ligada contendo caracteres quaisquer, construir uma função que conta as vogais 'a' e 'A'.
// int contar_vogaisA(no *pri)
//     {
//         int cont = 0;
//         while (pri != NULL)
//         {
//             char c = pri->info;
//             // Converte o caractere para maiúscula antes de comparar
//             char upperC = toupper(c);       
//             // Verifica se é a vogal 'A'
//             if (upperC == 'A')
//                 cont++;
//             pri = pri->link;
//         }
//         return cont;
//     }

// Exercício prova - Dada uma lista ligada contendo números inteiros quaisquer, construir uma função que insere uma cópia do último nó logo após ele.
// Testar se está vazia e imprimir mensagem
void duplica_ultimo(no*pri){
    no*anterior=NULL, *novo;
    novo=novo_no();
    if(pri==NULL){
        cout<<"Lista vazia!";
        return;
    }
    while (pri->link!=NULL)
    {
        anterior=pri;
        pri=pri->link;
    }
    novo->info=pri->info;
    pri->link=novo;
    novo->link=NULL;
}

int main()
{
    no *pri;
    pri = init();
    elemento num;
    // int n;
    // cout << "Quantidade de elementos: ";
    // cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento: ";
        cin >> num;
        // inserir_inicio(&pri, num);
        // inserir_final(&pri, num);
        inserir_ordenado(&pri, num);
    }
    imprime(pri);
    cout << "Quantidade de nos: " << conta_nos(pri);
    cout << endl<< "Repetidos (1=sim e 0=nao): " << repetidos(pri);
    cout<<endl<<"Ordenada (1=sim e 0=nao): "<< verifica_ordenacao(pri);
    // cout<<endl<<"Quantidade de 'a' e 'A': "<< contar_vogaisA(pri);

    duplica_ultimo(pri);
    imprime(pri);
    return 0;
}