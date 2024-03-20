#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main(){

    int removido;
    Fila *f;

    f = criar();
    printf("A fila foi criada com sucesso!\n");
    printf("Apos a operacao de I(10):\n");
    inserir(f, 10);
    mostrar(f);

    printf("Apos a operacao de I(20):\n");
    inserir(f, 20);
    mostrar(f);

    printf("Apos a operacao de R:\n");
    remover(f, &removido);
    mostrar(f);

    printf("Apos a operacao de I(30):\n");
    inserir(f, 30);
    mostrar(f);

    printf("Apos a operacao de I(45):\n");
    inserir(f, 45);
    mostrar(f);

    printf("Apos a operacao de I(21):\n");
    inserir(f, 21);
    mostrar(f);

    printf("Apos a operacao de R:\n");
    remover(f, &removido);
    mostrar(f);

    printf("Apos a operacao de R:\n");
    remover(f, &removido);
    mostrar(f);

    system("pause");
    return 0;
}