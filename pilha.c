#include "pilha.h"

//Criacao da pilha dinamica
PILHA *cria_pilha(){
    PILHA *p;
    p = (PILHA*) malloc (sizeof(PILHA));
    if(p == NULL){
        printf("Erro na criacao da Pilha\n");
        return NULL;
    }

    p->topo =-1;
    p->prox = NULL;

    return p;
}

//////////////////////////////////////////////////////
//Pilha vazia
int pilha_vazia(PILHA *p){
    if(p->topo == -1){
        return 1;//considerado que a pilha esta vazia
    }
    else{
        return 0;
    }
}

//////////////////////////////////////////////////////
//Insercao
/*A pilha*/
PILHA *push(PILHA *p, ELEMENTO info){
    if(p->topo == -1){

        p->topo++;
        p->info = info;

        return p ;
    }
    else{
        PILHA *aux;
        aux = (PILHA*) malloc (sizeof(PILHA));
        if(aux == NULL){
            printf("Erro na Insercao da Pilha\n");
            return NULL;
        }
        
        aux->topo =  p->topo + 1;
        aux->info = info;
        aux->prox = p;

        return aux;
    }      
}

//////////////////////////////////////////////////////
//Remocao
PILHA *pop(PILHA *p){
    if(pilha_vazia(p) == 1){
        return NULL; //erro
    }
    
    PILHA *aux;
    aux = (PILHA*) malloc (sizeof(PILHA));
    if(aux == NULL){
        printf("Erro na Remocao da Pilha\n");
        return NULL;
    }
         
    aux = p->prox;
    free(p);

    printf("Removeu\n");

    return aux;
}


//////////////////////////////////////////////////////
//Impressao
void imprime_pilha(PILHA *p){
    PILHA *aux = p;

    while(aux != NULL){
        printf("%d %c\n",aux->topo,aux->info);
        aux = aux->prox;
    }
}
//////////////////////////////////////////////////////
//Destruicao
void Destruicao(PILHA *p){
        free(p);
        printf("Pilha destruida\n");
}
