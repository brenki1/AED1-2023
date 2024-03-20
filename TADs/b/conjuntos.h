#ifndef MINHAS_FUNCOES_H
#define MINHAS_FUNCOES_H

int criar(int *conj, int tam);

void elementos(int *conj, int tam);

void insere(int *conj, int tam);

void remove1(int *conj, int tam);

void uniao(int *conjA, int *conjB, int tamA, int tamB);

void interseccao(int *conjA, int *conjB, int tamA, int tamB);

void diferenca(int *conjA, int *conjB, int tamA, int tamB);

#endif