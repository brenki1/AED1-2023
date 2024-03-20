#include <stdlib.h>
#include <stdio.h>
#include "Fila.h"

int main(){


    Fila *f;

    f = criar();
    printf("A fila foi criada com sucesso!\n");

    inserir(f, -1);
    inserir(f, -2);
    inserir(f, -3);
    inserir(f, 4);
    inserir(f, 5);
    inserir(f, 6);
    printf("Antes da remocao de negativos: ");
    mostrar(f);

    printf("\n");

    printf("Apos a remocao: ");
    removeNegativos(f);
    mostrar(f);

    system("pause");
    return 0;
}