#include <stdio.h>
#include <stdlib.h>
#include "listaDupla.h"
#include <string.h>

int main(){
    
    Aluno a;
    
    Lista *p;
    p = criar();
    
    int op = 0;
do{
    printf("--- MENU DE ALUNOS ---\n");
    printf("1) CADASTRAR ALUNO\n");
    printf("2) REMOVER ALUNO\n");
    printf("3) MOSTRAR ALUNOS\n");
    printf("4) ALUNO COM MAIOR NOTA\n");
    printf("5) REMOVER TODOS OS ALUNOS\n");
    printf("6) SAIR\n");
    scanf("%d", &op);
}while((op < 1) || (op > 6));

    switch(op){
        
        case 1:
            printf("Insira a matricula, nome e nota, respectivamente.\n");
            scanf("%d", &a.mat);
            setbuf(stdin, NULL);
            fgets(a.nome, 30, stdin);
            a.nome[strcspn(a.nome, "\n")] = '\0';
            setbuf(stdin, NULL);
            scanf("%f", &a.n1);
            inserirFim(p, a);
            mostrar(p);
            break;
        case 2:    

    }
    
    //system("pause");

    return 0;
}