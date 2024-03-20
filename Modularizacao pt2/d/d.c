#include <stdio.h>
#include <stdlib.h>

void escalar(int *vet, int es, int n);

int main(){
    
    int *vetor, n, i, es;

    printf("Insira a quantidade de posicoes para o vetor: ");
    scanf("%d", &n);

    if((vetor = (int *) calloc(n,sizeof(int))) ==  NULL){
        printf("Nao foi possivel alocar memoria!\n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        printf("Insira um valor para a posicao [%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Insira o escalar que multiplicara o vetor: ");
    scanf("%d", &es);

    printf("O vetor antes da multiplicacao: ");

    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    escalar(vetor, es, n);

    printf("O vetor apos a multiplicacao: ");

    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    system("pause");
    return 0;
}

void escalar(int *vet, int es, int n){

    int j;

    for(j = 0; j < n; j++){
        vet[j] *= es; 
    }
}

