#include <stdlib.h>
#include <stdio.h>
#include "conjuntos.h"

int main(){

    int *conjA, *conjB, tamA, tamB;

    printf("Insira o tamanho para o conjunto A: ");
    scanf("%d", &tamA);
    printf("Insira o tamanho do conjunto B: ");
    scanf("%d", &tamB);

    conjA = (int *) calloc(0,sizeof(int));
    conjB = (int *) calloc(0,sizeof(int));

    int opcao = -1;

    int opA = -1, opB = -1;
    
    printf("deseja modificar qual conjunto? (0 para A, 1 para B): ");
    scanf("%d", &opcao);

    if(opcao == 0){
        criar(conjA, tamA);
        insere(conjA, tamA);
        
        while(opA == -1){
            printf("Deseja remover algum elemento do conjunto A?, se nao, insira qualquer numero diferente de -1: ");
            scanf("%d", &opA);

            if(opA != -1){
                break;
            }

            remove1(conjA, tamA);

            opA = 1;
        }

    }

    if(opcao == 1){
        criar(conjB, tamB);
        insere(conjB, tamB);
        
        while(opB == -1){
            printf("Deseja remover algum elemento do conjunto B?, se nao, insira qualquer numero diferente de -1: ");
            scanf("%d", &opB);

            if(opB != -1){
                break;
            }

            remove1(conjB, tamB);

            opB = 1;
        }

    }

    printf("Agora modifique o conjunto B: \n");
    
    criar(conjB, tamB);
    insere(conjB, tamB);
        
        while(opB == -1){
            printf("Deseja remover algum elemento do conjunto B?, se nao, insira qualquer numero diferente de -1: ");
            scanf("%d", &opB);

            if(opB != -1){
                break;
            }

            remove1(conjB, tamB);

            opB = 1;
        }


    int operacoes;
    char verif;


    while(1){
        printf("----- OPERACOES COM CONJUNTOS -----\n");

        printf("Insira qual operacao deseja realizar: \n");
        printf("1) Uniao de A e B\n");
        printf("2) Interseccao de A e B\n");
        printf("3) Diferenca entre A e B\n");
        printf("4) Exibir conjunto A\n");
        printf("5) Exibir conjunto B\n");
        scanf("%d", &operacoes);

    switch(operacoes){
        case(1):
            uniao(conjA, conjB, tamA, tamB);
            break;

        case(2):
            interseccao(conjA, conjB, tamA, tamB);
            break;

        case(3):
            diferenca(conjA, conjB, tamA, tamB);
            break;

        case(4):
            elementos(conjA, tamA);
            break;
            
        case(5):
            elementos(conjB, tamB);
            break;

        default:
            printf("Opcao invalida!\n");
        
    }
        setbuf(stdin, NULL);
        printf("Deseja realizar outras operacoes? (S/N): ");
        scanf("%c", &verif);

        if(verif == 'N'){
            break;
        }


    }

    system("pause");
    return 0;
}