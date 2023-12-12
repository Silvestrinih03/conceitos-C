#include <iostream>
#include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
#include "queue_lg.h"
#include "stack.h"
using namespace std;

// Lista de exercícios fila
// Comandos base
// initQueue(Q); >> Iniciar fila vazia
// insert(Q, V); >> Inserir na fila (sempre no final)
// V = eliminate(Q); >> Eliminar V da fila (sempre no início)
// V = consult(Q); >> Consultar elemento da fila
// A = isEmptyQ(Q); >> Verifica se está vazia

// Definir tipo do elemento
typedef int elemento;

// Imprimir fila
void imprimir_fila(Queue& Q){
    Queue aux;
    initQueue(aux);
    elemento V;
    cout<<endl;
    while (!isEmptyQ(Q)){
        V = eliminate(Q);
        cout<<V<<" ";
        insert(aux, V);
    }
    while (!isEmptyQ(aux)){
        insert(Q, eliminate(aux));
    }
    cout<<endl;
}

void inserir(Queue& fila){
    elemento num;
    int n;
    cout<<"Qnt de elementos: "; cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Elemento: "; cin>>num;
        insert(fila, num);
    }
}

// Exercício 02
int elimina_elementos(Queue& fila, elemento num, int n){
    Queue aux; initQueue(aux);
    elemento num_aux;
    int conta_elementos=0;
    if(isEmptyQ(fila)) return -1;
    while (!isEmptyQ(fila)){
        insert(aux, eliminate(fila));
        conta_elementos++;
    }
    while (!isEmptyQ(aux)){
        insert(fila, eliminate(aux));
    }
    if(conta_elementos>n){
        for(int i=0; i<n; i++){
            eliminate(fila);
        }
        return 1;
    }
    else return 0;
}

// Exercício 05 - Construir uma função que recebe uma fila Q, contendo números inteiros quaisquer e usando uma estrutura auxiliar inverte a ordem dos elementos dessa fila
void inverte(Queue&fila){
    Stack P; initStack(P);
    elemento num;
    if(isEmptyQ(fila)) return;
    while (!isEmptyQ(fila)){
        push(P, eliminate(fila));
    }
    while (!isEmpty(P)){
        insert(fila, pop(P));
    }
}

// Exercício 06 - Os elementos da fila 1 que são diferentes dos elementos da fila 2
void interfila(Queue&fila, Queue&fila2, Queue&fila3){
    Queue aux;
    initQueue(aux);
    elemento num1, num2;
    while (!isEmptyQ(fila)){
        num1 = eliminate(fila);
        int achou=0;
        while (!isEmptyQ(fila2)){
            num2=eliminate(fila2);
            if(num1 != num2){
                insert(aux, num2);
            }
            else achou++;
        }
        while (!isEmptyQ(aux)){
            insert(fila2, eliminate(aux));
        }
        if(achou==0) insert(fila3, num1);
    }
    
}

int main(){
    Queue fila, fila2, fila3; initQueue(fila); initQueue(fila2); initQueue(fila3);
    elemento num;
    int n, a;
    inserir(fila);
    inserir(fila2);
    // cout<<"Quantidade de elementos que serão eliminados: "; cin>>n;
    // a = elimina_elementos(fila, num, n);
    // if(a==-1) cout<<"Fila vazia";
    // else if(a==0) cout<<"Mais elementos do q existe";
    // else cout<<"Sucesso";

    // inverte(fila);

    interfila(fila, fila2, fila3);

    imprimir_fila(fila3);
}




// Exercícicios 01, 02 e 03 foram feitos juntos!!!
// Exercício 01 - Construir uma função que faz a leitura de n números inteiros para uma fila
// int main(){
//     Queue fila;
//     initQueue(fila);
//     elemento numero;
//     int n, cont=0;
//     cout<<"Quantidade de elementos que serao inseridos: "; cin>>n;
//     for (int i=0; i<n; i++){
//         cout<<"Numero: "; cin>>numero;
//         insert(fila, numero);
//     }
//     imprimir_fila(fila);

