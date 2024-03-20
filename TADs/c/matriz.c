#include "matriz.h"
#include <stdlib.h>
#include <stdio.h>

float ** criar(float **mat, int i, int j){

  int k;
  
  if((mat = (float **) calloc(i,sizeof(float *))) == NULL) {
    printf("Nao foi possivel alocar memoria!\n");
    exit(1);
  }

  for(k = 0; k < i; k++) {
    if((mat[k] = (float *) calloc(j,sizeof(float))) == NULL) {
      printf("Nao foi possivel alocar memoria!\n");
      exit(1);
    }
   }

   printf("foi criada uma matriz de dimensoes %dx%d!\n", i, j);

   return mat;
}

void destruir(float **mat, int i, int j){
    
    int k;

    for(k = 0; k < i; k++) {
        free(mat[k]);
    }

    free(mat);
    mat = NULL;
}

void atribui(float **mat, int i, int j){

    int l, c;

    for(l = 0; l < i; l++){
        for(c = 0; c < j; c++){
            printf("insira um valor para a posicao [%d][%d]: ", (l+1), (c+1));
            scanf("%f", &mat[l][c]);
        }
    }
}

void exibe(float **mat, int i, int j){

    int l, c;

    for(l = 0; l < i; l++){
        for(c = 0; c < j; c++){
            printf("[%f] ", mat[l][c]);
            
        }
        printf("\n");
    }
}

void nlinhas(float **mat, int i, int j){

    int l, c;

    for(l = 0; l < i; l++){
        for(c = 0; c < j; c++){
        }
    }

    printf("A sua matriz tem %d linhas!\n", l);

}

void ncolunas(float **mat, int i, int j){

    int l, c;

    for(l = 0; l < i; l++){
        for(c = 0; c < j; c++){
        }
    }

    printf("A sua matriz tem %d linhas!\n", c);

}

void preenche(float **mat, int i, int j, int max, int min){

    int l, c;

    for(l = 0; l < i; l++){
        for(c = 0; c < j; c++){
            mat[l][c] = min + (rand() % max);
        }
    }

}

void soma(float **mat1, float **mat2, int i, int j){

    int l, c;

    for(l = 0; l < i; l++){
        for(c = 0; c < j; c++){
            mat1[l][c] = mat1[l][c] + mat2[l][c];
        }
    }
}