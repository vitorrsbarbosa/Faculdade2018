#include "tipos.h"

void inserirLista(TLista *p, int i)
{
	TElemento *novo;
	novo = (TElemento *)malloc(sizeof(TElemento));
	// novo = new TElemento;
	
	novo->info = i;
	
	novo->proximo = NULL;
	
	if(p->inicio == NULL) 	// lista vazia
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else 					// lista com valores
	{
		p->fim->proximo = novo;
		p->fim = novo;
	}
}

