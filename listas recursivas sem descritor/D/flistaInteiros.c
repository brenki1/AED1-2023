#include <stdio.h>
#include "listaInteiros.h"
#include <stdlib.h>

typedef struct no {
    int n;
    struct no *prox;
}No;



Lista *criar() {
    Lista *l = (Lista*)malloc(sizeof(Lista));
    *l = NULL;
    return l;
}

int mostrarUltimo(Lista *l, int *it){
    if(l == NULL) return 2;

    No *n = (*l);
    if(n->prox == NULL){
        *it = n->n;
        return 0;
    }
    else return mostrarUltimo(&(n->prox), it);
}

int somaElementos(Lista *l){
    if(l == NULL) return 0;
    No *no = (*l);
    return no->n + somaElementos(&(no->prox));
}

void mostrarReversa(Lista *l){
    if(l != NULL){
        if(listaVazia(l) != 0){
            No *no = (*l);
            mostrarReversa(&(no->prox));
            printf("%d ", no->n);
       }
    }
}

int incrementar(Lista *l){
    No *n1 = (*l);
    n1->n++;
    if(n1->n == 2){
        n1->n = 0;
        if(n1->prox == NULL){
            return inserirFim(l, 1);
        } else return incrementar(&(n1->prox));
    }
}