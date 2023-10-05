// lista de exercícios
#include <iostream>
#include <cstdlib> // Para utilizar a função malloc, calloc ou realloc.
using namespace std;

// Exercício 04
struct Aluno {
int ra;
char nome[31];
float nota;
};

void ler_alunos(int *N, struct Aluno **alunos){
cout<<"Digite a quantidade de alunos: ";
cin>>*N;
// usando malloc ----> *alunos = (struct Aluno*)malloc(*N * sizeof(struct Aluno));
alunos = (struct Aluno*)calloc(*N, sizeof(struct Aluno));
for(int i=0; i<*N; i++) {
cout<<"Digite o RA do aluno: ";
cin>>(alunos)[i].ra;
cin.ignore();
cout<<"Digite o nome do aluno: ";
cin.getline((alunos)[i].nome, 31); //nao pode usar -> porque é um vetor não simples, não tem apenas uma linha de inf no strcut
cout<<"Digite a nota do aluno: ";
cin>>(alunos)[i].nota;}
}

float calcularMedia(int N, struct Aluno *alunos){
float soma=0;
for(int i=0; i<N; i++){
soma+= alunos[i].nota;}
return soma/N;
}

void imprimirAlunos(int N, struct Aluno *alunos){
cout<<"\nRA\tNome\tNota\n";
for (int i=0; i<N; i++){
cout<<alunos[i].ra <<" "<<alunos[i].nome<< " " <<alunos[i].nota<<endl;}
}

int main(){
int N;
struct Aluno *alunos;
float media;

ler_alunos(&N, &alunos);
media=calcularMedia(N, alunos);

cout<<"\nDados dos alunos:\n";
imprimirAlunos(N, alunos);

cout<<"\nMédia das notas: "<<media<<endl;
//sempre usar o free para tirar o espaço de memoria aberto pelo malloc.
free(alunos);
return 0;
}