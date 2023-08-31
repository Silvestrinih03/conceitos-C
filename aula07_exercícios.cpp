#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // Exercício 09
    int n, i, j;
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
        for (j=0;j<n and flag!=0 ;j++)
            for(i=0;i<n and flag!= 0;i++)
                if(A[j][i]!=T[j][i]){
                   cout<<"\nMatriz A não é simetrica!";
                   flag = 0;
                }     
    if (flag == 1)
        cout<<"\nÉ simetrica!";

return 0;
}