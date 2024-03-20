#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    int **m1, **m2, **m3, i, j;

    srand(time(NULL));

    if((m1 = (int **) calloc(3, sizeof(int))) == NULL){
        printf("Nao foi possivel alocar memoria\n");
        exit(1);
    }
    for(i = 0; i < 3; i++){
        if((m1[i] = (int *) calloc(3, sizeof(int))) == NULL){
            printf("Nao foi possivel alocar memoria\n");
            exit(1);
        }
    }

    if((m2 = (int **) calloc(3, sizeof(int))) == NULL){
        printf("Nao foi possivel alocar memoria\n");
        exit(1);
    }
    for(i = 0; i < 3; i++){
        if((m2[i] = (int *) calloc(3, sizeof(int))) == NULL){
            printf("Nao foi possivel alocar memoria\n");
            exit(1);
        }
    }

    if((m3 = (int **) calloc(3, sizeof(int))) == NULL){
        printf("Nao foi possivel alocar memoria\n");
        exit(1);
    }
    for(i = 0; i < 3; i++){
        if((m3[i] = (int *) calloc(3, sizeof(int))) == NULL){
            printf("Nao foi possivel alocar memoria\n");
            exit(1);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            m1[i][j] = (rand() % 1000);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            m2[i][j] = (rand() % 1000);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("Primeira matriz\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("Segunda matriz\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    printf("Terceira matriz\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }

    system("pause");

    return 0;
}