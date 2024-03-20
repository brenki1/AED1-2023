#include <stdio.h>
#include <stdlib.h>
#include "listaInteiros.h"

int main()
{
    Lista *l;
    int it;

    l = criar();

    //inserirInicio(l, 2);
    //inserirFim(l, 3);

    it = somaElementos(l);
    printf("A soma dos elementos eh %i", it);

    system("pause");
    return 0;
}