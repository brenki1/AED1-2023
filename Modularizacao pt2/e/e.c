#include <stdio.h>
#include <stdlib.h>

int *alocaVet(int *y, int *n);

int main(){

    int *vetor, n, y, i;

    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &n);

    printf("Insira o numero para preencher o vetor: ");
    scanf("%d", &y);

    vetor = (int *) calloc(n,sizeof(int));

    vetor = alocaVet(&y, &n);

    if(vetor == NULL){
        printf("Nao foi possivel alocar memoria!\n");
        exit(1);
    }

    printf("O vetor apos alocado: ");   

    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}

int *alocaVet(int *y, int *n){

    int i, *vet, temp, temp2;

    temp = *y;
    temp2 = *n;

    vet = (int *) calloc((*n),sizeof(int));

    for(i = 0; i < temp2; i++){
        *(vet+i) = temp;
    }
    
    return vet;   
}