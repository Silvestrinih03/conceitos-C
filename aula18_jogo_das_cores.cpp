// Júlia Dias 23975279
// Manoela Fernanda 23007000
// Nicole Silvestrini 23009486

#include <iostream>
#include <iomanip>
#include <windows.h>
# include <time.h>
#include "stack.h"

using namespace std;

#define TAM 6 //Qnt de tubos
typedef int stack_element;
typedef struct {
    int num_elementos;
    Stack pilha;
}tubo;

//      PRIMEIRA
//função que inicia as pilhas como vazias  ----------> OK
void iniciar_vazias(tubo T[]){
    for(int i=0; i<TAM; i++){
    initStack(T[i].pilha);
    T[i].num_elementos=0;
    }
}

//      SEGUNDA
//função que distribui aleatoriamente os numeros nas pilhas  ----------> OK
// deixando a ulima vaizia
void distribuir(tubo T[]){
    int freq[TAM] = {0};
    srand(time(0));
    for (int i=0; i<TAM-1; i++) {
        for (int j=0; j<TAM-1; j++) {
            int num;
            do {
                num=rand()%TAM+1;
            } while (freq[num-1]>=TAM-1);
            freq[num-1]++;
            push(T[j].pilha, num);
        }
    }
}

//      TERCEIRA
//função para mudar a cor do que será impresso ----------> OK
void mudacor(int cor){
/*
0 - Preto           8 - Cinza
1 - Azul            9 - Azul claro
2 - Verde           A - Verde claro
3 - Verde-Água      B - Verde Água claro
4 - Vermelho        C - Vermelho claro
5 - Roxo            D - Lilas
6 - Amarelo         E - Amarelo claro
7 - Branco          F - Branco brilhante
*/
HANDLE Saida;
Saida = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(Saida, cor);
}

//      QUARTA
//função para imprimir o simbolo colorido, usa a mudacor() ----------> OK
void printa_cor(int I){
    int cor[5]={9, 13, 2, 15, 6};
    mudacor(cor[I-1]);
    cout<<"O";
    mudacor(15);
}

//      QUINTA
//função que imprime o conteudo das pilhas, usa aux que recebem os valores ----------> OK
//desenpilhados e depois retornam para as originais 
void mostrar(tubo T[]){
    Stack aux[TAM];
    for(int i=0; i<TAM; i++){
        initStack(aux[i]);
        cout<<"Tubo "<<i+1<<": ";
        //while para armazenar na aux
        while (!isEmpty(T[i].pilha)){
            stack_element valor=pop(T[i].pilha);
            printa_cor(valor);
            cout<<" ";
            push(aux[i], valor); 
        }
        cout<<endl;
        //vai retornar os elementos para a pilha original
        while(!isEmpty(aux[i])) {
            stack_element valor=pop(aux[i]);
            push(T[i].pilha, valor);
        }
    }
    cout<<endl;
}


//      SEXTA
// função que valida se as cores de origem e destino podem ser executadas ----------> OK
int validar(tubo T[], int origem, int destino){
    if(isEmpty(T[origem].pilha)){
    cout<<"Erro: Tubo de origem vazio."<<endl;
    return 0;
    }
    else if(T[destino].num_elementos>=TAM-1){
        cout<<"Erro: Tubo de destino cheio."<<endl;
        return 0; //n
    }
    else
        return 1; //para ser válido
}
    /* --------- OUTRA OPÇÃO PARA A SEXTA FUNÇÃO*/

    // int validar(tubo T[], int origem, int destino){
    //     if(origem<0 || origem>=TAM || T[origem].num_elementos==0) {
    //         cout<<"Erro: Origem inválida";
    //         return 0; 
    //     }
    //     else if (destino<0 || destino>=TAM || T[destino].num_elementos!=TAM-1) {
    //         cout<<"Erro: Destino inválido";
    //         return 0; 
    //     }
    // return 1; 
    // }

//      SÉTIMA
//função que verifica se as pilhas são iguais e se tem os elementos TAM-1   ----------> OK
//RETORNAR 1 SE AINDA NÃO ACABOU O JOGO
//RETORNAR 0 SE JA ACERTOU TUDO
int validar_fim(tubo T[]){
    for (int i = 0; i < TAM; i++) {
        if (T[i].num_elementos != TAM - 1) {
            return 1; // Ainda não acabou o jogo
        }
    }
    return 0; // Jogo acabou
}

//      OITAVA
//função que executa a jogada ----------> OK
int jogada(tubo T[]) {
    int origem, destino, val;
    char bolinha;
    do {
        cout << "Origem (ou -1 para sair): ";
        cin >> origem;
        if (origem == -1) return 0;

        cout << "Destino (ou -1 para sair): ";
        cin >> destino;
        if (destino == -1) return 0;
    } while (validar(T, origem, destino) != 1);

    bolinha = pop(T[origem - 1].pilha);
    push(T[destino - 1].pilha, bolinha);
    mostrar(T);

    return validar_fim(T);
}

// Main  ----------> OK
int main() {
    tubo T[TAM];
    int repetir = 1, retorno;

    do {
        iniciar_vazias(T);
        distribuir(T);
        mostrar(T);

        do {
            retorno = jogada(T);
        } while (retorno != 0);

        if (retorno == -1) {
            // cout << "Fim de jogo!" << endl;
            break;
        } else {
            cout << "\n P A R Á B E N S ! ! ! !";
            cout << "\n Jogar novamente? 1(sim) ou 0(não): ";
            cin >> repetir;
        }
    } while (repetir == 1);

    cout << "Fim de jogo!" << endl;

    return 0;
}