#include <iostream>
#include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
#include "lista_cf.h"
#include <string.h>

using namespace std;

typedef int elemento;

//Comandos principais
//init(L);
// inserir(L, V, i);
// V = eliminar(L, i);
// V = consultar(L, i);
// alterar(L, V, i);
// int a = vazia(L);
// int c = compr(L);

// Exercício 01 - Construiu uma função que faz a leitura de vários números inteiros e os armazena numa lista linear.
void inserir_lista_linear(Lista& L){
    int n; elemento V;
    cout<<"Quantidade de elementos: "; cin>>n;
    for (int i=1; i<=n; i++){
        cout<<"Elemento: "; cin>>V;
        inserir(L, V, i);
    }
}

// Exercício 02 - Construiu uma função que faz a imprime os elementos de uma lista linear de inteiros
void imprimir_elementos(Lista&L){
    elemento V;
    int comprimento = compr(L);
    cout<<endl;
    cout<<"Lista atual: ";
    for (int i=1; i<=comprimento; i++){
        V = consultar(L, i);
        cout<<" "<<V;
    }
    cout<<endl;
}

// Exercício 03 - Construir uma função que recebe uma lista linear L, com números inteiros, e verifica se os elementos da lista estão em ordem crescente. 
//  O resultado deverá retornar através de um return. Na main, imprimir mensagem
int verifica_ordenacao(Lista &L)
{
    int comp = compr(L);
    int ordem = 0;
    elemento V1, V2;
    for (int i = 1; i <= comp - 1; i++)
    {
        V1 = consultar(L, i);
        V2 = consultar(L, i + 1);
        if (V1 > V2)
        {
            ordem = 1;
            break; // Se encontrar elementos fora de ordem, a lista não está ordenada
        }
    }
    return !ordem; // Retorna 1 se ordenado, 0 se não ordenado
}

//Exercício prova - construir uma função que elimina da lista L os elementos entre a i-ésima e j-ésima posições.
// Testar se há elementos suficientes para eliminar 
void eliminasub(Lista&L, int i, int j){
    int comp= compr(L);
    elemento V;
    if(j<i || i>comp || j>comp){
        cout<<endl<<"Intervalo inválido! (i precisa ser menor que j).";
        return;
    }
    cout<<"Eliminados: ";
    for(int inicio=i; inicio<=j; inicio++){
        V = eliminar(L, i);
        cout<<" "<<V;
    }
}

int main(){
    Lista L; init(L);
    int esta_ordenado, i, j;
    inserir_lista_linear(L);
    imprimir_elementos(L);
    esta_ordenado = verifica_ordenacao(L);
    if(esta_ordenado==1) cout<<endl<<"A lista esta ordenada!";
    else cout<<endl<<"A lista nao esta ordenada!";
    cout<<endl<<"Digite o intervalo que será eliminado";
    cout<<endl<<"i: "; cin>>i;
    cout<<endl<<"j: "; cin>>j;
    eliminasub(L, i, j);
    imprimir_elementos(L);
    return 0;
}



// Exercício prova - Dada uma lista linear contendo dados de produtos(int codigo, char nome, char tipo) de uma loja que trabalha com produtos de Higiene HIG e Limpeza LIM.
// Contruir uma função que elimina todos os produtos de limpeza e colocam em uma outra lista.
// struct produtos{
//     int codigo;
//     char nome[20];
//     char tipo[4];
// };
// typedef produtos elemento;
// void elimina_LIM(Lista &prod1, Lista &prod2) {
//     elemento V;
//     for (int i = 1; i <= compr(prod1); i++) {
//         V = consultar(prod1, i);

//         // Utiliza strcmp para comparar as strings tipo
//         if (strcmp("LIM", V.tipo) == 0) {
//             inserir(prod2, V, compr(prod2) + 1);
//             eliminar(prod1, i);
//             i--; // Decrementa i porque eliminamos um elemento
//         }
//     }
// }

// void imprimir_elementos(Lista&prod){
//     int comp=compr(prod);
//     elemento V;
//     for(int i=1; i<=comp; i++){
//         V = consultar(prod, i);
//         cout<<endl<<V.codigo;
//         cout<<endl<<V.nome;
//         cout<<endl<<V.tipo;
//         cout<<endl;
//     }
// }

// int main() {
//     Lista prod1, prod2;
//     init(prod1);
//     init(prod2);
//     elemento prod;

//     for(int i = 0; i < 5; i++) {
//         cout << "Codigo: "; cin >> prod.codigo;
//         cin.ignore(); // Descarta o caractere de nova linha após a leitura de prod.codigo

//         cout << "Nome: "; cin.ignore(); cin.getline(prod.nome, 20);
//         cout << "Tipo: "; cin.getline(prod.tipo, 4);

//         // Utilize inserir(prod1, prod, i) para adicionar o produto à lista
//         inserir(prod1, prod, i);
//     }

//     imprimir_elementos(prod1);
//     elimina_LIM(prod1, prod2);
//     cout << "Produtos após eliminação de LIM:" << endl;
//     imprimir_elementos(prod1);
//     cout << "Produtos da lista LIM:" << endl;
//     imprimir_elementos(prod2);

//     return 0;
// }