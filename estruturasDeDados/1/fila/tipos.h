#ifndef _tipos.h_
#define _tipos.h_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct tipoELemento
{
	int valor;
}TELEMENTO;
typedef struct tipoFila
{
	TELEMENTO fila[100];
	int tamFila;
}TFILA;

void inicializarFila(TFILA *p);
void enfileirarFila(TFILA *p);
void apresentarFila(TFILA *p);
void desenfileirarFila(TFILA *p);
void destruirFila(TILA *p);

#endif
