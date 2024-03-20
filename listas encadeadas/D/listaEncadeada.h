#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED

#define MAX 100

typedef struct aluno{
    int mat;
    char nome[30];
    float n1;
}Aluno;

typedef struct lista Lista;

Lista *criar();

void limpar(Lista *l);

int inserirInicio(Lista *l,Aluno it);
int inserirFim(Lista *l,Aluno it);
int inserirPosicao(Lista *l,Aluno it,int pos);

int removerInicio(Lista *l);
int removerFim(Lista *l);
int removerPosicao(Lista *l,int pos);
int removerItem(Lista *l,Aluno it);

int buscarItemChave(Lista *l,int chave,Aluno *retorno);
int buscarPosicao(Lista *l,int posicao,Aluno *it);

int listaVazia(Lista *l);
int listaCheia(Lista *l);

int tamanho(Lista *l);

Lista* concatena(Lista *l1, Lista *l2);

int contemItem(Lista *l, Aluno it);

void mostrar(Lista *l);

void maiorAluno(Lista *l);

int buscarNotaChave(Lista *l, float chave, Aluno *retorno);

int removeNos(Lista *l, int n);



#endif // LISTAENCADEADA_H_INCLUDED