#include "matriz.h"
#include <stdlib.h>
#include <stdio.h>

int main(){

    float **matA = NULL, **matB = NULL;
    int i, j, menu;
    int min, max;
    char verif;

    while(1){

        printf("---- TAD MATRIZES ----\n");
        printf("1) Criar a matriz\n");
        printf("2) Destruir a matriz\n");
        printf("3) Atribuir valores a matriz\n");
        printf("4) Exibir a matriz\n");
        printf("5) Numero de linhas\n");
        printf("6) Numero de colunas\n");
        printf("7) Preencher com numeros aleatorios e determinar um max e min\n");
        printf("8) Somar as matrizes A e B\n");
        printf("9) Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case(1):
                printf("Entre com as dimensoes para as duas matrizes: ");
                scanf("%d", &i);
                scanf("%d", &j);
                
            
                matA = criar(matA, i, j);
                matB = criar(matB, i, j);
                break;

            case(2):
                printf("As duas matrizes serao destruidas e poderao ser realocadas!\n");
                destruir(matA, i, j);
                destruir(matB, i, j);
                break;
        

            case(3):
                printf("Primeiro atribua valores a matriz A: \n");
                atribui(matA, i, j);

                printf("Agora para matriz B: \n");
                atribui(matB, i, j);
                break;
        

            case(4):
                printf("Matriz A: \n");
                exibe(matA, i, j);
                printf("Matriz B: \n");
                exibe(matB, i, j);
                break;
        

            case(5):
                printf("A: ");
                nlinhas(matA, i, j);
                printf("B: ");
                nlinhas(matB, i, j);
                break;
        
        
            case(6):
                printf("A: ");
                ncolunas(matA, i, j);
                printf("B: ");
                ncolunas(matB, i, j);
                break;

        

            case(7):
                printf("Insira o num min: ");
                scanf("%d", &min);
                printf("Insira o num max: ");
                scanf("%d", &max);
                preenche(matA, i, j , max, min);
                preenche(matB, i, j, max, min);
                break;

       

            case(8):
                printf("sera somado A + B");
                soma(matA, matB, i, j);
                break;

            case(9):
                exit(1);
        }

        printf("Deseja realizar outras operacoes?(S/N)\n");
        setbuf(stdin, NULL);
        scanf("%c", &verif);

        if(verif == 'N'){
            break;
        }

    }


    system("pause");
    return 0;
}