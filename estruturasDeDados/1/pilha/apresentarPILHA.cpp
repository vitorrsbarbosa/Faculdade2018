#include "tipos.h"

void apresentar(TP *p)
{
	for int i=p->topo; i>=0; i--)
	{
		printf("\n Indice: %d 	-	Valor: %d",i,p->pilha[i].valor);
	}
	getch();
}
