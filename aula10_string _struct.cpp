#include <iostream>
#include <string.h>
using namespace std;

int main() {
    //Exercício 01 - CORRIGIR
    /*int n, flag = 0;
    cout << "Quantidade de cidades que serão inseridas: ";
    cin >> n;
    cin.ignore();
    char cidade[50][31];
    char busca[31];
    for (int i = 0; i < n; i++) {
        cout << "\nCidade " << i + 1 << ": ";
        cin.getline(cidade[i], 31);
    }
    while (true) {
        cout << "Digite a cidade que deseja encontrar ou '*' para parar: ";
        cin.getline(busca, 31);
        if (busca[0] == '*')
            break;
        for (int i = 0; i < n; i++) {
            if (strcmp(cidade[i], busca) == 0)
                flag++;
        }
        if (flag == 0)
            cout << "Cidade " << busca << " não consta na lista!" << endl;
        else
            cout << "Cidade " << busca << " consta na lista!" << endl;

        flag = 0; // Reiniciar a flag para a próxima verificação
    }*/

    // Exercício 02
    /*int n;
    cout << "Quantidade de nomes que serão inseridos: ";
    cin >> n;
    cin.ignore();

    char nomes[50][51];

    for (int i = 0; i < n; i++) {
        cout << "Nome " << i + 1 << ": ";
        cin.getline(nomes[i], 51);
    }

    cout << "Nomes homônimos:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Evitar comparações duplicadas
            if (stricmp(nomes[i], nomes[j]) == 0) {
                cout << nomes[i] << " é homônimo de " << nomes[j] << endl;
            }
        }
    }*/

    return 0;
}

//Exercício 03 - FINALIZAR
    /*struct produto{
        int codigo, quantidade_estoque;
        char nome[31];
        float preco;
    };

    int main(){
        int n;
        produto prod;
        cout<<"Quantidade de produtos que serão cadastrados: ";
        cin>>n;
        for (int i=0; i<n; i++){
            cout<<"Código: "; cin>>prod.codigo;
            cin.ignore();
            cout<<"Nome: "; cin.getline(prod.nome, 31);
            cout<<"Preço: "; cin>>prod.preco;
            cout<<"Quantidade no estoque: "; cin>>prod.quantidade_estoque;
        }

        return 0;
    }*/

// Exercício 04


// Exercício 05
