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
