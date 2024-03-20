#include <stdio.h>
#include <stdlib.h>
#include "listaDupla.h"

typedef struct no {
    Aluno valor;
    struct no *prox;
    struct no *ant;
}No;

typedef struct lista {
    No *inicio;
}Lista;

Lista *criar() {
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

void limpar(Lista *l) {
    while (listaVazia(l) != 0)
    removerInicio(l);
    free(l);
    l = NULL;
}

int tamanho(Lista *l) {
    if (l == NULL) return -1;
    No *no = l->inicio;
    int cont = 0;
    while (no != NULL) {
        cont++;
        no = no->prox;
    }
    return cont;
}

void mostrar(Lista *l) {
    if (l != NULL) {
        printf("[");
        No *noLista = l->inicio;
        while (noLista != NULL) {
            printf(" {%d, ",noLista->valor.mat);
            printf("%s, ",noLista->valor.nome);
            printf("%.2f} ",noLista->valor.n1);
            noLista = noLista->prox;
        }
        printf("]\n");
    }
}

int listaVazia(Lista *l) {
    if (l == NULL) return 2;
    if (l->inicio == NULL)
    return 0;
    else    
    return 1;
}
    
int listaCheia(Lista *l) {
    return 1;
}

int inserirInicio(Lista *l, Aluno it) {
    if (l == NULL) return 2;
    No *no = (No *)malloc(sizeof(No));
    no->valor = it;
    no->prox = l->inicio;
    no->ant = NULL;
    if (l->inicio != NULL)
    l->inicio->ant = no;
    l->inicio = no;
    return 0;
}

int inserirFim(Lista *l, Aluno it)
{
    if (l == NULL) return 1;
    if (listaVazia(l) == 0) return inserirInicio(l, it);

    No *n = (No*)malloc(sizeof(No));
    n->valor = it;
    n->prox = NULL;
    No *nl = l->inicio;
    do
    {
        nl = nl->prox;

    }while(nl->prox != NULL);

    nl->prox = n;
    n->ant = nl;

    return 0;
}

int inserirPosicao(Lista *l, Aluno it, int pos){
    
    int tam = 0;

    if (l == NULL) return 1;
    if ((listaVazia(l) == 0) || (pos == 0)) return inserirInicio(l, it);

    No *n = (No*)malloc(sizeof(No));
    No *nl = l->inicio;
    n->valor = it;

    tam = tamanho(l);

    if(pos >= tam){
        return inserirFim(l, it);
    }

    do{

        nl = nl->prox;
        pos--;

    }while((nl->prox != NULL)&&(pos > 1));

    nl->prox = n;
    n->ant = nl;
    n->prox = nl->prox;
    n->prox->ant = n;

    return 0;
}

int removerInicio(Lista *l) {
    if (l == NULL) return 2;
    if (listaVazia(l) == 0) return 1;

    No *noLista = l->inicio;

    l->inicio = noLista->prox;
    if (l->inicio != NULL) l->inicio->ant = NULL;

    free(noLista);
    return 0;
}

int removerFim(Lista *l) {
    if (l == NULL) return 2;
    if (listaVazia(l) == 0)
    return 1;
    No *noLista = l->inicio;
    while (noLista->prox != NULL)
    noLista = noLista->prox;
    if (noLista->ant == NULL)
    l->inicio = NULL;
    else
    noLista->ant->prox = NULL;
    free(noLista);
    return 0;
}

int removerPosicao(Lista *l, int pos) {
    if (l == NULL) return 1;
    if (listaVazia(l) == 0) return 2;
    No *n = l->inicio;
    while ((n->prox != NULL)&&(pos > 0)) {
        n = n->prox;
        pos--;
    }
    if (n->ant == NULL) return removerInicio(l);
    if (n->prox == NULL) return removerFim(l);
    n->ant->prox = n->prox;
    n->prox->ant = n->ant;
    free(n);
    return 0;
}