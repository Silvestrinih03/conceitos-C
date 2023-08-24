# include <iostream>
# include <math.h>
using namespace std;
int main(){
    // Exercício 01
    // int x;
    // cout<<"Digite um número inteiro: ";
    // cin>>x;
    // if (x%5 == 0)
    //     cout<<x<<" é múltiplo de 5!";
    // else
    //     cout<<x<< " não é múltiplo de 5!";

    // Exercício 02
    // int a, b;
    // cout<<"Digite um valor para A e um valor para B: ";
    // cin>>a>>b;
    // if (a == b)
    //     cout<<a<<" + "<<b<<" = "<< a+b;
    // else
    //     cout<<a<<" x "<<b<<" = "<<a*b;

    // Exercício 03
    // ax2 + bx + c 
    // delta = b2-4ac
    // x = -b +- sqrt delta/2a
    // int a, b, c, delta;
    // cout<<"Data a equação ax^2 + bx + c"<<endl;
    // cout<<"Digite um valor para A: ";
    // cin>>a;
    // cout<<"Digite um valor para B: ";
    // cin>>b;
    // cout<<"Digite um valor para C: ";
    // cin>>c;
    // delta = pow(b, 2)-4*a*c;
    // if (delta == 0)
    //     // Raíz única
    //     cout<<"Raiz = "<<(-b+sqrt(delta))/(2*a);
    // if (delta > 0){
    //     cout<<"Raiz 1 = "<<(-b+sqrt(delta))/(2*a)<<endl;
    //     cout<<"Raiz 2 = "<<(-b-sqrt(delta))/(2*a)<<endl;
    // }
    // if (delta < 0)
    //     cout<<"Raiz inexistente!";

    // Exercício 04
    // float n1, n2, p1, p2, media_pond;
    // cout<<"Digite a Nota 1 e seu respectivo peso: "; cin>>n1>>p1;
    // cout<<"Digite a Nota 2 e seu respectivo peso: "; cin>>n2>>p2;
    // media_pond = ((n1*p1)+(n2*p2))/(p1+p2);
    // if (media_pond >= 7 && media_pond != 10)
    //     cout<<"Média = "<<media_pond<<"\nAprovado!";
    // else
    //     cout<<"Média = "<<media_pond<<"\nReprovado!";
    // if (media_pond == 10)
    //     cout<<"Média = "<<media_pond<<"\nAprovado com Distinção!";

    // Exercício 05
    // float salario;
    // cout<<"Digite o salário atual: "; cin>> salario;
    // if (salario < 500)
    //     cout<<"Salário após reajuste: "<<(salario*0,15)+salario;
    // if (salario >= 500 && salario < 1000)
    //     cout<<"Salário após reajuste: "<<(salario*0,1)+salario;
    // if (salario >= 1000)
    //     cout<<"Salário após reajuste: "<<(salario*0,05)+salario;

    // Exercício 06
    

    // Exercício 07
    int n;
    float s;
    cout<<"Data a somatória (𝑆 = √1 + √2 + √3 + √4 + √5 + ⋯ + √𝑁)"<<endl;
    do{
        cout<<"Digite o valor de N (entre 11 e 99): "; cin>>n;
    }
    while (n<10 && n>100);


    return 0;
}