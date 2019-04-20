#ifndef _tipos.h_
#define _tipos.h_

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct tipoELEMENTO
{
	int valor;
}TE;
typedef struct tipoPILHA
{
	TE pilha[100];
	int topo;
}TP;

void inicializar(TP *p);
void empilhar(TP *p);
void desempilhar(TP *p);
void apresentar(TP *p);
void destruir(TP *p);


#endif
