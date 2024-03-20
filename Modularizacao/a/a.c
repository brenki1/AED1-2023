#include <stdio.h>
#include <stdlib.h>

void soma(int n, int *soma){

    int i;

    for(i = 1; i <= n; i++){
        *soma += i;
    }
}

int main()
{
    int som = 0, n;

    printf("insira um numero inteiro positivo: ");
    scanf("%d", &n);

    soma(n, &som);

    printf("A soma de 1 ate %d eh %d\n", n, som);

    system("pause");
    return 0;

}