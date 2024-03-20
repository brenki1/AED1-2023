#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet = NULL, n = 0,i, j, cont = 0, verifNum = 0, opcao = 0;
    char verif;

    //vet = (int *) calloc(n, sizeof(int));
    
do{

    do{
        
        
            vet = (int *) realloc(vet, (n+1)*sizeof(int));
            printf("Digite um numero para ser inserido no vetor (-1 encerra a leitura): ");
            scanf("%d", &vet[n]);
            verifNum = vet[n];
            n++;
        
        
        
    }while(verifNum != -1);

    for(i = 0; i < (n-1); i++){
        while(vet[i] == vet[i+1]){
            for(j = i; j < n; j++){
                vet[j] = vet[j+1];
            }
            n--;
        }
    }
    

    vet = (int *) realloc(vet, (n)*sizeof(int));

    printf("O vetor atualizado eh: ");

    for(i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    
    printf("\n");

    setbuf(stdin, NULL);
    
    printf("Voce deseja inserir mais numeros no vetor? (S/N) ");
    scanf("%c", &verif);
    
    setbuf(stdin, NULL);

    if(verif == 'S'){
        opcao = 0;
    } else if(verif == 'N'){
        opcao = 1;
        free(vet);
    }
    
    setbuf(stdin, NULL);
    
}while(opcao == 0);

    system("pause");
    return 0;
}