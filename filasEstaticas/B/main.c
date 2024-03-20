#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main(){

    Fila *f1;
    Fila *f2;
    Fila *intc;

    f1 = criar(); f2 = criar(); intc = criar();

    printf("--- FUNCAO DE INTERCALAR LISTAS ---\n");
    printf("A primeira fila sera composta por: 1, 2, 3, 4, 5, 6\n");
    printf("A segunda fila sera composta por: 6, 5, 4, 3, 2, 1\n");

    inserir(f1, 1);
    inserir(f1, 2);
    inserir(f1, 3);
    inserir(f1, 4);
    inserir(f1, 5);
    inserir(f1, 6);

    printf("Fila 1 apos insercao: \n");
    mostrar(f1);

    inserir(f2, 6);
    inserir(f2, 5);
    inserir(f2, 4);
    inserir(f2, 3);
    inserir(f2, 2);
    inserir(f2, 1);

    printf("Fila 2 apos insercao: \n");
    mostrar(f2);

    intc = intercala(f1,f2);

    printf("Apos serem intercaladas: \n");
    mostrar(intc);

    system("pause");
    return 0;

}