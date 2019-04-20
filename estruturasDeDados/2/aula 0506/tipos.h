#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct TipoElemento
{
	int valor;
	struct TipoElemento *proximo;
}TElemento;

typedef struct TipoFila
{
	TElemento *inicio;
	TElemento *fim;
}TFila;

void inicializaFila(TFila *p);
void insereElemento(TFila *p);
void excluiElemento(TFila *p);
void mostraElemento(TFila *p);

#endif
