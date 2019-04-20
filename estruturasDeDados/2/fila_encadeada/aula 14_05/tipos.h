#ifndef _tipos.h_
#define _tipos.h_

#include <stio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tipoElemento
{
	int info;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoLista
{
	TElemento *inicio;
	TElemento *fim;
}TLista;

void inicializarLista(TLista *p);
void inserirLista(TLista *p);
void apresentarLista(TLista *p);
void verificaListasIguais(TLista *pL1, TLista *pL2);
#endif
