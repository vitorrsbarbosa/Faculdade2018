#ifndef "tipos.h"
#define "tipos.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct TIPOPILHA
{
	int pilha[4];
	int topo;
}TP;


void inicializar(TP *p);
void empilhar(TP *p);
void desempilhar(TP *p);
void apresentar(TP *p);
void movimento(TP *p);

#endif
