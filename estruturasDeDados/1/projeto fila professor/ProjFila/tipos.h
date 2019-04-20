#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>

typedef struct tipoElemento
{
	int valor;
}TElemento;

typedef struct tipoFila
{
	TElemento fila[100];
	int tamFila;
}TFila;

void inicializarFila (TFila *p);
void enfileirar (TFila *p);
void desenfileirar (TFila *p);
void apresentar (TFila *p);
void destruir (TFila *p);

#endif
