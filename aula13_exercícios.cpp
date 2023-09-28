#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>

using namespace std;

// Structs em funções
// Exercício 01
// struct produto{
//     int codigo;
//     char nome[31];
//     float preco;
//     int qnt_estoque;
// };

// void leitura_produtos(int *n, prod[]){
//     cout<<"Quantidade de produtos que serão cadastrados: "; cin>>*n;
//     for (int i=0; i<*n; i++)
//         cout<<"Código: "; cin>>prod[i].codigo;
//         cout<<"Nome: "; cin.ignore(); cin>>prod[i].nome[31];
//         cout<<"Preço: "; cin>>prod[i].preco;
//         cout<<"Quantidade em estoque: "; cin>>prod[i].qnt_estoque;
// }

// int main(){
//     produto prod[100];
//     int n;
//     leitura_produtos(prod,&n);
//     atualiza_quantidade(prod,n);
//     imprime_produtos(prod,n);
//     return 0;
// }



//Funções recursivas
/* Exercício 01
int soma(int n, int soma = 0){
    cout<<"Quantidade de números que deseja somar: "; cin>>n;
    for(int i=1; i<=n; i++)
        soma+=i;
    return soma;
}
int main(){
    int total, n;
    total = soma(n);
    cout<<total;
    return 0;
}*/

int soma(int n) {
    if (n == 0) {
        return 0; // Caso base: a soma dos primeiros 0 números naturais é 0.
    } else {
        return n + soma(n - 1); // Chamada recursiva para calcular a soma dos n-1 primeiros números.
    }
}

int main() {
    int total, n;

    std::cout << "Digite um valor para n: ";
    std::cin >> n;

    total = soma(n);

    std::cout << "A soma dos primeiros " << n << " números naturais é: " << total << std::endl;

    return 0;
}
