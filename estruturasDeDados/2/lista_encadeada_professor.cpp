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

void inserir(TLista *p)
{
	TElemento *novo;
	novo = (TElemento *)malloc(sizeof(TElemento));
	//novo = new TElemento;
	
	printf("Informe valor: ");
	scanf("%d", &novo->info);
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



int main()
{
	TLista L;
	
	inicializarLista(&L);
	
	inserir (&L);
	inserir (&L);
	inserir (&L);
	
	apresentar (&L);
}






