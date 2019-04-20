#include "tipos.h"

void empilhar(TP *p)
{
	p->topo++;
	printf("\n Informe valor para a pilha: ");
	scanf("%d",&p->pilha[p->topo].valor);	
}
