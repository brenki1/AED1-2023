#include <stdio.h>
#include <stdlib.h>

int divisao(int x, int y, float *resto, float *quociente);

int main(){
    
    int a, b, check;
    float res, quo;

    printf("Insira A: ");
    scanf("%d", &a);
    fflush(stdin);

    printf("Insira B: ");
    scanf("%d", &b);


    check = divisao(a, b, &res, &quo);

    if(check == -1){
        printf("Nao foi possivel realizar as operacoes!");

    } else if(check == 0){
        printf("O quociente da divisao entre A e B eh: %f\nE o resto eh: %f\n", quo, res);
    }

    system("pause");
    return 0;
}

int divisao(int x, int y, float *resto, float *quociente){

    if(y == 0){
        return -1;
    }
    
    *resto = x % y;
    *quociente = x/y;

    return 0;

}