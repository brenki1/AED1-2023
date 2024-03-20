#include "estringue.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void criar(int tam, char *a){
    
    a = (char *) realloc(a, tam*sizeof(char));

}

void associa(char *a, int tam){

    fflush(stdin);
    printf("Insira sua string: ");
    setbuf(stdin, NULL);
    fgets(a, tam, stdin);
    a[strcspn(a, "\n")] = '\0';
}

int tamanho(char *a){

    int i;

    for(i = 0; a[i] != '\0'; i++){
    }

    return i;
}

void count(char *a, int cont){
    
    int vet2[cont], i, j;
    char vet1[cont];
    int contUnico = 0;

    for(i = 0; a[i] != '\0'; i++){
        char caractereAtual = a[i];
        int encontrado = 0;

        for(j = 0; j < contUnico; j++){
            if(caractereAtual == vet1[j]){
                vet2[j]++;
                encontrado = 1;
                break;
            }
        }

        if(!encontrado){
            vet1[contUnico] = caractereAtual;
            vet2[contUnico] = 1;
            contUnico++;
        }
    }

    

    for(i = 0; vet1[i] != '\0'; i++){
        printf("O caractere %c aparece %d vezes!\n", vet1[i], vet2[i]);
    }
}

void exibe(char *a){

    printf("A string eh: %s\n", a);
}