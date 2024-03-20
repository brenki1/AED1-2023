#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct lista{
    int total;
    Aluno valores[MAX];
}Lista;

Lista *criar(){
    Lista *l = (Lista *)malloc(sizeof(Lista));
    if (l != NULL) l->total = 0;
    return l;
}

void limpar(Lista *l){
    if(l != NULL) l->total = 0;
}

int inserirInicio(Lista *l, Aluno it){
    int i;
    if(l == NULL) return 2;
    if(listaCheia(l) == 0) return 1;

    for(i = l->total; i > 0; i--){
        l->valores[i] = l->valores[i-1];
    }
    l->valores[0] = it;
    l->total++;
    return 0;
}

int inserirFim(Lista *l, Aluno it){
    if (l == NULL) return 2;
    if(listaCheia(l) == 0) return 1;
    l->valores[l->total] = it;
    l->total++;
    return 0;
}

int buscarItemChave(Lista *l, int chave, Aluno *retorno){
    int i;
    if (l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;

    for(i = 0; i < l->total; i++){
        if(l->valores[i].mat == chave){
            *retorno = l->valores[i];
            return 0;
        }
    }
    return -1;
}

int listaVazia(Lista *l){
    if(l == NULL) return 2;
    if (l->total == 0) return 0;
    else return 1;
}

int removerInicio(Lista *l){
    int i;
    if(l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;

    for(i = 0; i < l->total-1; i++){
        l->valores[i] = l->valores[i+1];
    }
    l->total--;
    return 0;
}

int removerFim(Lista *l){
    if(l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;
    l->total--;
    return 0;
}

int listaCheia(Lista *l){
    if(l == NULL) return 2;
    if(l->total == MAX) return 0;
    else return 1;
}

void mostrar(Lista *l){
    int i;
    if(l == NULL){
        printf("[");
        for(i = 0; i < l->total; i++){
            printf("{%d, ", l->valores[i].mat);
            printf("%s, ", l->valores[i].nome);
            printf("%.2f} ", l->valores[i].n1);
        }
        printf("\n");
    }
}

int inserirPosicao(Lista *l, Aluno it, int pos){
    int i, j;
    if(l == NULL) return 2;

    l->total++;
    
    for(i = pos; i < l->total; i++){
        for(j = pos; j < l->total; j++){
            l->valores[i] = l->valores[j+1];
    
        }
    }

    l->valores[pos] = it;

    return 1;
}

int removerPosicao(Lista *l, int pos){
    int i, j;
    if(l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;

    for(i = pos; i < l->total; i++){
        for(j = pos; j < l->total; j++){
            l->valores[i] = l->valores[j+1];
        }
    }

    return 0;
}

int removerItem(Lista *l, Aluno it){
    int i, j;
    if(l == NULL) return 1;
    if(listaVazia(l) == 0) return 2;

    for(i = 0; i < l->total; i++){
        for(j = 0; j < l->total; j++){
            if(l->valores[i].mat == it.mat){
                l->valores[i] = l->valores[j+1];
            }
        }
    }

    for(i = 0; i < l->total; i++){
        for(j = 0; j < l->total; j++){
            if(l->valores[i].nome == it.nome){
                l->valores[i] = l->valores[j+1];
            }
        }
    }

    for(i = 0; i < l->total; i++){
        for(j = 0; j < l->total; j++){
            if(l->valores[i].n1 == it.n1){
                l->valores[i] = l->valores[j+1];
            }
        }
    }

    return 0;
}

int buscarPosicao(Lista *l, int pos, Aluno *it){
    if(l == NULL) return 1;
    if(listaVazia(l) == 0) return 2;
    if(pos > l->total) return 3;

    (*it) = l->valores[pos];

    return 0;
}

int contemItem(Lista *l, Aluno it){
    int i;
    if (l == NULL) return 2;
    if(listaVazia(l) == 0) return 3;

    for(i = 0; i < l->total; i++){
        if((l->valores[i].mat == it.mat) && (l->valores[i].nome == it.nome) && (l->valores[i].n1 == it.n1)){
            return 0;
        }
    }
    return 1;
}

Lista *listaReversa(Lista *l){
    int i, j;
    Lista *rev = (Lista *)malloc(sizeof(Lista));

    rev->total = l->total;
        
    for(i = l->total; i <= 0; i--){
        for(j = 0; i < rev->total; j++){
            rev->valores[j] = l->valores[i];
        }
    }

    return rev;
}

int contaItem(Lista *l, Aluno it){
    int i, cont = 0;
    if (l == NULL) return 2;
    if(listaVazia(l) == 0) return 3;

    for(i = 0; i < l->total; i++){
        if((l->valores[i].mat == it.mat) && (l->valores[i].nome == it.nome) && (l->valores[i].n1 == it.n1)){
            cont++;
        }
    }

    return cont;
}