#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int cpf[11];
    char est_civil[20];
    int num_filhos;
} cliente;

int main(){

    cliente *c;
    int i, m, n;
    char r;

    printf("Insira a quantidade de vetores de clientes que deseja criar: ");
    scanf("%d", &n);

    c = (cliente*) calloc(n,sizeof(cliente));

retornar:
    do{
        printf("Insira uma opcao:  \n");
        printf("1) Inserir os dados do cliente\n");
        printf("2) Remover o cliente do cadastro\n");
        printf("3) Exibir o CPF dos clientes ja cadastrados\n");
        printf("4) Sair\n");
        scanf("%d", &m);
        if((m < 1) || (m > 4)){
            printf("Opcao invalida, digite novamente!\n");
        }
    }while((m < 1) || (m > 4));

    fflush(stdin);


    if(m == 1){

        for(i = 0; i < n; i++){
        printf("Insira o cliente %d: ", i+1);
        fgets((c+i)->nome, sizeof((c+i)->nome), stdin);
        (c+i)->nome[strcspn((c+i)->nome, "\n")] = '\0';
        fflush(stdin);

        printf("Insira seu cpf (apenas numeros): ");
        scanf("%d", &(c+i)->cpf[i]);
        fflush(stdin);


        printf("Estado civil (casado ou solteiro): ");
        fgets((c+i)->est_civil, sizeof((c+i)->est_civil), stdin);
        (c+i)->est_civil[strcspn((c+i)->est_civil, "\n")] = '\0';
        fflush(stdin);

        printf("Numero de filhos, caso tenha: ");
        scanf("%d", &(c+i)->num_filhos);
        fflush(stdin);

        }
        goto retornar;
    }

    

    fflush(stdin);


    if(m == 2){
        
        for(i = 0; i < n; i++){
            printf("Deseja remover o cliente %d? (S/N)", i+1);
            scanf("%c", &r);
            fflush(stdin);

            if(r == 'S'){
                free((c+i)->nome);
                free((c+i)->est_civil);
                free((c+i)->cpf);
                free((c+i)->num_filhos);
            }
        }
        goto retornar;
    }

    fflush(stdin);


    if(m == 3){
        
        for(i = 0; i < n; i++){
            printf("Dados do cliente %d: \n ", i+1);
            printf("Nome: %s\n", (c+i)->nome);
            printf("CPF: %d\n", *((c+i)->cpf));
            printf("Estado civil: %s\n", (c+i)->est_civil);
            printf("Filhos: %d\n", (c+i)->num_filhos);
        }
        goto retornar;
    }

    system("pause");
    return 0;
}