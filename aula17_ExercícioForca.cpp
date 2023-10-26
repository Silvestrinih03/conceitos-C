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
    cout<<"\n\nSeja bem-vindo ao VeniceGuess";
    cout<<"\n1 - Iniciar";
    cout<<"\n2 - Regras do jogo";
    cout<<"\n3 - Sair do jogo";
    cout<<"\nDigite sua escolha: "; cin>>escolha;
    return escolha;}

void desenha_forca(int k, char Vet_erros[7], char Vet_acertos[21]){
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
    else {
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
        cout<<"ERROS: "<<Vet_erros<<endl;
        cout<<"Acertos:"<<Vet_acertos<<endl;}
}

int jogada(char Palavra[], char Vet_acertos[], char Vet_erros[], int *erros, int *acertos){
    char letra;
    bool letraRepetida = false;
    do{
        letraRepetida = false;
        cout<<"LETRA: "; cin>>letra; letra = toupper(letra);
        for (int j = 0; j < strlen(Vet_acertos); j++) {
            if (letra == Vet_acertos[j]) {
                cout<<"Essa letra já foi inserida! Digite novamente: ";
                letraRepetida = true;
                break;
            }
        }
        if (!letraRepetida) {
            for (int e = 0; e < strlen(Vet_erros); e++) {
                if (letra == Vet_erros[e]) {
                    cout << "Essa letra já foi inserida! Digite novamente: ";
                    letraRepetida = true;
                    break;
                }
            }
        }
    }while (!isalpha(letra) || letraRepetida);

    bool letraEncontrada = false;

    for (int i = 0; i < strlen(Palavra); i++) {
        if (letra == Palavra[i]) {
            Vet_acertos[i] = letra;
            (*acertos)++;
            letraEncontrada = true;
        }
    }
    if (!letraEncontrada) {
        Vet_erros[*erros] = letra;
        (*erros)++;
    }

    return letraEncontrada;
}

void sortear_palavra(char Palavra[], char bd[][21], char Vet_acertos[]) {
    int indice = rand() % TAM;
    strcpy(Palavra, bd[indice]);
    
    for (int i = 0; i < strlen(Palavra); i++) {
        Vet_acertos[i] = '_';
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
    "ALFAJOR", "LANGOS", "CAJUZINHO", "CHURROS", "DONUTS", 
    "FRAPE", "NUTELLA", "PUDIM", "QUIMDIM", "QUEIJADINHA", 
    "ROCAMBOLE", "TIRAMISU", "WAFFLE", "ZEPPOLE", "TORTA", 
    "GOIABADA", "CUPCAKE", "BOMBA", "BEIJINHO", "MILKSHAKE"};

    int esc, tema=0, dificuldade=0, k=0;
    char Palavra[21], Vet_erros[7], Vet_acertos[21];

    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(nullptr))); 

    while (esc!=3){
        // Limpa os vetores Vet_acertos e Vet_erros
        memset(Vet_acertos, 0, sizeof(Vet_acertos));
        memset(Vet_erros, 0, sizeof(Vet_erros));
        int ganhou=0, perdeu=0, erros=0, acertos=0, k=0;
        esc = boas_vindas();
        switch(esc){
            case 1:
                cout<<"\nTema 1: Animais"<<endl;
                cout<<"Tema 2: Doces"<<endl;
                cout<<"Escolha o tema: "; cin>>tema;
                // cout<<"Dificuldade 1: De 4 a 6 Letras"<<endl;
                // cout<<"Dificuldade 2: De 7 a 21 Letras"<<endl;
                // cout<<"Escolha a dificuldade: "; cin>>dificuldade;
                if (tema==1){
                    sortear_palavra(Palavra, bancoAnimais, Vet_acertos);
                    // cout<<"P Sorteada: "<<Palavra<<endl<<endl;
                }
                else {
                    sortear_palavra(Palavra, bancoDocinhos, Vet_acertos);
                    // cout<<"P Sorteada: "<<Palavra<<endl<<endl;
                }
                while (ganhou<strlen(Palavra) && erros<7){
                        desenha_forca(k,Vet_erros, Vet_acertos);
                        jogada(Palavra, Vet_acertos, Vet_erros, &erros, &acertos);
                        k=erros;
                        perdeu=erros;
                        ganhou=acertos;
                    }
                    if (ganhou==strlen(Palavra)){
                        cout<<"\nVoce venceu!"<<endl;
                        cout<<"Palavra: "<<Vet_acertos;
                    }
                    else if(perdeu==7){
                        k=7;
                        desenha_forca(k,Vet_erros, Vet_acertos);
                    }
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
                break;
            case 3: exit(1);
        }
    }
    return 0;
};