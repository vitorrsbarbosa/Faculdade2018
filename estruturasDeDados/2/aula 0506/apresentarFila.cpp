#include "tipos.h"

void apresentarFila(TFila *p)
{
	if(p->inicio == NULL)
	{
		printf("Fila vazia \n");
	}
	else
	{
		TElemento *aux;
		aux = p->inicio;
		
		while(aux != NULL)
		{
			printf("\n Valor: $d", aux->valor);
			aux = aux->proximo;
		}
	}
	getch();
}
