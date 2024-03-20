#ifndef LISTAINTEIROS_H_INCLUDED
#define LISTAINTEIROS_H_INCLUDED

typedef struct no* Lista;

Lista *criar();

void limpar(Lista *l);

int inserirInicio(Lista *l, int it);
int inserirFim(Lista *l, int it);
int inserirPosicao(Lista *l, int it, int pos);

int removerInicio(Lista *l);
int removerFim(Lista *l);
int removerPosicao(Lista *l, int pos);
int removerItem(Lista *l, int it);

int buscarItemChave(Lista *l, int chave, int *retorno);
int buscarPosicao(Lista *l, int posicao, int *it);

int listaVazia(Lista *l);
int listaCheia(Lista *l);

int tamanho(Lista *l);

int mostrarUltimo(Lista *l, int *it);
int somaElementos(Lista *l);

#endif // LISTAINTEIROS_H_INCLUDED