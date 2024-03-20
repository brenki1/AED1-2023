#include <stdio.h>
#include <stdlib.h>

int exp1(int x, int n){

    int i;
    int a = 1;

    for(i = 1; i <= n; i++){
        a *= x;
    }

    return a;
}

int fat(int x){

    if(x == 0)
    {
        return 1;
    }

    return x*fat(x -  1);
}

int main()
{
    int i, x, n;
    double taylor;

    printf("Insira x: ");
    scanf("%d", &x);

    printf("Insira n: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++){
    
        taylor = 1 + x + (exp1(x, 2)/fat(2)) + (exp1(x,i)/fat(i));     
    }   

    printf("A funcao exp. aproximada pela serie de Taylor eh: %lf", taylor);

   system("pause");
   return 0;
}