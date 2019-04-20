#include "tipos.h"

void desenfileirar(TFila *p)
{
	if (p->inicio == NULL)
	{
		printf("\n Fila vazia\n");
		getch();
	}
	else
	{
		TElemento *aux;
		aux =p->inicio;
		p->inicio = p->inicio->proximo;
		printf("\n Elemento %d densenfileirado com sucesso! \n", aux->valor);
		free(aux);
	}
}
