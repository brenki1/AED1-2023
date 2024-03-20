#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int subst(char *str, int n, char m);

int main(){

    char *p, c;
    int n, cont = 0;

    printf("Insira o tamanho da sua string: ");
    scanf("%d", &n);
    setbuf(stdin, NULL);

    if((p = (char *) calloc((n+1),sizeof(char))) == NULL){
        printf("Nao foi possivel alocar!\n");
        exit(1);
    }

    printf("Insira o conteudo da string: ");
    fgets(p, 100, stdin);

    setbuf(stdin, NULL);

    printf("Insira o caractere que deseja substituir: ");
    scanf("%c", &c);

    setbuf(stdin, NULL);

    cont = subst(p, 100, c);

    printf("Foram realizadas %d substituiçoes\nA string apos as subst. : %s", cont, p);

    system("pause");
    return 0;
}

int subst(char *str, int n, char m){

    int i, cont=0;
     
    for(i = 0; i < n; i++){
        if(str[i] == m){
            str[i] = '*';
            cont++;
        }
    }

    return cont;
}