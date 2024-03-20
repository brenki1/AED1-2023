#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));

    int i;
    char nome[12] = {"Carla Faria"}, *p;
    double x[10];

    p = &nome[0];

    for(i = 0; *(p+i) != '\0'; i++){
        printf("%c", *(p+i));
    }
    printf("\n");

    for(i = 0; i < 10; i++){
        x[i] = rand();
        printf("%lf ", x[i]);
    }
    printf("\n");

    system("pause");

    return 0;
}