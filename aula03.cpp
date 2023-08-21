#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // Operações matemáticas
    // para a raiz quadrada, usamos uma função pronta, chamada: sqrt ( a ); de "square root“ – biblioteca <math.h>
    cout<<"1)"<<endl;
    cout<<"{3[2(3+8/2)-3]-√100}/(3-8) = "<<(3*(2*(3+8/2)-3)-sqrt(100))/(3-8)<<endl;

    // Operações entre dois inteiros o resultado é INTEIRO
    cout<<"\n2)"<<endl;
    cout<<"11/2 = "<<11/2<<endl;

    //Resto da divisão (%) só funciona com números INTEIROS
    cout<<"\n3)"<<endl;
    float a=11., b=2.;
    cout<<"11/2 = "<<a/b<<endl;
    cout<<"11%2 = "<<(int) a % (int)b<<endl;

    // Incremento x = x + 1 ou x++
    // Decremento x = x - 1 ou x--
    // \t >> parágrafo (avança 8 posições)

    /*Construir um programa que faz a leitura de uma temperatura em Fahrenheit, calcula a respectiva
    temperatura em Celsius e imprime as duas temperaturas: a lida e a calculada. A fórmula para o cálculo: C = 5/9 * (F – 32)*/
    cout<<"\n4)"<<endl;
    float f, c;
    cout<<"Temperatura em Fahrenheit: ";
    cin>>f;
    c = (float)5/9*(f-32);
    cout<<f<<" Fahrenheit"<<" = "<<c<<" Celsius"<<endl;
        
    return 0;
}