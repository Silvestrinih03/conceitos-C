#include <iostream>
#include <cstdlib>

using namespace std;

// Funções principais
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

void inserir_ordenado(no**pri, elemento a){
    no*novo, *p, *anterior;
    novo=novo_no();
    anterior=NULL;
    novo->info=a;
    p=*pri;
    while (p!=NULL && a > p->info)    {
        anterior=p;
        p=p->link;
    }
    if (p==*pri) *pri=novo;
    else anterior->link=novo;
    novo->link=p;
}

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

// //Exercício 01
// int contar_nos(no*pri){
//     no*p;
//     p=pri;
//     int contador=0;
//     while (p->link!=NULL)
//     {
//         contador++;
//         p=p->link;
//     }
//     return contador;
// }

// //Exercício 02 e 03
// int numero_repetido(no* pri) {
//     no* p, *q;
//     p = pri;
//     while (p != NULL) {
//         q = p->link;
//         while (q != NULL) {
//             if (p->info == q->info) {
//                 return 1; // Encontrou um número repetido
//             }
//             q = q->link;
//         }
//         p = p->link;
//     }
//     return 0; // Não encontrou números repetidos
// }

// // Exercício 04
// int verifica_ordenacao(no*pri){
//     no *p, *q;
//     p=pri;
//     while (p!=NULL){
//         q=p->link;
//         while (q!=NULL){
//             if (p->info>q->info) return 0;
//             q= q->link;
//         }
//         p=p->link;
//         }
//     return 1;
// }

// // Exercício 05
// float porcentagem_repeticao(no*pri){
//     no*p, *q;
//     p=pri;
//     int qnt=0, repeticao=1,total;
//     float porcentagem;
//     elemento num=pri->info;
//     if (pri==NULL)return -1; //Erro
//     while (p!=NULL){
//         q=p->link;
//         while (q!=NULL){
//             if(p->info==q->info)repeticao++;
//             q=q->link;
//         }
//         if (repeticao>qnt){
//             qnt=repeticao;
//             num=p->info;
//         }
//         p=p->link;
//         total++;
//     }
//     porcentagem=qnt/(total*100.0);
//     return porcentagem;
// }

// int main(){
//     no*pri;
//     pri=init();
//     int n, valor, cont, repete, ordem;
//     cout<<"Quantidade de valores que serao inseridos: "; cin>>n;
//     for (int i=0; i<n; i++){
//         cout<<"Valor "<<i+1<<": "; cin>>valor;
//         // inserir_ordenado(&pri, valor);
//         inserir_final(&pri, valor);
//     }
//     imprimir(pri);
//     //Exercício 01
//     cout<<"\n\nQuantidade de nos: "<<contar_nos(pri)<<endl;

//     //Exercício 02 e 03
//     repete=numero_repetido(pri);
//     if (repete==1)cout<<"\n\nExistem elementos repetidos na lista!";
//     else if (repete==0)cout<<"\n\nNao existem elementos repetidos na lista!";

//     // Exercício 04
//     ordem=verifica_ordenacao(pri);
//     if(ordem==1)cout<<"\n\nA lista e ordenada!";
//     else if(ordem==0)cout<<"\n\nA lista nao e ordenada!";

//     //Exercício 05
//     cout<<"\n\nPorcentagem do número que mais se repete em relação a lista: "<<porcentagem_repeticao(pri)<<"%";

//     return 0;
// }


// II - Criação de lista ligada
// Exercício 01
// void lista_seq(no**pri){
//     // no*p;
//     // p=*pri;
//     int num=1;
//     while (num<1000){
//         inserir_final(pri, num);
//         num=num*2;
//         // p=p->link;
//     }
    
// }
// int main(){
//     no*pri;
//     pri=init();
//     lista_seq(&pri);
//     imprimir(pri);
// }

//Exercício 02 ????

// Exercício 03 ???

// Exercício 04 ????
// int main(){
//     no*pri=init();
//     int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 4, 6, 8, 10};
//     int tamanho = sizeof(numeros) / sizeof(numeros[0]);
//     for (int i = 0; i < tamanho; i++) {
//         inserir_final(&pri, numeros[i]);
//     }
//     cout << "Lista de números inteiros não ordenados com repetições:" << endl;
//     imprimir(pri);

//     return 0;
// }


// III - Inserções na lista

/// IV - Rearranjo das ligações


/// V - Eliminação
// Exercício 01
// void eliminar_ultimoItem(no** pri) {
//     no*p=*pri, *anterior=NULL;
//     if (*pri == NULL) {
//         cout << "Lista vazia" << endl;
//         return; // Lista vazia
//     }
//     if ((*pri)->link == NULL) {
//         free(*pri);
//         *pri = NULL;
//         return; // Há apenas um elemento na lista, remova-o e defina o ponteiro como NULL.
//     }
//     while (p->link != NULL) {
//         anterior = p;
//         p = p->link;
//     }
//     free(p);
//     anterior->link = NULL;
// }
// int main(){
//     no*pri=init();
//     int n, valor;
//     cout<<"Digite a quantidade de valores que será inserido: "; cin>>n;
//     for (int i=0; i<n; i++){
//         cout<<"Valor: "; cin>>valor;
//         inserir_final(&pri, valor);
//     }
//     imprimir(pri);
//     eliminar_ultimoItem(&pri);
//     cout<<endl<<"Elimina o último item: ";imprimir(pri);
// }



// Exercícios extras
int eliminar_terceiro_no(no**pri){
    no*p=*pri, *anterior=NULL;
    int cont=1;
    while (p!=NULL & cont<3){
        anterior=p;
        p=p->link;
        cont++;
    }
    if (cont<3){
        return -1;
    }
    else anterior->link=p->link;
    free(p);
    return 0;
}

int main(){
    no*pri=init();
    int n, valor, elim;
    cout<<"Quantidade de elementos: "; cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Valor: "<<i+1<<": "; cin>>valor;
        inserir_final(&pri, valor);
    }
    imprimir(pri);
    elim=eliminar_terceiro_no(&pri);
    if (elim==-1)cout<<"Não há terceiro nó";
    else cout<<endl;
    imprimir(pri);
}