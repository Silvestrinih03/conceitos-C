#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // Exercício 3
    // ax2 + bx + c.
    // float a, b, c, delta, x1, x2;
    // cout<<"Digite o valor de a: ";
    // cin>>a;
    // cout<<"\nDigite o valor de b: ";
    // cin>>b;
    // cout<<"\nDigite o valor de c: ";
    // cin>>c;
    // delta = pow(b, 2)-4*a*c;
    // x1 = (-b+ sqrt(delta))/2*a;
    // x2 = (-b- sqrt(delta))/2*a;
    // cout << "X1 = "<<x1<<endl;
    // cout << "X2 = "<<x1<<endl;

    
    // Ler vetor X com tamanho [20]
    // Criar um vetor soma[6]={0}
    // Soma[0] : somatória dos valores pares contidos em X;
    // Soma[1] : somatória dos valores ímpares contidos em X;
    // Soma[2] : somatória dos valores negativos contidos em X;
    // Soma[3] : somatória dos valores positivos contidos em X;
    // Soma[4]: somatória dos múltiplos de 5 contidos em X;
    // Soma[5] : somatória de todos os valores contidos em X

    int x[20], soma[6]={0}, i;
    cout<<"Digite 20 números: "<<endl;
    for (i=0; i<20; i++)
        cin>> x[i];
        if (x[i]%2 == 0)
            soma[1]+=x[i];
        else
            soma[2]+=x[i];

        if (x[i]<0)
            soma[2]+=x[i];
        else
            soma[3]+=x[i];

        if (x[i]%5 == 0)
            soma[4]+=x[i];
        
        soma[5]+=x[i];

    for (i=0; i<20; i++){
        cout<<x[i]<<endl;
        cout<<"Soma dos números pares: "<<soma[0]<<endl;
        cout<<"Soma dos números impares: "<<soma[1]<<endl;
        cout<<"Soma dos números negativos: "<<soma[2]<<endl;
        cout<<"Soma dos números positivos: "<<soma[3]<<endl;
        cout<<"Soma dos números múltiplos de 5: "<<soma[4]<<endl;
        cout<<"Soma tatal: "<<soma[5]<<endl;}
    

    return 0;
}