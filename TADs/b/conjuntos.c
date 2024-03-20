#include "conjuntos.h"
#include <stdio.h>
#include <stdlib.h>

int criar(int *conj, int tam){

    conj = (int *) calloc(tam,sizeof(int));
    printf("Foi criado um conjunto com espaco para %d elementos!\n", tam);
    return conj;
}

void elementos(int *conj, int tam){

    int i;
    
    printf("[ ");

    for(i = 0; i < tam; i++){
        
        printf("%d ", conj[i]);
    }

    printf("]");
    printf("\n");

}

void insere(int *conj, int tam){

    int i;

    for(i = 0; i < tam; i++){
        printf("Insira um valor para a posicao %d: ", i+1);
        scanf("%d", &conj[i]);
    }
}

void remove1(int *conj, int tam){

    int i, j, remov = 0;
    int aux[tam];
    
        

        for(i = 0; i < tam; i++){
            
            for(j = 0; j < tam; j++){

                printf("voce deseja remover o elemento %d da posicao [%d]? (0/1)", conj[i], i+1);
                scanf("%d", &remov);
                
                if(remov == 1){
                    conj[i] = conj[j+1];
                    tam = tam - 1;
                    
                }
                conj = (int *) realloc(conj, tam*sizeof(int));
                  
                remov = 0;
                
            }
        }
}

void uniao(int *conjA, int *conjB, int tamA, int tamB){

    int i, j, k;
    printf("A uniao entre A e B eh: \n");
    for(i = 0; i < tamA; i++){
        for(j = 0; j < tamB; j++){
            if(conjA[i] == conjB[j]){
                printf("%d ", conjA[i]);
            } else if(conjB[j] != conjA[i]){
                printf("%d ", conjB[j]);
            }
       }
    }
 
    printf("\n");

    
}

void interseccao(int *conjA, int *conjB, int tamA, int tamB){

    int i, j;

    printf("A interseccao entre A e B eh: ");

    for(i = 0; i < tamA; i++){
        for(j = 0; j < tamB; j++){
            if(conjA[i] == conjB[j]){
                printf("%d ", conjA[i]);
            }
        }
    }

    printf("\n");
}

void diferenca(int *conjA, int *conjB, int tamA, int tamB){

    int i, j, k;

    for(i = 0; i < tamA; i++){
        for(j = 0; j < tamB; j++){
            while(conjA[i]==conjB[j]){
                for(k = i; k < tamA; k++){
                    conjA[i] = conjA[k+1];
                }
            }

        }
    }
    
    printf("A diferenca entre A e B eh: \n");
    printf("[ ");

    for(i = 0; i < tamA; i++){
        printf("%d ", conjA[i]);
    }
    printf("]");
    printf("\n");

}