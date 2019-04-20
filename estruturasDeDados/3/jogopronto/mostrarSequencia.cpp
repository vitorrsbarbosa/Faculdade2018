#include "tipos.h"

void mostrarSequencia(TFila *p)
{
	TElemento *aux;
	aux = p->inicio;
	
	while(aux != NULL){
		mostraCor(aux->cor);
		aux = aux->proximo;
	}	
}
