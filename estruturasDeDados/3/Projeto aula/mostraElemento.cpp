#include "tipos.h"
void mostraElemento(TFila *p)
{
	TElemento *aux;
	aux = p->inicio;
	
	while(aux != NULL){
		printf("\nValor na fila :%d",aux->valor);
		aux = aux->proximo;
	}
	getch();
}
