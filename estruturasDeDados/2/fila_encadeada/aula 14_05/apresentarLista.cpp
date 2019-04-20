#include "tipos.h"

void apresentarLista(TLista *p)
{
	if(p->inicio == p->fim)
	printf("Lista Vazia");
	
	else
	{
		TElemento *aux;
		aux = p->inicio;
		
		while(aux != NULL)
		{
			printf("\n Valor:	%d", aux->info);
			aux = aux->proximo;
		}
		getch();
	}
}
