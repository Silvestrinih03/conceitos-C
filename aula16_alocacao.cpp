#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*struct aluno{
    int ra;
    char nome[31];
    float nota;
};

void leitura_informacoes(int n, aluno al[]){
    cout<<"Quantidade de alunos: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"RA: "; cin>>al[i].ra;
        cin.ignore();
        cout<<"Nome: "; cin.getline(al[i].nome, 31);
        cout<<"Nota: "; cin>>al[i].nota;
    }
}

aluno maior_nota(int n, aluno al[]){
    aluno maior_nota = al[0];
    for(int i=1; i<n; i++)
        if(al[i].nota>maior_nota.nota)
            maior_nota=al[i];
    return maior_nota;
}

aluno imprimir_aluno(aluno al){
    cout<<"RA: "<<al.ra;
    cout<<"Nome: "<<al.nome;
    cout<<"Nota: "<<al.nota;
}

int main(){
    const int tamanhoMaximo = 100;
    int n;
    aluno al[tamanhoMaximo];
    leitura_informacoes(n, al);
    aluno alunoMaiorNota = maior_nota(n, al);
    cout << "Aluno com a maior nota:" << endl;
    imprimir_aluno(alunoMaiorNota);

    return 0;
}

// Ponteiro
int x = 10;
int *m = &x; //m recebe o endereço de x
int **s = &m; //s recebe o endereço de m que possui o endereço de x*/