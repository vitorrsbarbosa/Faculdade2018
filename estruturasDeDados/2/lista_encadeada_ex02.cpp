#include <stdio.h>
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

void inicializarLista(TLista *p)
{
	p->inicio = NULL;
	p->fim = NULL;	
}

void inserir(TLista *p, int i)
{
	TElemento *novo;
	novo = (TElemento *)malloc(sizeof(TElemento));
	//novo = new TElemento;
	
	novo->info = i;
	novo->proximo = NULL;
	
	if (p->inicio == NULL) //lista vazia
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	{
		p->fim->proximo = novo;
		p->fim = novo;
	}
}

void apresentar (TLista *p)
{
	TElemento *aux;
	aux = p->inicio;
	while (aux != NULL)
	{
		printf("\n Valor: %d", aux->info);
		aux = aux->proximo;
	}
	getch();
}

void verificaListasIguais (TLista *pL1, TLista *pL2)
{
	TElemento *auxL1, *auxL2;
	auxL1 = pL1->inicio;
	auxL2 = pL2->inicio;
	
	while (auxL1 != NULL && auxL2 != NULL)
	{
		if (auxL1->info == auxL2->info)
		{
			auxL1 = auxL1->proximo; 
			auxL2 = auxL2->proximo; 
		}
		else
		{
			auxL1 = NULL;
		}
	}
	if (auxL1 == auxL2)
	{
		printf("\n\nListas iguais");
	}
	else
	{
		printf("\n\nListas diferentes");
	}
}



int main()
{
	TLista L1, L2;
	
	inicializarLista(&L1);
	inicializarLista(&L2);
	
	int i;
	for (i=1; i<=5; i++)
		inserir (&L1, i);
		
	for (i=1; i<=4; i++)
		inserir (&L2, i);

	//inserir (&L2, 6);

		
	printf("Lista L1:");
	apresentar (&L1);

	printf("\n\nLista L2:");
	apresentar (&L2);
	
	verificaListasIguais(&L1, &L2);
	
}








