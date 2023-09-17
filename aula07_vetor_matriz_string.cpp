#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // Exercício 01
    /*int n, k, vetor[100];
    cout<<"Quantos números serão lidos: "; cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Valor "<<i+1<<": "; cin>>vetor[i];
    }
    cout<<"Digite o valor que deseja multiplicar os números do vetor: "; cin>>k;
    cout<<"\n\nValor de k:"<<k<<endl;
    cout<<"Vetor: ";
    for (int i=0; i<n; i++)
        cout<<vetor[i]<< "  ";
    cout<<"\nResultado da multiplicação: "<<endl;
    for (int i=0; i<n; i++)
        cout<<vetor[i]<<" x "<<k<<" = "<<vetor[i]*k<<endl;*/

    // Exercício 02
    /*int n, soma=0, vetor[100];
    cout<<"Quantidade de valores inseridos: "; cin>>n;
    if (n>100 || n<1)
        cout<<"O valor inserido deve ser maior que 0 e menor que 100, insira um valor válido: "; cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Digite o valor "<<i+1<<": "; cin>>vetor[i];
        if (vetor[i]%5==0)
            soma+=vetor[i];
    }
    cout<<"Vetor lido: ";
    for (int i=0; i<n; i++)
        cout<<vetor[i]<<" ";
    cout<<"\nSoma = "<< soma;*/

    //Exercício 03
    /*int vetorI[50], vetorII[50], vetorIII[100], n;
    cout<<"Valor de números lidos: (máximo 50) "; cin>>n;
    if (n<1 || n>50){
        cout<<"O valor inserido é invalido, insira um valor que esteja no intervalo de 1 a 50:  "; cin>>n;
    }
    cout<<"\nInsira os valores do vetor I: \n";
    for (int i=0; i<n; i++){
        cout<<"Valor "<<i+1<<": "; cin>>vetorI[i];
    }
    cout<<"\nInsira os valores do vetor II: \n";
    for (int i=0; i<n; i++){
        cout<<"Valor "<<i+1<<": "; cin>>vetorII[i];
    }
    int v1=0, v2 =0;
    for (int i=0; i<2*n; i++){
        if (i%2==0){
            vetorIII[i]=vetorI[v1];
            v1++;
        } else{
            vetorIII[i]=vetorII[v2];
            v2++;
        }
    }
    cout<<"\nVetor I: ";
    for (int i=0; i<n; i++)
        cout<<vetorI[i]<<"  ";
    cout<<"\nVetor II: ";
    for (int i=0; i<n; i++)
        cout<<vetorII[i]<<"  ";
    cout<<"\nVetor III: ";
    for (int i=0; i<2*n; i++)
        cout<<vetorIII[i]<<"  ";*/

    //Exercício 04
    /*int n, vetorI[100], vetorII[100];
    cout<<"Valor de números lidos: (máximo 50) "; cin>>n;
    if (n<1 || n>100){
        cout<<"O valor inserido é invalido, insira um valor que esteja no intervalo de 1 a 100:  "; cin>>n;
    }
    for (int i=0; i<n; i++){
        cout<<"Valor "<<i+1<<": "; cin>>vetorI[i];
    }
    int v1=n-1;
    for (int i=0; i<n; i++){
        vetorII[i]=vetorI[v1];
        v1--;
    }
    cout<<"\nVetor lido: ";
    for (int i=0; i<n; i++){
        cout<<vetorI[i]<<"  ";
    }
    cout<<"\nVetor invertido: ";
    for (int i=0; i<n; i++){
        cout<<vetorII[i]<<"  ";
    }*/

    //Exercício 05
    

    // Exercício 09
    /*int n, i, j;
    cout<<"Digite a medida da matriz quadrada (NxN): ";
    cin>>n;
    int A[n][n], T[n][n];
    cout<<"Digite os valores da matriz A ("<<n<<"x"<<n<<")";
    //Matriz A
    for (i=0; i<n; i++)
        for(j=0;j<n;j++){
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
        
    //Matriz transposta de A
    for (j=0;j<n;j++){
        for(i=0;i<n;i++)
            T[j][i] = A[i][j];
    }
    // Imprimir matriz A
    for (i=0;i<n;i++){
        cout<<endl;
        for(j=0;j<n;j++)
            cout<<setw(4)<<A[i][j];
    }
    cout<<endl;
    // Imprimir matriz T
    for (i=0;i<n;i++){
        cout<<endl;
        for(j=0;j<n;j++)
            cout<<setw(4)<<T[i][j];
    }
    cout<<endl;
    // Verificar se é simétrica
    int flag = 1;
        for (j=0;j<n && flag!=0 ;j++)
            for(i=0;i<n && flag!= 0;i++)
                if(A[j][i]!=T[j][i]){
                   cout<<"\nMatriz A não é simetrica!";
                   flag = 0;
                }     
    if (flag == 1)
        cout<<"\nÉ simetrica!";*/

return 0;
}