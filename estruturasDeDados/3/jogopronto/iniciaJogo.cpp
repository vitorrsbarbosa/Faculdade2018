#include "tipos.h"

void iniciaJogo(TFila *p)
{
	p->inicio = NULL;
	p->fim = NULL;
	p->tamanho=0;
	system("mode con:cols=60 lines=22");
}
