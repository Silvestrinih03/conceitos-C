#include <iostream>
#include <string.h>
#include <cstring>
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
/*struct produto {
    int codigo, quantidade_estoque;
    char nome[31];
    float preco;
};

int main() {
    int n;
    cout << "Quantidade de produtos que serão cadastrados: ";
    cin >> n;
    
    produto prod[100];
    
    for (int i = 0; i < n; i++) {
        cout << "Código: "; 
        cin >> prod[i].codigo;
        cin.ignore();
        
        cout << "Nome: "; 
        cin.getline(prod[i].nome, 31);
        
        cout << "Preço: "; 
        cin >> prod[i].preco;
        
        cout << "Quantidade no estoque: "; 
        cin >> prod[i].quantidade_estoque;
    }
    
    cout << "Produtos com quantidade no estoque igual a zero:\n";
    
    for (int i = 0; i < n; i++) {
        if (prod[i].quantidade_estoque == 0) {
            cout << "Código: " << prod[i].codigo << "\n";
            cout << "Nome: " << prod[i].nome << "\n";
            cout << "Preço: " << prod[i].preco << "\n";
            cout << "Quantidade no estoque: " << prod[i].quantidade_estoque << "\n\n";
        }
    }
    
    return 0;
}*/

// Exercício 04


// Exercício 05
