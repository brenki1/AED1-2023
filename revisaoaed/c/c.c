#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
  int i, j, m, n, **mat, cont = 0, *vet, k;

  printf("Entre com as dimensoes da matriz: ");
  scanf("%d%d", &m, &n);
  
  if((mat = (int **) calloc(m,sizeof(int *))) == NULL) {
    printf("Nao foi possivel alocar memoria!\n");
    exit(1);
  }
  for(i = 0; i < m; i++) {
    if((mat[i] = (int *) calloc(n,sizeof(int))) == NULL) {
      printf("Nao foi possivel alocar memoria!\n");
      exit(1);
    }
   }
   
   for(i = 0; i < m; i++){
       for(j = 0; j < n; j++){
           printf("Insira um valor para a posicao [%d][%d]: ", i+1, j+1);
           scanf("%d", &mat[i][j]);
           cont++;
       }
   }
    
    vet = (int *) calloc(cont,sizeof(int));
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < cont; k++){
                vet[k] = mat[i][j];
            }
        }
    }
    
    printf("O vetor resultante eh: ");
    
    for(i = 0; i < cont; i++){
        printf("%d ", vet[i]);
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}