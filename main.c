//Autor: Marcelo Augusto dos Reis
//Projeto: Pilha dinamica
//Linguagem: C

#include <stdlib.h>
#include <stdio.h>

//Biblioteca da pilha
#include "pilha.h"

int main(){
    PILHA *p;
    ELEMENTO info;

    //Para criar a pilha
    p = cria_pilha();

    //insercao da pilha
    info = 'a';
    p = push(p, info);

    info = 'b';
    p = push(p, info);

    info = 'c';
    p = push(p, info);

    info = 'd';
    p = push(p, info);

    imprime_pilha(p);

    //Remocao da pilha
    p = pop(p);

    p = pop(p);

    imprime_pilha(p);

    Destruicao(p);

    return 0;
}