#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *v, i, cont = 0;

    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &n);

    v = (int *) calloc(n, sizeof(int));

    for(i = 0; i < n; i++){
        printf("Entre com o valor para a posicao %d: ", i+1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n; i++){
        if((*(v+i) % 2) != 0){
            *(v+i) = 0;
        }
    }
    
    for(i = 0; i < n; i++){
        if(*(v+i) != 0){
            cont++;
        }
    }

    v = (int *) realloc(v, cont);

    printf("O vetor sem numeros impares: ");

    for(i = 0; i < cont; i++){
        printf("%d ", *(v+i));
    }

    system("pause");

    return 0;
}