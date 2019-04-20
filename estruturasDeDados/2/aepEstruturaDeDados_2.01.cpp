#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct TipoElemento
	{
		TipoElemento *proximo;
		int valor;
	}TElemento;

typedef struct TipoLista
	{
		TElemento *inicio;
		TElemento *fim;
	}TLista;

void iniciaLista(TLista *p)
	{
		p->inicio = NULL;
		p->fim = NULL;
	}

void adicionaElemento(TLista *p)
	{
		TElemento *novo;
		novo = new TElemento;
		
		novo->proximo = NULL;
		printf("Informe um valor para o novo elemento: ");
		scanf("%d",&novo->valor);
		fflush(stdin);
		
		if(p->inicio == NULL)
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

void mostraLista(TLista *p)
	{
		TElemento *aux;
		aux = p->inicio;
		
		while(aux != NULL)
			{
				printf("Valor na lista = %d \n",aux->valor);
				aux = aux->proximo;
			}
		getch();
	}

void inverteLista(TLista *p)
	{
		TLista listaInvertida;
		TElemento *contador,*aux;
		contador = p->inicio;
		
		
		while(contador != NULL)
			{
				aux = new TElemento();
				aux->valor = contador->valor;
				
				if(listaInvertida.inicio == NULL)
					{
						listaInvertida.inicio = aux;
						listaInvertida.fim    = aux;
						listaInvertida.inicio->proximo = NULL;
						listaInvertida.fim->proximo    = NULL;
					}
				else
					{
						aux->proximo = listaInvertida.inicio;
						listaInvertida.inicio = aux;
					}
				
				contador = contador->proximo;
			}
		
		printf("Lista normal:\n");
		mostraLista(p);
		
		printf("Lista invertida:\n");
		mostraLista(&listaInvertida);
		
	}


int main()
	{
		char menu;
		TLista L;
		
		do
		{
			printf("\nEscolha uma das opcoes abaixo:");
			printf("\n1 - Iniciar lista");
			printf("\n2 - Adicionar elemento");
			printf("\n3 - Inverter posicao");
			printf("\n4 - Mostrar lista ");
			printf("\n	0 - Sair  \n");
			scanf("%c",&menu);
			fflush(stdin);
			
			switch(menu)
			{
				case '1':iniciaLista(&L);break;
				case '2':adicionaElemento(&L);break;
				case '3':inverteLista(&L);break;
				case '4':mostraLista(&L);break;
			}
			system("cls");
		}while(menu != '5');
	}