// Exercício 2 - Dada uma fila Q qualquer, construir uma função que elimina dessa fila os N primeiros elementos.
// Prever a possibilidade de a fila estar vazia e de não ter N elementos
// cout<<"\n\nQuantidade de elementos que deseja eliminar: "; cin>>n;
// if(!isEmptyQ(fila)){
//     Queue aux;
//     initQueue(aux);
//     while (!isEmptyQ(fila)){
//         insert(aux, eliminate(fila));
//     }
//     while(!isEmptyQ(aux)){
//         insert(fila, eliminate(aux));
//         cont ++;
//     }
//     if(cont<n) cout<<"\nA quantidade de elementos que voce deseja eliminar e maior do que a quantidade de elementos na lista!";
//     else{
//         cout<<"Numeros eliminados: ";
//         for (int i=0; i<n;i++){
//             numero = eliminate(fila);
//             cout<<numero<<" ";
//         }
//     }
// }
// else cout<<"A fila esta vazia, portanto nao e possivel eliminar os elementos!";
// imprimir_fila(fila);

// Exercício 03 - Dada uma fila Q, contendo números inteiros, construir uma função que elimina dessa fila todos os elementos maiores ou iguais a um determinado valor lido X.
//  Utilizar uma outra estrutura de fila como auxiliar.
//  cout<<"Elemento X: "; cin>>n;
//     if (!isEmptyQ(fila)){
//         Queue aux; initQueue(aux);
//         while (!isEmptyQ(fila)){
//             numero = consult(fila);
//             if(numero<n){
//                 insert(aux, eliminate(fila));
//             } 
//             else eliminate(fila);
//         }
//         while (!isEmptyQ(aux)){
//             insert(fila, eliminate(aux));
//         }
//     } else cout<<"Fila vazia!";
//     imprimir_fila(fila);
//     return 0;
// }

// Exercício 04 - Dadas duas filas: Q1 e Q2, ambas contendo números inteiros ordenados, construir uma função que recebe as duas filas e faz a junção das duas gerando uma terceira Fila Q3.
//  Essa terceira fila deverá ter seus elementos ordenados. As duas filas dadas ficarão vazias ao final do processo.
// int main(){
//     Queue fila1, fila2, fila3;
//     initQueue(fila1);
//     initQueue(fila2);
//     initQueue(fila3);
//     elemento num;
//     int n, e1, e2;
//     // Como fazer com que a fila 1 e a fila 2 fiquem ordenadas????
//     cout<<"Quantidade de elementos para Fila 1: "; cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Elemento: "; cin>>num;
//         insert(fila1, num);
//     }
//     cout<<"Fila 1: "; imprimir_fila(fila1);
//     cout<<"\nQuantidade de elementos fila 2: "; cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Elemento: "; cin >>num;
//         insert(fila2, num);
//     }
//     cout<<"Fila 2: "; imprimir_fila(fila2);
//     while (!isEmptyQ(fila1) || !isEmptyQ(fila2)){
//         if(isEmptyQ(fila1)) insert(fila3, eliminate(fila2));
//         else if(isEmptyQ(fila2)) insert(fila3, eliminate(fila1));
//         else {
//             e1 = consult(fila1);
//             e2 = consult(fila2);
//             if (e1 < e2) insert(fila3, eliminate(fila1));
//             else if(e1==e2){
//                 eliminate(fila1);
//                 insert(fila3, eliminate(fila2));
//             }
//             else if(e1>e2) insert(fila3, eliminate(fila2));   
//         }
//     }
//     imprimir_fila(fila3);
//     return 0;
// }

