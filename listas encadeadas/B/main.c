#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaEncadeada.h"

int main()
{
    Lista *p;
    p = criar();

    Aluno it;

    int pos = 2;

    it.mat = 999999;
    it.n1 = 10;
    setbuf(stdin,NULL);
    fgets(it.nome, 30, stdin);
    it.nome[strcspn(it.nome, "\n")] = '\0';

    inserirInicio(p, it);
    inserirFim(p, it);
    inserirFim(p, it);
    inserirFim(p, it);
    inserirFim(p, it);
    mostrar(p);
    removerPosicao(p, pos);
    mostrar(p);

    system("pause");

    return 0;
}