#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculaHexagono(float l, float *area, float *perimetro);

int main(){
    

    float lado, a, p;

    printf("Insira o lado de um hexagono regular: ");
    scanf("%f", &lado);

    calculaHexagono(lado, &a, &p);

    printf("A area desse hexagono eh: %fu\nE o perimetro eh: %fu\n", a, p);

    system("pause");
    return 0;
}

void calculaHexagono(float l, float *area, float *perimetro){

    *area = 6*((pow(l,2)*sqrt(3))/4);
    *perimetro = 6*l;
}
