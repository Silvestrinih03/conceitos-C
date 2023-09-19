#include <iostream>
#include <iomanip>
using namespace std;

// Exercício 01
/*struct produto{
    int cod, qntd_pedida;
    char desc[20];
    float preco;
};

int main() {
    produto prod;
    cout<<"Entrada de dados do pedido: "<<endl;
    cout<<"Código: "; cin>>prod.cod;
    cin.ignore();
    cout<<"Descrição: "; cin.getline(prod.desc, 20);
    cout<<"Preço: "; cin>>prod.preco;
    cout<<"Quantidade pedida: "; cin>>prod.qntd_pedida;

    cout<<"Pedido"<<endl;
    cout<<"Código :"<<prod.cod<<endl;
    cout<<"Descrição :"<<prod.desc<<endl;
    cout<<"Preço :"<<prod.preco<<endl;
    cout<<"Quantidade pedida:"<<prod.qntd_pedida<<endl;
    cout<<"Total :"<<prod.preco*prod.qntd_pedida;

    return 0;
}*/


// Exercício 02
struct endereco{
    char rua[20], complemento[20], cep[10], cidade[20], UF[3];
    int numero;
};

struct funcionario{
    int codigo, num_dependentes;
    char nome[30], dependente[6][30];
    endereco end;
    float salario;
};

int main(){
    funcionario func;
    cout<<"Código funcionário: "; cin>>func.codigo;
    cin.ignore();
    cout<<"Nome funcionário: "; cin.getline(func.nome, 30);
    cout<<"Endereço: "<<endl;
    cout<<"Rua e número: "; cin.getline(func.end.rua, 20)>>func.end.numero;
    cin.ignore();
    cout<<"Complemento: "; cin.getline(func.end.complemento, 20);
    cout<<"CEP: "; cin.getline(func.end.cep, 10);
    cout<<"Cidade: "; cin.getline(func.end.cidade, 20);
    cout<<"UF: "; cin.getline(func.end.UF, 3);
    cout<<"Salário: "; cin>>func.salario;
    cout<<"Número de dependentes: "; cin>>func.num_dependentes;
    cin.ignore();
    for (int i=0; i<func.num_dependentes; i++){
        cout<<"Dependente "<<i+1<<": ";
        cin.getline(func.dependente[i],20);
    }

    return 0;
}