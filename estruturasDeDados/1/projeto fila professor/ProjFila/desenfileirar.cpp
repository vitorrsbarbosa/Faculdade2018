#include "tipos.h"

void desenfileirar (TFila *p)
{
	if (p->tamFila > 0)
	{
		printf("\n %d saiu da fila\n", p->fila[0].valor);
		
		int i;
		for (i = 0; i < p->tamFila-1; i++)
		{
			p->fila[i] = p->fila[i+1];
		}
		p->tamFila--;
	}
	else
	{
		printf("Fila Vazia!");
	}
	getch();
}
