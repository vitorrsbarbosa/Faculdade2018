#ifndef
#define "tipos.h"

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct tipoELEMENTO
{
	int valor;
}TE;
//////////////////////////////
typedef struct tipoFILA
{
	TE valores[100];
	int tamanhoFILA;
}TF;
//////////////////////////////
void inicializarfila(TF *p);
void incluirnafila(TF *p);
void excluirdafila(TF *p);
void apresentarfila(TF *p);
void consultarfila(TF *p);

#endif
