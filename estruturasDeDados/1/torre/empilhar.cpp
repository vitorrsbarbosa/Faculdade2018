#include "tipos.h"

void empilhar(TP *p)
{

	p->topo++;
	scanf("%d",&p->pilha[p->topo].valor);

}
