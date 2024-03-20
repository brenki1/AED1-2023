#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct carac{
    int repet[52];
    char repett[52];
}Caracteres;

typedef struct lista Lista;

Lista *criar();

void limpar(Lista *l);

void Histograma(Lista *l, char string[1000]);

//int inserirInicio(Lista *l, Aluno it);

int inserirFim(Lista *l, Caracteres it);

int inserirPosicao(Lista *l, Caracteres it, int pos);

//int removerInicio(Lista *l);

//int removerFim(Lista *l);

//int removerPosicao(Lista *l, int pos);

//int removerItem(Lista *l, Aluno it);

//int buscarItemChave(Lista *l, int chave, Caracteres *retorno);

//int buscarPosicao(Lista *l, int posicao, Aluno *it);

//int listaVazia(Lista *l);

//int listaCheia(Lista *l);

//int tamanho(Lista *l);

void mostrar(Lista *l);

//int contemItem(Lista *l, Aluno it);

//Lista *listaReversa(Lista *l);

//int contaItem(Lista *l, Aluno it);

#endif // LISTA_H_INCLUDED