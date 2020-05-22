#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char ELEMENTO;

typedef struct pilha{
    int topo;
    ELEMENTO info;
    struct pilha *prox;
}PILHA;

PILHA *cria_pilha();
PILHA *push(PILHA *p, ELEMENTO info);
PILHA *pop(PILHA *p);
void imprime_pilha(PILHA *p);
void Destruicao(PILHA *p);