#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void retVet(char texto[400], char *vet1, char *vet2);

int main(){

    char texto[400], vet1[100], vet2[100];
    int i, tam = strlen(texto);

    printf("Insira um texto com até 400 caracteres: ");
    fgets(texto, 400, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    retVet(texto, vet1, vet2);

    for(i = 0; i < tam; i++){
        printf("O caractere %c aparece %d vezes\n", vet1[i], vet2[i]);
    }


     
    system("pause");
    return 0;
}

void retVet(char texto[400], char *vet1, char *vet2){

    int i, j, tam = strlen(texto);
    int contUnico = 0;

    for(i = 0; i < tam; i++){
        char caractereAtual = texto[i];
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
}