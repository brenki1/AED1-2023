#include <stdio.h>
#include <stdlib.h>

void exp1(int x, int y, int *q){

    int i;

    *q = 1;

    for(i = 1; i <= y; i++){
        *q *= x;
    }



}

int main()
{
    int expo = 0, x, y;

    printf("Insira X e Y: ");
    scanf("%d%d", &x,&y);

    exp1(x, y, &expo);

    printf("%d elevado a %d eh %d\n", x, y, expo);

    system("pause");
    return 0;
}