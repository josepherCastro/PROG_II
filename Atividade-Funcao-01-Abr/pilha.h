#ifndef _PILHA_  			 
#define _PILHA_
#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *prox; 
} No;

typedef struct Pilha {
    No *topo;
    int posicao; 
} Pilha;

Pilha *pilha;

int PUSH(int dado){
	if(pilha->posicao<5){
		No *aux;
		aux = (No *) malloc(sizeof(No));
		aux->valor = dado;
		aux->prox = NULL;
		pilha->topo = aux;
		pilha->posicao++;
		
		return dado;
	}else{
		return -1;
	}
}
int POP(){
	No *q; int v;
	if (VAZIA(pilha)) {
		printf("Lista vazia\n"); 
		return 0;
	}
	q = pilha->topo;
	pilha->topo = q->prox;	
	v = q->valor;
	free(q);
	pilha->posicao--;
	return v;

}
void VIEW_LIFO(No *no){
	// Pilha *p;
	// for (p = no->prox; p !=NULL; p = p->topo){
	// 	printf("%i\n",p->topo->valor);
	// }
}
void INICIAR_PILHA(){
	pilha->topo = NULL;
	pilha->posicao = 0;

}
int VAZIA(Pilha *pilha){
	return (pilha->topo == NULL);
}
#endif 
