#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>

typedef struct tipoVeiculo
{
	char placa[9];
	int ano;
	float valor;
	char modelo[20];
}TVeiculo;

typedef struct tipoVeic
{
	TVeiculo veiculo;
	struct tipoVeic *proximo;
}TVeic;

typedef struct tipoListaVeiculo
{
	TVeic *inicio;
	TVeic *fim;
}TLista;

void inicializarLista(TLista *p)
{
	p->inicio = NULL;
	p->fim = NULL;
}

void validaPlaca(TVeic *v)
{

}

void inserirVeiculo(TLista *p)
{
	TVeiculo *novoVeiculo;
	
	novoVeiculo = (TVeic *)malloc(sizeof(TVeic));
	
	
		printf("Insira a placa: ");
		fflush(stdin);
		gets(novoVeiculo->placa);
		
		printf("Insira o modelo do veiculo: ");
		fflush(stdin);
		gets(novoVeiculo->modelo);
		
		printf("Insira o ano de fabricacao do veiculo: ");
		fflush(stdin);
		scanf("%d", &novoVeiculo->ano);
		
		printf("Insira o valor do veiculo: ");
		fflush(stdin);
		scanf("%f", &novoVeiculo->valor);
		
		novoVeiculo->proximo = NULL;
		
		if(p->inicio == NULL)
		{
			p->inicio	= novoVeiculo;
			p->fim		= novoVeiculo;
		}
		p->fim->proximo = novoVeiculo;
		p->fim 			= novoVeiculo;
}

void consultarVeiculo(TLista *p)
{
	TVeic *tmp;
	char aux[9];
	
	printf("Digite a placa: ");
	fflush(stdin);
	gets(aux);
	
	tmp = p->inicio;
	while(tmp != NULL)
	{
		if(strcmp(tmp->veiculo.placa, aux) == 0)
		{
			printf("\n Placa: %s", tmp->veiculo.placa);
			printf("\n Modelo: %s", tmp->veiculo.modelo);
			printf("\n Ano: %d", tmp->veiculo.ano);
			printf("\n Valor: %f", tmp->veiculo.valor);
			break;
		}
		tmp = tmp->proximo;
	}
}

void excluirVeiculo (TLista *p)
{
	TVeic *atual;
	TVeic *anterior;
	char aux[9];
	
	printf("Digite a placa do veiculo: ");
	fflush(stdin);
	gets(aux);
	
	atual	 = p->inicio;
	anterior = p->inicio;
	
	while(atual != NULL)
	{
		if(strcmp(aux, atual->veiculo.placa) == 0)
		{
			if(atual == p->inicio)
			{
				p->inicio = p->inicio->proximo;
				free(atual);
				break;
			}
			else
			{
				if(atual == p->fim)
				{
					p->fim = anterior;
					p->fim->proximo = NULL;
					free(atual);
					break;
				}
				else
				{
					anterior->proximo = atual->proximo;
					free(atual);
					break;
				}
			}
		}
		else
		{
			anterior = atual;
			atual = atual->proximo;
		}
	}
}

void apresentarVeiculo(TLista *p)
{
	if(p->inicio == NULL)
	printf("\n Lista vazia");
	else
	{
		TVeic *aux = p->inicio;
		while(aux != NULL)
		{
			printf("\n Placa: %s", aux->placa);
			printf("\n Modelo: %s", aux->modelo);
			printf("\n Ano: %d", aux->ano);
			printf("\n Valor: %f", aux->valor);
			printf("\n------------------------------\n");
			aux = aux->proximo;
		}
	}
	getch();
}

void ordenarVeiculo(TLista *p, TVeiculo veiculo)
{
	TVeic *novo;
	novo = new TVeic;
	
	novo->veiculo = veiculo;
	novo->proximo = NULL;
	
	if(p->inicio == NULL)
	{
		p->inicio	= novo;
		p->fim		= novo
	}
	else
	{
		if(novo->veiculo.valor < p->inicio->veiculo.valor)
		{
			novo->proximo = p->inicio;
		}
		else
		{
			if(novo->veiculo.valor > p->fim->veiculo.valor)
			{
				p->fim->proximo = novo;
				p->fim = novo;
			}
			else
			{
				TVeic *atual, *anterior;
				atual = p->inicio->proximo;
				anterior = p->inicio;
				
				while(atual != NULL)
				{
					if(atual->veiculo.valor >novo->veiculo.valor)
					{
						novo->proximo = atual;
						anterior->proximo = novo;
					}
					else
					{
						anterior = atual;
						atual	 = atual->proximo;
					}
				}
			}
		}
	}
}


void inserirOrdCrescValor(TLista *p)
{
	TLista LOrdenadaValor;
	inicializarLista(&LOrdenadaValor);
	
	TVeic *aux = p->inicio;
	
	while(aux != NULL)
	{
		ordenarVeiculo(&LOrdenadaValor, aux->veiculo);
		aux = aux->proximo;
	}
	apresentarVeiculo(&LOrdenadaValor);
}

int main()
{
	TLista L;
	inicializarLista(&L);
	
	int opc;
	
	do
	{
		printf("   Escolha uma das opcoes a baixo:");
		printf("\n 1 - Inserir veiculo");
		printf("\n 2 - Apresentar veiculos");
		printf("\n 3 - Apresentar veiculos em ordem crescente de valor");
		printf("\n 4 - Excluir veiculos");
		printf("\n 0 - Sair");
		scanf("%d",&opc);
		
		switch(opc)
		{
			case 1: inserirVeiculo(&L); break;
			case 2: apresentarVeiculo(&L); break;
			case 3: inserirOrdCrescValor(&L); break;
			case 4: excluirVeiculo(&L); break;
		}
	}while (opc != 0 );
}
