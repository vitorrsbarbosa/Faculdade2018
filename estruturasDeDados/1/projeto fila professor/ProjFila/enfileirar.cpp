#include "tipos.h"

void enfileirar (TFila *p)
{
	if (p->tamFila < 100)
	{
		printf("Informe valor para fila: ");
		scanf("%d", &p->fila[p->tamFila].valor);
		p->tamFila++;
	}
	else
	{
		printf("\n Fila cheia!");
		getch();
	}
}
