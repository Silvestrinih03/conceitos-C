
// #include <iostream>
// #include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
// #include "queue_lg.h"
// using namespace std;

// // Exercício 01 - Construir um programa que faz a inclusão e exclusão para atendimento de
// // pessoas (rg, nome, idade) em uma fila de espera, para atendimento no guichê de
// // um determinado banco. O programa deve ter um menu para escolher a atividade a
// // ser executada em determinado momento: incluir uma pessoa na fila ou chamar
// // alguém para ser atendido.
// struct pessoa{
//     char nome[31];
//     int rg, idade;
// };
// typedef pessoa queue_element;
// int menu(){
//     cout<<"MENU"<<endl;
//     cout<<"1 - Inserir pessoa"<<endl;
//     cout<<"2 - Chamar pessoa"<<endl;
//     cout<<"3 - Sair"<<endl;
//     cout<<"Escolha: ";
//     int esc;
//     do{
//         cin>>esc;
//     }while (esc<1 || esc>3);
//     return esc;
// }
// queue_element ler_pessoa(){
//     queue_element V;
//     cout<<"Nome: "; cin.ignore(); cin.getline(V.nome, 31);
//     cout<<"RG: "; cin>>V.rg;
//     cout<<"Idade: "; cin>>V.idade;
//     return V;
// }
// int main(){
//     Queue fila;
//     initQueue(fila);
//     queue_element V;
//     int escolha;
//     do{
//         escolha = menu();
//         switch (escolha)
//         {
//         case 1:
//             V = ler_pessoa();
//             insert(fila, V);
//             break;
//         case 2:
//             if(!isEmptyQ(fila)){
//                 V = eliminate(fila);
//                 cout<<V.nome<<" foi para o atendimento"<<endl;
//             }
//             else cout<<"Fila vazia!";
//             break;
//         }
//     }while(escolha!=3);
//     cout<<"Finalizando operações...";
//     return 0;
// }