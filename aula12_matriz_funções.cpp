// Júlia Dias 23975279
// Manoela Fernanda 23007000
// Nicole Silvestrini 23009486
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>

using namespace std;

int cabecalho(int continua){
    cout<<"\nBem vindo Cia Aerea ALP"<<endl;
    cout<<"-----------------------------------\n"<<endl;
    cout<<"1 - Nova reserva\n0- Sair\nEscolha (1 ou 0): ";
    cin>>continua;
    return continua;
}

int escolhe_voo(int escolha_voo){
    cout<<"\nBem vindo Cia Aerea ALP"<<endl;
    cout<<"-----------------------------------\n"<<endl;
    cout<<"Escolha seu voo:"<<endl;
    cout<<" 1- Voo: 1234 DE: Campinas PARA: Salvador"<<endl;
    cout<<" 2- Voo: 3434 DE: Brasilia PARA: Curitiba"<<endl;
    cout<<" 3- Voo: 6521 DE: Porto Alegre PARA: Recife"<<endl;
    cout<<"Escolha <1, 2 ou 3>: "; cin>>escolha_voo;
    return escolha_voo;
}

void imprime_mapa(int mapa[][27]){
    char letra[4]={'A', 'B', 'C', 'D'};
    for (int i=0; i<4; i++){
        cout<<"\n"<<letra[i];
        for (int j=0; j<27; j++)
            cout<<setw(4)<<mapa[i][j];
    }
}

void escolhe_assento(int mapa[][27], char*letra, int*fileira){
    imprime_mapa(mapa);
    //SO PODE LETRAS DE A B C D
    do {
        cout<<"Digite uma letra entre A e D: ";
        cin>>*letra;
        }
    while (*letra<'A' || *letra>'D');

    //SO PODE DE 1 A 27
    do {
        cout<<"Digite um numero para busca: ";
        cin>>*fileira;
        }
    while (*fileira<1 || *fileira>27);

}

void imprime_bilhete(int voo, char letra, int fileira){
    char nome[31];
    cout<<"Digite seu nome:  "; cin.ignore(); cin.getline(nome, 31);
    int escolha=escolhe_voo();
    cout<<"DADOS DO VOO:";
    cout<<"\n\nNome do Titular da Passagem:   "<<nome;
    cout<<"\nDestino do seu voo:  "<<escolha;
    cout<<"\nAssento escolhido: "<<letra<<fileira;
}

int main(){
    int cont, esc_voo, mapa[3][27], letra, fileira, voo;
    cabecalho(cont);
    escolhe_voo(esc_voo);
    return 0;
    escolhe_assento(int mapa, char &letra, int &fileira);
    imprime_bilhete(int voo, char letra, int fileira);
    // abrir swith case para escolher o mapa correto
}

