// Manoela Fernanda - 23007000
//  Nicole Silvestrini Garrio - 23009486
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int final = 0;
    while (final != 1)
    {
        float op1, op2, resultado;
        char operacao;
        cout << "Digite um número real: ";
        cin >> op1;
        cout << "Digite o operador (+, -, *, / e %): ";
        cin >> operacao;
        cout << "Digite outro número real: ";
        cin >> op2;
        switch (operacao)
        {
        case '+':
        {
            resultado = op1 + op2;
            cout << op1 << operacao << op2 << '=' << resultado;
            break;
        }
        case '-':
        {
            resultado = op1 - op2;
            cout << op1 << operacao << op2 << '=' << resultado;
            break;
        }
        case '*':
        {
            resultado = op1 * op2;
            cout << op1 << operacao << op2 << resultado;
            break;
        }
        case '/':
        {
            if (op2 == 0)
                cout << "Erro: Divisao por zero";
            else
                resultado = op1 / op2;
            cout << op1 << operacao << op2 << "=" << resultado;
            break;
        }
        case '%':
        {
            if (op1 > (int)op1 || op2 > (int)op2)
                cout << "Erro: %, operação entre inteiros";
            else
            {
                resultado = (int)op1%(int)op2;
                cout << op1 << operacao << op2 << "=" << resultado;
                break;
            }
        }
        }
        cout<<"\nDigite 1 para sair ou 0 para continuar: ";
        cin>>final;
    }

    return 0;
}