// Júlia Dias 
// Manoela Fernanda
// Nicole Silvestrini

#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;

#define TAM 20

int boas_vindas(){
    int escolha;
    cout<<"Seja bem-vindo ao VeniceGuess";
    cout<<"\n1 - Iniciar";
    cout<<"\n2 - Regras do jogo";
    cout<<"\nDigite sua opção: "; cin>>escolha;
    return escolha;}

void desenha_forca(int k, char Vet_erros[20], char Vet_acertos[20]){
    if(k==0){
        cout<<"----------------------|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"--------"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
    else if(k==1){
        cout<<"----------------------|"<<endl;
        cout<<"|                   _____"<<endl;
        cout<<"|                  |     |"<<endl;
        cout<<"|                  |_____|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"--------"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
    else if(k==2){
        cout<<"----------------------|"<<endl;
        cout<<"|                   _____"<<endl;
        cout<<"|                  |     |"<<endl;
        cout<<"|                  |_____|"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"--------"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
    else if(k==3){
        cout<<"----------------------|"<<endl;
        cout<<"|                   _____"<<endl;
        cout<<"|                  |     |"<<endl;
        cout<<"|                  |_____|"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                 ----|"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"--------"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
    else if(k==4){
        cout<<"----------------------|"<<endl;
        cout<<"|                   _____"<<endl;
        cout<<"|                  |     |"<<endl;
        cout<<"|                  |_____|"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                 ----|----"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"|"<<endl;
        cout<<"--------"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
    else if(k==5){
        cout<<"----------------------|"<<endl;
        cout<<"|                   _____"<<endl;
        cout<<"|                  |     |"<<endl;
        cout<<"|                  |_____|"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                 ----|----"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                    /"<<endl;
        cout<<"|                   /"<<endl;
        cout<<"|                  /"<<endl;
        cout<<"|"<<endl;
        cout<<"--------"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
    else if(k==6){
        cout<<"----------------------|"<<endl;
        cout<<"|                   _____"<<endl;
        cout<<"|                  |     |"<<endl;
        cout<<"|                  |_____|"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                 ----|----"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                    / \\"<<endl;
        cout<<"|                   /   \\"<<endl;
        cout<<"|                  /     \\"<<endl;
        cout<<"|"<<endl;
        cout<<"--------"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
    else{
        cout<<"----------------------|"<<endl;
        cout<<"|                   _____"<<endl;
        cout<<"|                  | X X |"<<endl;
        cout<<"|                  |__O__|"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                 ----|----"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                     |"<<endl;
        cout<<"|                    / \\"<<endl;
        cout<<"|                   /   \\"<<endl;
        cout<<"|                  /     \\"<<endl;
        cout<<"|"<<endl;
        cout<<"--------         VOCE MORREU!"<<endl;
        cout<<"ERROS: "<<Vet_erros[21]<<endl;
        cout<<Vet_acertos[21]<<endl;}
}

int jogada(char Palavra[], char Vet_acertos[], char Vet_erros[], int *erros, int *acertos){
    char letra = 'n';
    while (letra!='W' || letra!='w')
    {
        do{
            cout<<"Letra: "; cin>>letra;
            for (int j=0;j<strlen(Vet_acertos); j++)
                if (letra==Vet_acertos[j])
                    cout<<"Essa letra já foi inserida! Digite novamente: ";cin>>letra;
            for (int e=0; e<strlen(Vet_erros); e++)
                if (letra==Vet_erros[e])
                    cout<<"Essa letra já foi inserida! Digite novamente: ";cin>>letra;
            for (int i = 0; i<strlen(Palavra);i++){
                if (letra==Palavra[i]){
                    Vet_acertos[*acertos]=letra;
                    *acertos++;
                }
                else{
                    Vet_erros[*erros] = letra;
                    *erros++; 
                }  
            }
        } while (!isalpha(letra));
    }
}

void sortear_palavra(char Palavra[], char bd[][15], char Vet_acertos[]){
    int indice = rand() % (sizeof(bd) / sizeof(bd[0]));
    strcpy(Palavra, bd[indice]);
    for (int i = 0; i < strlen(Palavra); i++) {
        Vet_acertos[i] = '-';
    }
    Vet_acertos[strlen(Palavra)] = '\0';
}

int main(){
    // dar a possibilidade de interromper a qualquer momento o jogo – por exemplo digitando ‘*’ no lugar de uma letra; FAZER
    char bancoAnimais [TAM][21]={
    "GATO", "GIRAFA", "PAPAGAIO", "CACHORRO", "NARVAL", 
    "ABELHA", "ELEFANTE", "FOCA", "ONITORRINCO", "LEOPARDO", 
    "HIPOPOTAMO", "TAMANDUA", "QUATI", "RATO", "DROMEDARIO",
    "SURICATO", "JAGUATIRICA", "OCAPI", "FLAMINGO", "POLVO"};
char bancoDocinhos[TAM][21]={
    "Alfajor", "Langos", "Cajuzinho", "Churros", "Donuts", 
    "Frape", "Nutella", "Pudim", "Quindim", "Queijadinha", 
    "Rocambole", "Tiramisu", "Waffle", "Zeppole", "Torta", 
    "Goiabada", "Cupcake", "Bomba", "Beijinho", "Milkshake"};
    int esc, tema, dificuldade, erro, acerto;
    char Palavra[15];
    char acertos[30];
    char erros[7];
    esc = boas_vindas();
    switch(esc){
        case 1:
            cout<<"Tema 1: Animais"<<endl;
            cout<<"Tema 2: Doces"<<endl;
            cout<<"Escolha o tema: "; cin>>tema;
            cout<<"Dificuldade 1: De 4 a 6 Letras"<<endl;
            cout<<"Dificuldade 2: De 7 a 21 Letras"<<endl;
            cout<<"Escolha a dificuldade: "; cin>>dificuldade;
            if (tema==1 && dificuldade==1)
                sortear_palavra(Palavra, bancoAnimais, acertos)
            break;
        case 2:
            cout<<"*********************************************"<<endl;
            cout<<"Objetivo:"<<endl;
            cout<<"Descobrir a palavra oculta antes de completar o desenho do enforcado.\n\n";
            cout<<"Como Jogar:\n";
            cout<<"O jogador escolhe categoria de animais ou doces e tenta adivinhar a palavra, sugerindo letras uma de cada vez.\n";
            cout<<"Se a letra estiver na palavra, aparecerão as posições corretas. Se não estiver, desenha uma parte do corpo do enforcado no quadro (cabeça, tronco, braços, pernas, etc.).\n";
            cout<<"O jogo continua até que o jogador descubra a palavra ou o desenho do enforcado esteja completo.\n\n";
            cout<<"Dicas Adicionais:\n";
            cout<<"Palavras repetidas não são permitidas na mesma rodada.\n";
            cout<<'Você pode interromper o jogo a qualquer momento digitando "W".\n';
            cout<<"Divirtam-se jogando o VeniceGuess com os temas de animais e doces!\n";
            cout<<"********************************************";
    }
};