// Guilherme Dallari 23012904
// Júlia Dias 23975279
// Nicole Silvestrini Garrio 23009486

// Foi necessário realizar algumas alterações no código para conseguirmos finalizar a frequência
// As alterações realizadas na parte 1 estão indicadas no código por comentários

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char gab[10] = {'b', 'c', 'd', 'c', 'b', 'a', 'a', 'b', 'd', 'c'}, nome[30], resposta[10];
    int RA, n, i, j, frequencia[11] = {0}, aprovados = 0, total = 0, maior = 0;
    float media = 0, porcentagem = 0, soma = 0;
    
    do {
        // Alteração realizada para zerar as notas que foram somadas anteriormente
        int nota = 0;
        
        cout << "\n\nDigite seu RA: ";
        cin >> RA;
        // Alteração para corrigir o cin.ignore();
        cin.ignore();
        cout << "Digite seu nome: ";
        // Alteração para corrigir o cin.getline();
        cin.getline(nome, 30);
        
        for (i = 1; i <= 10; i++) {
            cout << "Digite a questão " << i << ": ";
            cin >> resposta[i];
            // Alteração realizada para corrigir a soma das notas
            if (gab[i] == resposta[i]) {
                nota += 1;
            }
        }
        
        frequencia[nota]++;
        
        cout << "RA: " << RA << "\nNome: " << nome << "\nNota: " << nota;
        
        if (nota > 5) {
            aprovados += 1;
        }
        
        total += 1;
        soma += nota;
        
        if (nota > maior) {
            maior = nota;
        }
    } while (RA != 9999);
    
    cout << "\n\nRelatório final";
    cout << "\nPorcentagem de aprovação: " << (aprovados * 100) / total;
    cout << "\nNota com MAIOR frequência absoluta: " << maior;
    cout << "\nMédia: " << soma / total;
    
    return 0;
}