// Exercício 05 - Construir uma função que recebe uma fila Q, contendo números inteiros quaisquer e usando uma estrutura auxiliar inverte a ordem dos elementos dessa fila
// int main(){
//     Queue fila;
//     Stack P;
//     initQueue(fila);
//     initStack(P);
//     elemento num;
//     int n;
//     cout<<"Quantidade de numeros que serao inseridos: "; cin>>n;
//     for (int i=0; i<n; i++){
//         cout<<"Numero: "; cin>>num;
//         insert(fila, num);
//     }
//     while (!isEmptyQ(fila)){
//         num = eliminate(fila);
//         push(P, num);
//     }
//     while (!isEmpty(P)){
//         num = pop(P);
//         insert(fila, num);
//     }
//     imprimir_fila(fila); 
//     return 0;
// }

// Exercício 06 - Construir uma função que recebe duas filas Q1 e Q2, contendo números inteiros ordenados e 
// constrói uma terceira fila Q3, contendo os elementos da fila Q1 sem os elementos da interseção de Q1 com Q2.
// int main(){
//     Queue fila1, fila2, fila3, aux;
//     initQueue(fila1);
//     initQueue(fila2);
//     initQueue(fila3);
//     initQueue(aux);
//     elemento num, cont=0;
//     int n;
//     cout<<"Qntd de elementos fila 1: "; cin>>n;
//     for (int i=0; i<n; i++){
//         cout<<"Elemento: "; cin>>num;
//         insert(fila1, num);
//     }
//     cout<<"Qntd de elementos fila 2: "; cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Elemento: "; cin>>num;
//         insert(fila2, num);
//     }
//     // Verifica quantidade de elementos da fila 2
//     while (!isEmptyQ(fila2)){
//         insert(aux, eliminate(fila2));
//         cont++;
//     }
//     while (!isEmptyQ(aux)){
//         insert(fila2, eliminate(aux));
//     }
//     // Iniciar inserção da fila 3
//     while (!isEmptyQ(fila1)){
//         num = eliminate(fila1);
//         int encontrou=0;
//         while (!isEmptyQ(fila2)){
//             if(num==consult(fila2)){
//                 encontrou = 1;
//                 break;
//             }
//             insert(aux, eliminate(fila2));
//         }
//         if(encontrou!=1) insert(fila3, num);
//         while (!isEmptyQ(aux)){
//             insert(fila2, eliminate(aux));
//         }
//     }
//     imprimir_fila(fila3);
//     return 0;    
// }

// Exercício 07 - Construir uma função que recebe duas filas Q1 e Q2, contendo números inteiros ordenados e constrói uma terceira fila Q3, contendo os elementos da fila Q1 e da Q2 sem os elementos da interseção de Q1 com Q2.
// void cria_fila3(Queue& fila1, Queue& fila2, Queue&fila3, Queue& aux, elemento num){
//     int achou=0;
//     while (!isEmptyQ(fila1)){
//         num=eliminate(fila1);
//         while (!isEmptyQ(fila2)){
//             if(num==consult(fila2)){
//                 eliminate(fila2);
//                 achou=1;
//                 break;
//             }
//             insert(aux, eliminate(fila2));
//         }
//         if(achou!=1){
//             insert(fila3, num);
//         }
//         while (!isEmptyQ(aux)){
//             insert(fila2, eliminate(aux));
//         }  
//     }
//     while (!isEmptyQ(fila2)){
//         insert(fila3, eliminate(fila2));
//     }
// }

// int main(){
//     Queue fila1, fila2, fila3, aux;
//     initQueue(fila1);
//     initQueue(fila2);
//     initQueue(fila3);
//     initQueue(aux);
//     elemento num;
//     int n;
//     cout<<"Qtd de elementos fila 1: "; cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Numero: "; cin>>num;
//         insert(fila1, num);
//     }
//     cout<<"Qtd de elementos fila 2: "; cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"Numero: "; cin>>num;
//         insert(fila2, num);
//     }
//     cria_fila3(fila1, fila2, fila3, aux, num);
//     imprimir_fila(fila3);
//     return 0;
// }