#include <stdio.h>
#include <stdlib.h>

void m(int v[], int *media, int *maior, int n);

int main(){

   int *vet, i, n, md, mv;
   

   printf("Insira o tamanho do vetor: ");
   scanf("%d", &n);

   vet = (int *) calloc(n,sizeof(int));

   for(i = 0; i < n; i++){
        printf("Insira o valor para a posicao %d: ", i+1);
        scanf("%d", &vet[i]);
   }

   m(&vet[0], &md, &mv, n);

   printf("A media dos valores do vetor eh: %d\nO maior valor do vetor eh: %d\n", md, mv);

   system("pause");
   return 0;
}

void m(int v[], int *media, int *maior, int n){

    int i, soma = 0;
    *maior = 0;

    for(i = 0; i < n; i++){
        soma += v[i];
    }

    *media = soma/n;

    for(i = 0; i < n; i++){
        if(v[i] > (*maior)){
            (*maior) = v[i];
        }
    }
}