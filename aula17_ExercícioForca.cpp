// Júlia Dias 
// Manoela Fernanda
// Nicole Silvestrini

#include <iostream>
#include <time.h>

using namespace std;

#define TAM 20

char acertos[30];
char erros[7];
char BancoAnimais [TAM][21]={
    "GATO", "GIRAFA", "PAPAGAIO", "CACHORRO", "NARVAL", 
    "ABELHA", "ELEFANTE", "FOCA", "ONITORRINCO", "LEOPARDO", 
    "HIPOPOTAMO", "TAMANDUA", "QUATI", "RATO", "DROMEDARIO",
    "SURICATO", "JAGUATIRICA", "OCAPI", "FLAMINGO", "POLVO"};
char bancoNomes[TAM][21]={
    "Anastacia", "Bianca", "Carlos", "Diego", "Eduardo",
    "Fatima", "Guilherme", "Heitor", "Igor", "Joice",
    "Monica", "Napoleao", "Augusto", "Pedro", "Rafaela",
    "Angelina", "Julia", "Manoela", "Nicole", "Marcela"};
char bancoDocinhos[TAM][21]={
    "Alfajor", "Langos", "Cajuzinho", "Churros", "Donuts", 
    "Frape", "Nutella", "Pudim", "Quindim", "Queijadinha", 
    "Rocambole", "Tiramisu", "Waffle", "Zeppole", "Torta", 
    "Goiabada", "Cupcake", "Bomba", "Beijinho", "Milkshake"};

int boas_vindas(){
    int escolha;
    int regras;
    int VeniceGuess;
    cout<<"Seja bem-vindo ao VeniceGuess "<<endl;
    cin>>VeniceGuess;
    cout<<"1.Escolha o tema:"<<endl;
    cin>>escolha;
    cout<<"2.Escolher dificuldade:"<<endl;
    cin>>dificuldade;
    cout<<"3.Definir regras de jogo "<<endl;
    cin>>regras;
    cout<<"4.Sair"<<endl;
    cin>>exit(1);
    cout<<"Escolher uma opção"<<endl;
    cin>>escolha;
    return escolha;
    }
    int main();
    int opcao;
    char tema,dificuldade,regras;
    opcao = boas_vindas();

    do mostrarmenu ();
    cin>> opcao;

    swicht(opcao) {
        case 1:
        cout<<"Escolha um tema:"<<endl;
        cin>>TEMA;
        //Faça seu tema escolhido
        break;

        case 2:
        cout<<"Escolha a dificuldade :"<<endl;
        cin>>Dificuldade;
        //faça a dificuldade escolhida
        break;
        
        case 3:
        cout<<"Regras do jogo "<<endl;
        cin>>não morrer;
        break;
        
        case 4:
        cout<<"Sair "<<endl;
        cin>>Sair;
        break;
};

void desenha_forca(int k, char Vet_eros[21], char Vet_acertos[21]){
    if(k!=0){
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
    else(k==7){
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
        cout<<Vet_acertos[21]<<endl;
        cout<<"ERROS:"<<Vet_erros[21]<<endl;}
    }

int jogada(char Palavra[], char Vet_acertos[], char Vet_erros[], int *erros, int *acertos);

void sortear_palavra(char Palavra[], char bd[][15], char Vet_acertos[]);

// int main(){
//     int k;
//     char Vet_erros[21], Vet_acertos[21];
//     int boas_vindas();
//     int desenha_forca(k, Vet_erros[21], Vet_acertos[21]);
// }