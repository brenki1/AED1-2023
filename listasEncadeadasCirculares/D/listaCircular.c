#include <stdio.h>
#include <stdlib.h>
#include "listaCircular.h"

typedef struct no{
    Aluno valor;
    struct no *prox;
}No;

typedef struct lista{
    No *inicio;
}ListaCircular;

Lista *criar(){
    Lista *l = (Lista *) malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

void limpar(Lista *l){
    while(listaVazia(l) != 0){
        removerInicio(l);
    }

}

int tamanho(Lista *l){
    if(l == NULL) return -1;
    if(listaVazia(l) == 0) return 0;
    No *noLista = l->inicio;
    int cont = 0;
    do{
        cont++;
        noLista = noLista->prox;
    } while(noLista != l->inicio);
    return cont;
}

void mostrar(Lista *l){
    if(l != NULL){
        printf("[");
        if(listaVazia(l) != 0){
            No *noLista = l->inicio;
            do {
                printf(" {%d, ", noLista->valor.mat);
                printf("%s, ", noLista->valor.nome);
                printf("%.2f} ", noLista->valor.n1);
                noLista = noLista->prox;
            } while(noLista != l->inicio);
        }
        printf("]\n");
    }
}

int inserirInicio(Lista *l, Aluno it){
    if(l == NULL) return 2;
    No *no = (No *)malloc(sizeof(No));
    no->valor = it;
    if(listaVazia(l) == 0){
        l->inicio = no;
        no->prox = no;
    } else {
        No *temp = l->inicio;
        while(temp->prox != l->inicio){
            temp = temp->prox;
        }
        temp->prox = no;
        no->prox = l->inicio;
        l->inicio = no;
    }
    return 0;
}

int listaVazia(Lista *l){
    if(l == NULL) return 2;
    if(l->inicio == NULL) 
        return 0;
    else{
        return 1;
    }
       
}

int listaCheia(Lista *l){
    return 1;
}

int inserirFim(Lista *l, Aluno it){
    if(l == NULL) return 2;
    No *no = (No *)malloc(sizeof(No));
    no->valor = it;
    if(listaVazia(l) == 0){
        l->inicio = no;
        no->prox = no;
    } else{
        No *temp = l->inicio;
        while(temp->prox != l->inicio){
            temp = temp->prox;
        }
        temp->prox = no;
        no->prox = l->inicio;
    }

    return 0;
}

int removerInicio(Lista *l){
    if(l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;
    if(l->inicio->prox == l->inicio){
        free(l->inicio);
        l->inicio == NULL;
        return 0;
    }
    No *no = l->inicio;
    while(no->prox != l->inicio){
        no = no->prox;
    }
    No *temp = l->inicio;
    no->prox = temp->prox;
    l->inicio = temp->prox;
    free(temp);
    return 0;
}

int removerFim(Lista *l){
    if (l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;
    if(l->inicio->prox == l->inicio){
        free(l->inicio);
        l->inicio = NULL;
        return 0;
    }
    No *anterior = NULL, *no = l->inicio;
    while(no->prox != l->inicio){
        anterior = no;
        no = no->prox;
    }
    anterior->prox = no->prox;
    free(no);
    return 0;
}

int removerPosicao(Lista *l, int pos) {
    if(l == NULL) return 2;
    if(listaVazia(l) == 0) return 1;
    if(l->inicio->prox == l->inicio) {
        free(l->inicio);
        l->inicio = NULL;
        return 0;
    }
    No *anterior = NULL, *no = l->inicio;
    while((no->prox != l->inicio) && (pos > 0)){
        anterior = no;
        no = no->prox;
        pos--;
    }
    anterior->prox = no->prox;
    free(no);
    return 0;
}

int buscarItem(Lista *l, int chave, Aluno *it){
    if (l == NULL) return 2;
    if (listaVazia(l) == 0) return 1;
    No *no = l->inicio;
    while((no->prox != l->inicio) && ((no->valor).mat != chave)){
        no = no->prox;
    }

    if((no->valor).mat != chave){
        return 1;

    } else {
        *it = no->valor;
        return 0;
    }
}

int removeCentral(Lista *l){
    int tam;
    int pos;

    tam = tamanho(l);
    pos = tam/2;

    removerPosicao(l, pos);

    return 1;
}


int removerItem(Lista *l, int chave){
    if (l == NULL) return 2;
    if (listaVazia(l) == 0) return -1;
    No *no = l->inicio;
    int pos = 0;

    while((no->prox != l->inicio) && ((no->valor).mat != chave)){
        no = no->prox;
        pos++;
    }

    if((no->valor).mat != chave){
        return 1;
    } else {
        removerPosicao(l, pos);
        return 0;
    }
}

Lista *intersecaoListas(Lista *l1, Lista *l2){
    
    Lista *l3;

    l3 = criar();

    if ((l1 == NULL)||(l2 == NULL)) return 2;
    if ((listaVazia(l1) == 0) || (listaVazia(l2) == 0)) return 1;

    No *no1 = l1->inicio;
    No *no2 = l2->inicio;
    No *no3 = l3->inicio;

    while((no1->prox != l1->inicio) && (no2->prox != l2->inicio) && (no3->prox != l3->inicio)){
        no1 = no1->prox;
        no2 = no2->prox;
        if(no1 == no2){
            inserirInicio(l3, no1->valor);
            no3 = no3->prox;
        }
    }

    return l3;
}