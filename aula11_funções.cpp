#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

// Exercício 01
/*int conta_vogal(char frase[]);
void ler_frase(char f[]);

int main(){
    char frase[51];
    ler_frase(frase);
    int total_vogais = conta_vogal(frase);

    cout<<"Frase lida: "<<frase<<endl;
    cout<<"Total de vogais: "<<total_vogais<< endl;

    return ;
}

int conta_volgal(char frase[]){
    int contador = 0;
    for (int i = 0; i<strlen(frase); i++){
        char c = _tolower(frase[i]); // Converte o caracter para maiúsculo
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }
    return contador;
}

void ler_frase(char f[]){
    cout<<"Digite uma frase de até 50 caracteres: ";
    cin.getline(f, 51);
}*/

// Exercício 02
/*void ler_vetor(int vet[]){
    for (int i=0; i<10; i++){
        cout<<"Digite um número: ";
        cin>>vet[i];
    }
}

int conta_pares(int vet[]){
    int contador = 0;
    for (int i=0; i<10; i++){
        if (vet[i]%2==0)
            contador++;
    }
    return contador;
}

void imprime_vetor(int vet[]){
    cout<<"Vetor lido: ";
    for (int i=0; i<10; i++)
        cout<<vet[i]<<" ";
}

int main(){
    int vetor[10], contador;
    ler_vetor(vetor);
    contador = conta_pares(vetor);
    imprime_vetor(vetor);
    cout<<"\nTotal de pares: "<< contador;

    return 0;
}*/

// Exercício 03
#include <iostream>
#include <iomanip>

using namespace std;

void ler_matriz(int matriz[][30], int n, int m){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            cout << "[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
}

void imprimir_matriz(int matriz[][30], int n, int m){
    for (int i = 0; i < n; i++){
        cout << endl;
        for (int j = 0; j < m; j++){
            cout << setw(5) << matriz[i][j];
        }
    }
}

int main(){
    int n, m;
    cout << "Digite a medida da matriz (NxM): ";
    cin >> n >> m;
    int A[30][30]; // Defina um tamanho máximo para a matriz, por exemplo, 30x30
    ler_matriz(A, n, m);
    
    cout << "Matriz A" << endl;
    imprimir_matriz(A, n, m);
    
    return 0; // Adicione esta linha para indicar que o programa terminou com sucesso
}