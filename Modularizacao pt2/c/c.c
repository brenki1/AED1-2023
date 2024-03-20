#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void inverte(int *vetor, int n);

int main(){

    int *vet, n, i;

    printf("Insira o tamanho do seu vetor: ");
    scanf("%d", &n);

    if((vet = (int *) calloc(n,sizeof(int))) ==  NULL){
        printf("Nao foi possivel alocar memoria!\n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        printf("Insira um valor para a posicao [%d]: ", i+1);
        scanf("%d", &vet[i]);
    }

    inverte(vet, n);

    printf("O vetor apos a inversao: ");

    for(i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void inverte(int *vetor, int n){

    int i;

    for(i = 0; i < n/2; i++){
        swap(&vetor[i], &vetor[n-i-1]);
    }
}