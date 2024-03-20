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
    inserirFim(p, it);
    inserirFim(p, it);
    inserirFim(p, it);
    it.mat = 22222;
    it.n1 = 11;
    inserirFim(p, it);
    it.mat = 32222;
    it.n1 = 10;
    inserirFim(p, it);
    inserirFim(p, it);
    inserirFim(p, it);
    inserirFim(p, it);
    mostrar(p);

    Lista *p1; 
    p1 = criar();

    Aluno it1;

    it1.mat = 999999;
    it1.n1 = 10;
    setbuf(stdin,NULL);
    fgets(it1.nome, 30, stdin);
    it1.nome[strcspn(it1.nome, "\n")] = '\0';
    

    inserirInicio(p1, it1);
    inserirFim(p1, it1);
    inserirFim(p1, it1);
    inserirFim(p1, it1);
    mostrar(p1);

    Lista *intersec;
    intersec = criar();

    intersec = intersecaoListas(p, p1);

    mostrar(intersec);


    system("pause");
    return 0;
}