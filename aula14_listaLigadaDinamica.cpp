#include <iostream>
#include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
using namespace std;

// Lista ligada/ Dinâmica
// Exercício 01
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

// void inserir_inicio(no**pri, elemento a){
//     no*novo;
//     novo=novo_no();
//     novo->info=a;
//     novo->link = *pri;
//     *pri=novo;
    
// }

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

int main(){
    no *pri, *Pmaior=pri, *Pmenor=pri;
    pri=init();
    elemento valor;
    int n, i;
    cout<<"Digite a quantidade de valores que serão inseridos:  "; cin>>n;
    for (i=0; i<n; i++){
        cout<<"Valor "<<i+1<< ": "; cin>> valor;
        inserir_final(&pri, valor);
        // inserir_ordenado(&pri, valor);
        // inserir_inicio(&pri, valor);
    }
    no*p=pri;
    while (p!=NULL)
    {
        if (p->info > Pmaior->info)
            Pmaior = p;
        else if (p->info < Pmenor->info)
            Pmenor = p;
        p = p->link;
    }
    cout<<"Valores: "; imprime(pri);
    cout<<"\nMaior: "<<Pmaior->info<<endl;
    cout<<"Menor: "<<Pmenor->info<<endl;
}




// Exercício 02 - CORRIGIR
// typedef float elemento;
// typedef struct no{
//     elemento info;
//     no*link;
// }no;

// void imprimir(no*pri){
//     while (pri!=NULL)
//     {
//         cout<<pri->info<<"  ";
//         pri=pri->link;
//     }
// }

// no*novo_no(){
//     no*novo;
//     novo=(no*)malloc(sizeof(no));
//     if(novo==NULL){
//         cout<<"Erro de alocação de memória!";
//         exit(1);
//     }
//     return novo;
// }

// void inserir_final(no**pri, elemento a){
//     no*novo, *p;
//     p=*pri;
//     novo=novo_no();
//     novo->info=a;
//     novo->link=NULL;
//     while (p!=NULL && p->link!=NULL)
//         p=p->link;
//     if (p==NULL)
//         *pri=novo;
//     else p->link=novo;
    
// }

// void criar_vetor(no*pri, int n, elemento a){
//     cout<<"Quantidade de notas que serão inseridas: "; cin>>n;
//     for (int i=0; i<n; i++){
//         cout<<"Nota "<<i+1<<": "; cin>>a;
//         inserir_final(&pri, a);
//     }
// }

// int mais_repete(no*pri, int n){
//     int rep = 0, contar;
//     elemento maior;
//     no *p, *q;
//     if(pri==NULL)return -1;
//     p=pri;
//     while (p->link!=NULL)
//     {
//         q=p->link; contar=1;
//         while (q!=NULL)
//         {
//             if (p->info==q->info)contar++;
//             q=q->link;
//         }
//         if (contar>rep){
//             rep=contar;
//             maior=p->info;
//         }
//         p=p->link;
//     }
//     return maior, contar;
// }

// int main(){
//     no*pri;
//     int n;
//     elemento a;
//     criar_vetor(pri, n, a);
//     imprimir(pri);
//     cout<<mais_repete(pri, n);
// }



//Exercício 03



// Exercício 04
// struct Aluno {
// int ra;
// char nome[31];
// float nota;
// };

// void ler_alunos(int *N, struct Aluno **alunos){
// cout<<"Digite a quantidade de alunos: ";
// cin>>*N;
// // usando malloc ----> *alunos = (struct Aluno*)malloc(*N * sizeof(struct Aluno));
// alunos = (struct Aluno*)calloc(*N, sizeof(struct Aluno));
// for(int i=0; i<*N; i++) {
// cout<<"Digite o RA do aluno: ";
// cin>>(alunos)[i].ra;
// cin.ignore();
// cout<<"Digite o nome do aluno: ";
// cin.getline((alunos)[i].nome, 31); //nao pode usar -> porque é um vetor não simples, não tem apenas uma linha de inf no strcut
// cout<<"Digite a nota do aluno: ";
// cin>>(alunos)[i].nota;}
// }

// float calcularMedia(int N, struct Aluno *alunos){
// float soma=0;
// for(int i=0; i<N; i++){
// soma+= alunos[i].nota;}
// return soma/N;
// }

// void imprimirAlunos(int N, struct Aluno *alunos){
// cout<<"\nRA\tNome\tNota\n";
// for (int i=0; i<N; i++){
// cout<<alunos[i].ra <<" "<<alunos[i].nome<< " " <<alunos[i].nota<<endl;}
// }

// int main(){
// int N;
// struct Aluno *alunos;
// float media;

// ler_alunos(&N, &alunos);
// media=calcularMedia(N, alunos);

// cout<<"\nDados dos alunos:\n";
// imprimirAlunos(N, alunos);

// cout<<"\nMédia das notas: "<<media<<endl;
// //sempre usar o free para tirar o espaço de memoria aberto pelo malloc.
// free(alunos);
// return 0;
// }



//Exercício 05
// typedef produto prod;
// typedef struct {
//     int codigo;
//     char nome[31];
//     float preco;
//     int quantidade;
// }produto;

