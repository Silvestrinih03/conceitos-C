#include <iostream>
using namespace std;
int main(){
//Calcular a área do quadrilátero e imprimir se é quadrado ou retângulo. O programa deverá ter como
// dados de entrada: base e altura. Além de imprimir o valor da área calculado, imprimir a mensagem se
// quadrado ou retângulo.

    // float base, altura;
    // cout<<"Base: "; cin>>base;
    // cout<<"Altura: "; cin>>altura;
    // cout<<"Área = "<<base*altura<<endl;
    // if (base == altura)
    //     cout<<"Quadrado!";
    // else
    //     cout<<"Retângulo!";



// Construir um programa que faz a leitura de três números inteiros (a, b, c) e de uma
// letra (pode ser maiúscula ou minúscula).
// Usando o comando de seleção múltipla (switch/case), selecione de acordo com a letra:
// A ou a: calcula x = a * ( b –c) / 2 + c e imprime o valor de x;
// B ou b: calcula x = a * ( b + 2) + c/5 e imprime o valor de x;
// C ou c: calcula x = (a – b) * ( c – b) / 2 e imprime o valor de x;
// D ou d: calcula x = (a + b + c) / ( b + c) e imprime o valor de x;
// E ou e: calcula x = a * a * a - ( b – c – a)/ 2 e imprime o valor de x;

    int a, b, c;
    char letra;
    cout<<"Digite os valores de A, B e C: "; cin>>a>>b>>c;
    cout<<"Digite uma opção (A, B, C, D ou E): "; cin>>letra;
    switch (letra)
    {
    case 'A':{
        cout<<"X = "<<a*(b-c) / 2+c;
        break;
    }
    case 'B':{
        cout<<"X = "<< a*(b+2)+c/5;
        break;
    }
        

    
    return 0;
}