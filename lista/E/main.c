#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main(){

    Lista *p1;
    char str[2000];

    p1 = criar();

    printf("Insira um texto de ate 2000 caracteres: ");
    setbuf(stdin, NULL);
    fgets(str, 2000, stdin);
    str[strcspn(str, "\n")] = '\0';

    Histograma(p1, str);

    system("pause");
    return 0;
}