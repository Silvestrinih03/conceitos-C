#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int arvb_elemento;
typedef struct no_arvb
{
    arvb_elemento info;
    struct no_arvb *le, *ld;
} no_arvb;
int menu()
{
    cout << "\n -------------------------------- ";
    cout << "\n ARVORE DE PESQUISA";
    cout << "\n -------------------------------- ";
    cout << "\n\n <<<ESCOLHA >>>";
    cout << "\n [0] Sair";
    cout << "\n [1] Inserir";
    cout << "\n [2] Buscar";
    cout << "\n [3] Percorrer - pre-ordem";
    cout << "\n [4] Percorrer - in-ordem";
    cout << "\n [5] Percorrer - pos-ordem";
    cout << "\n [6] Eliminar";
    int esc;
    do
    {
        cout << "\n >>> __";
        cin >> esc;
    } while (esc < 0 || esc > 9);
    return esc;
}
int buscar(no_arvb *raiz, arvb_elemento A)
{
    no_arvb *p;
    p = raiz;
    while (p != NULL)
    {
        if (p->info == A)
            return 1;
        if (A > p->info)
            p = p->ld;
        else
            p = p->le;
    }
    return 0;
}
no_arvb *novo_no_arvb()
{
    no_arvb *nv;
    nv = (no_arvb *)malloc(sizeof(no_arvb));
    if (nv == NULL)
    {
        cout << "\n Erro de alocacao!";
        exit(1);
    }
    nv->le = nv->ld = NULL;
    return nv;
}
void inserir(no_arvb **raiz, arvb_elemento a)
{
    no_arvb *novo;
    novo = novo_no_arvb();
    novo->info = a;
    if (*raiz == NULL)
    {
        *raiz = novo; /// 1o. n
        return;
    }
    no_arvb *p;
    p = *raiz;
    while (p != NULL)
    {
        if (a < p->info)       /// ligar a esquerda ou descer para o no ́ esquerdo
            if (p->le != NULL) /// existe no ́ - descer esquerda
                p = p->le;
            else
            {
                p->le = novo; /// ligar o novo no ́ no LinkEsquerdo
                return;
            }
        else                   /// a maior ou igual entao testar a direita
            if (p->ld != NULL) /// existe no ́ - descer a direita
                p = p->ld;
            else
            {
                p->ld = novo; /// ligar o novo no ́ no LinkDireito
                return;
            }
    }
}
void preordem(no_arvb *t)
{
    if (t != NULL)
    {
        cout << " " << t->info;
        preordem(t->le);
        preordem(t->ld);
    }
}
void inordem(no_arvb *t)
{
    if (t != NULL)
    {
        inordem(t->le);
        cout << " " << t->info;
        inordem(t->ld);
    }
}
void posordem(no_arvb *t)
{
    if (t != NULL)
    {
        posordem(t->le);
        posordem(t->ld);
        cout << " " << t->info;
    }
}
int eliminar(no_arvb **t, arvb_elemento a)
{
    no_arvb *p, *pai, *desc, *aux;
    p = *t;
    pai = NULL;
    while (p != NULL && p->info != a)
    {
        pai = p;
        p = (a < p->info) ? p->le : p->ld;
    }
    if (p == NULL)
        return 0; /// nao encontrou a informacao
    /// verificar se possui descendentes:0, 1 ou 2
    if (p->le == NULL)
        desc = p->ld; /// nao tem desc esquerdo--> guardar LinkDireito
    else if (p->ld == NULL)
        desc = p->le; /// n o tem desc direito--> guardar LinkEsquerdo
    else              /// tem os dois descendentes - encontrar Menor dos desc a direita
    {
        aux = p; /// deixar p e caminhar com aux para encontrar o Menor
        desc = p->ld;
        while (desc->le != NULL)
        {
            aux = desc;
            desc = desc->le;
        }
        if (aux != p)
        {
            aux->le = desc->ld;
            desc->ld = p->ld;
        }
        desc->le = p->le;
    }
    if (pai == NULL) /// eliminando o no raiz
        *t = desc;
    else if (a < pai->info) /// ligar esquerda ou direita do n pai
        pai->le = desc;
    else
        pai->ld = desc;
    free(p);
    return 1; /// sucesso
}
int conta_nos(no_arvb *t)
{
    if (t == NULL)
        return 0;
    return 1 + conta_nos(t->le) + conta_nos(t->ld);
}
int conta_folha(no_arvb *t)
{
    if (t == NULL)
        return 0;
    if (t->le == NULL && t->ld == NULL)
        return 1;
    return conta_folha(t->le) + conta_folha(t->ld);
}
int main()
{
    no_arvb *raiz = NULL;
    arvb_elemento X;
    int esc;
    while ((esc = menu()) != 0)
    {
        switch (esc)
        {
        case 0:
            cout << "\n FIM DE PROGRAMA.... ";
            return 0;
        case 1:
            cout << "\n <<< INSERIR >>>";
            cout << "\n Info: ";
            cin >> X;
            inserir(&raiz, X);
            cout << "\n Numero nos: " << conta_nos(raiz);
            cout << "\n Numero folhas: " << conta_folha(raiz);
            break;
        case 2:
            cout << "\n <<< BUSCAR >>>";
            cout << "\n Info: ";
            cin >> X;
            cout << "\n >>> " << (buscar(raiz, X) ? "Existe" : "Nao Existe") << endl;
            break;
        case 3:
            cout << "\n <<< PRE-ORDEM >>>";
            preordem(raiz);
            break;
        case 4:
            cout << "\n <<< IN-ORDEM >>>";
            inordem(raiz);
            break;
        case 5:
            cout << "\n <<< POS-ORDEM >>>";
            posordem(raiz);
            break;
        case 6:
            cout << "\n <<< ELIMINAR >>>";
            cout << "\n Info: ";
            cin >> X;
            cout << "\n >>> " << (eliminar(&raiz, X) ? "Eliminado com Sucesso" : "Nao Existe") << endl;
            break;
        } /// fim s/c
    }     /// fim while
    return 0;
}
