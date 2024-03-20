#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int i, j, lotomania[50], usuario[50], *acertos = NULL, cont = 0;

    for(i = 0; i < 50; i++){
        printf("Insira o numero %d (sem repetir): ", i+1);
        scanf("%d", &usuario[i]);

    }

    for(i = 0; i < 50; i++){
        lotomania[i] = (rand() % 100);

    }

    for(i = 0; i < 50; i++){
        for(j = 0; j < 50; j++){
            if(usuario[i] == lotomania[j]){
                cont++;
                acertos = (int *) realloc(acertos, (cont+1)*sizeof(int));
                acertos[cont] = lotomania[j];

            }
        }
    }
    
    printf("Os numeros sorteados foram: ");

    for(i = 0; i < 50; i++){
        printf("%d ", lotomania[i]);
    }
    
    printf("\n");
   
    printf("Foram %d acertos, sendo eles: ", cont);

    for(i = 1; i < cont; i++){
        printf("%d ", acertos[i]);
    }

    printf("\n");

    printf("A porcentagem de acertos foi: %f%%\n", ((cont/50.0)*100));

    system("pause");
    return 0;
}