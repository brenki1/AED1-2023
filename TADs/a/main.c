#include "estringue.h"
#include <stdio.h>
#include <stdlib.h>


int main(){

    int tam, cont = 0;
    char *string;

    printf("Insira o tamanho da sua string: ");
    scanf("%d", &tam);

    setbuf(stdin, NULL);

    string = (char *) calloc(0,sizeof(char));
    fflush(stdin);
    criar(tam, string);
    setbuf(stdin, NULL);
    associa(string, tam);
    cont = tamanho(string);
    printf("O tamanho da string eh de %d caracteres!\n", cont);
    count(string, cont);
    exibe(string);

    system("pause");

    return 0;

}