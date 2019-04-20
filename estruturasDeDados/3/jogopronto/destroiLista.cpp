#include "tipos.h"

void destroiLista(TFila *p)
{
	if(p->inicio == NULL){return;}
	TElemento *aux;
	aux = p->inicio;
	p->inicio = p->inicio->proximo;
	
	free(aux);
	if(p->fim != p->inicio){ //Inicio é diferente do fim
		destroiLista(p);//Mando distruir de novo
	}else{//Se nao, zera a lista
		aux = p->inicio;
		p->inicio = NULL;
		p->fim = NULL;
		free(aux);
	}
}
