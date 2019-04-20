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

void excluir(TLista *p)
{
	int valorExcluir;
	
	printf("\n Informe o valor para excluir: ");
	scanf("%d", &valorExcluir);
	
	TElemento *atual, *anterior;
	atual = p->inicio;
	anterior = p->inicio;
	
	while (atual != NULL)
	{
		if(atual->info == valorExcluir) //encontrei o elemento
		{
			if(atual == p->inicio)
			{
				p->inicio = atual->proximo; //ou p->inicio = p->inicio->proximo
			}
			else
			{
				anterior->proximo = atual->proximo;	
				if(atual == p->fim)
				{
					p->fim = anterior;
				}
			}
			free(atual);
			break;
		}
		else //não encontrei o elemento
			{
				anterior = atual;
				atual = atual->proximo;
			}
	}
	
}


int main()
{
	TLista L;
	int opcao;
	
	inicializarLista(&L);
	
	do
	{
		printf("\n 1 - Inserir");
		printf("\n 2 - Apresentar");
		//printf("\n 3 - Consultar");
		printf("\n 4 - Excluir");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: inserir(&L); break;
			case 2: apresentar(&L); break;
			//case 3: consultarValor(&L); break;
			case 4: excluir(&L); break;
		}
	system("cls");
	}while(opcao != 0);
}






