#include "tipos.h"

void destruirFILA(TFILA *p)
{
	while(p->tamFila > 0)
	{
		desenfileirar(p);
	}
}
