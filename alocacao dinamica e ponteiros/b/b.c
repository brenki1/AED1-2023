#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, *v;

    v = (int *) calloc(5, sizeof(int));

    for(i = 0; i < 5; i++){
        printf("Digite um numero para a posicao %d: ", i+1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Posicao %d: %d\n", i+1, *(v+i));
    }

    free(v);
    v = NULL;

    system("pause");

    return 0;
}