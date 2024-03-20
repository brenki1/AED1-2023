#include <stdio.h>
#include <stdlib.h>
#include "listaCircular.h"

typedef struct no{
    Aluno valor;
    struct no *prox;
}No;

typedef struct lista{
    No *fim;
}ListaCircular;

Lista *criar(){
    Lista *l = (Lista *) malloc(sizeof(Lista));
    l->fim = NULL;
    return l;
}

int tamanho(Lista *l){
    if(l == NULL) return -1;
    if(listaVazia(l) == 0) return 0;
    No *noLista = l->fim;
    int cont = 0;
    do{
        cont++;
        noLista = noLista->prox;
    } while(noLista != l->fim);
    return cont;
}

void mostrar(Lista *l){
    if(l != NULL){
        printf("[");
        if(listaVazia(l) != 0){
            No *noLista = l->fim;
            do {
                printf(" {%d, ", noLista->valor.mat);
                printf("%s, ", noLista->valor.nome);
                printf("%.2f} ", noLista->valor.n1);
                noLista = noLista->prox;
            } while(noLista != l->fim);
        }
        printf("]\n");
    }
}

int inserirInicio(Lista *l, Aluno it){
    if(l == NULL) return 2;
    No *no = (No *)malloc(sizeof(No));
    no->valor = it;
    if(listaVazia(l) == 0){
        l->fim = no;
        no->prox = no;
    } else {
        no->prox = l->fim->prox;
        l->fim->prox = no;
    }
    return 0;
}

int removerPosicao(Lista *l, int pos){return 1;}