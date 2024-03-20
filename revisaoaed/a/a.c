#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} data;

void impData(data temp);

int main()
{

    data a;

    printf("Insira o dia: ");
    scanf("%d", &a.dia);

    printf("Insira o mes: ");
    scanf("%d", &a.mes);

    printf("Insira o ano: ");
    scanf("%d", &a.ano);

    //printf("A data inserida eh: %d/%d/%d", a.dia, a.mes, a.ano);

    impData(a);

    system("pause");
    return 0;
}

void impData(data temp){

    if(temp.dia < 1){
        printf("Dia invalido!\n");
        exit(1);
    }

    if((temp.mes > 12) || (temp.mes < 1)){
        printf("Mes invalido!\n");
        exit(1);
    }

    if(((temp.mes == 1) || (temp.mes == 3) || (temp.mes == 5) || (temp.mes == 7) || (temp.mes == 8) || (temp.mes == 10) || (temp.mes == 12)) && (temp.dia > 31)){
            printf("Data invalida!\n");
            exit(1);
    }

    if(((temp.mes == 4) || (temp.mes == 6) || (temp.mes == 9) || (temp.mes == 11)) && (temp.dia > 30)){
        printf("Data invalida!\n");
        exit(1);
    }

    if((temp.mes == 2) && (temp.dia > 28)){
        printf("Data invalida!\n");
        exit(1);
    }

    printf("A data inserida eh: %d/%d/%d\n", temp.dia, temp.mes, temp.ano);

}