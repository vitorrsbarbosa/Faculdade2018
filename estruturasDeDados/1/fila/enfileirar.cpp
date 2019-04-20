#include "tipos.h"

void enfileirar(TILA *p)
{
	if(p->tamFila<100)
	{
		printf("Informe valor parar a fila:");
		scanf("%d",&p->FILA[p->tamFILA].valor);
		p->tamFILA++;
	}
	else
	{
		printf("\n Fila cheia");
		getch();
	}
}
