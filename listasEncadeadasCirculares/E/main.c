#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaCircular.h"

int main(){

    Lista *p;
    p = criar();

    Aluno it;

    it.mat = 999999;
    it.n1 = 10;
    setbuf(stdin,NULL);
    fgets(it.nome, 30, stdin);
    it.nome[strcspn(it.nome, "\n")] = '\0';

    inserirInicio(p, it);
    inserirFim2(p, it);
    inserirFim2(p, it);
    inserirFim2(p, it);
    mostrar(p);
    it.mat = 22222;
    it.n1 = 11;
    inserirFim2(p, it);
    it.mat = 32222;
    it.n1 = 10;
    inserirFim2(p, it);
    inserirFim2(p, it);
    inserirFim2(p, it);
    inserirFim2(p, it);
    mostrar(p);

    system("pause");
    return 0;
}