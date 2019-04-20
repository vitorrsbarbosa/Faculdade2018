#include "tipos.h"

void destruir (TFila *p)
{
	while (p->tamFila > 0)
	{
		desenfileirar(p);
	}
}
