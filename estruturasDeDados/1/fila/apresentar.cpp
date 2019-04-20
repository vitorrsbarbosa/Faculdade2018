#include "tipos.h"

void apresentar(TFILA *p)
{
	if(p->tamFila>0)
	{
		for(int i=0; i<p->tamFila; i++)
		{
			printf("\n Posicao: %d	/	Valor: %d",i,p->fila[i].valor);
		}
	}
	else
	{
		printf("Fila vazia");
	}
	getch();
}
