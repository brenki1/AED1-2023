#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha *p;
    p = criar();
    
    int a;
    
    printf("Pilha criada com sucesso\n");
    
    printf("Apos a operacao de push(11)\n");
    push(p, 11);
    mostrar(p);
    
    printf("Apos a operacao de push(34)\n");
    push(p, 34);
    mostrar(p);
    
    printf("Apos a operacao de pop\n");
    pop(p, &a);
    mostrar(p);
    
    printf("Apos a operacao de pop\n");
    pop(p, &a);
    mostrar(p);
    
    printf("Apos a operacao de push(23)\n");
    push(p, 23);
    mostrar(p);
    
    printf("Apos a operacao de push(45)\n");
    push(p, 45);
    mostrar(p);
    
    printf("Apos a operacao de pop\n");
    pop(p, &a);
    mostrar(p);
    
    printf("Apos a operacao de push(121)\n");
    push(p, 121);
    mostrar(p);
    
    printf("Apos a operacao de push(22)\n");
    push(p, 22);
    mostrar(p);
    
    printf("Apos a operacao de pop\n");
    pop(p, &a);
    mostrar(p);
    
    printf("Apos a operacao de pop\n");
    pop(p, &a);
    mostrar(p);

    system("pause");
    return 0;
}