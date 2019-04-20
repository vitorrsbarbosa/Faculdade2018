#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

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

typedef struct listaVeiculo
{
	TVeic *inicio;
	TVeic *fim;
}TLista;

void inicializarLista(TLista *p)
{
	p->inicio = NULL;
	p->fim = NULL;
}

void validar(TVeic *v){
}

void inserirVeiculo(TLista *p)
{
	TVeic *novoVeiculo;
	novoVeiculo = (TVeic *)malloc(sizeof(TVeic));
	
	//do{
		printf("Insira a placa:");
		fflush(stdin);	
		gets(novoVeiculo->veiculo.placa);
	//}while(validar(novoVeiculo.placa) != NULL || sair != false);
	
	
	printf("Insira o modelo do veiculo: ");
	fflush(stdin);
	gets(novoVeiculo->veiculo.modelo);	
	printf("Insira o ano de fabricacao do veiculo:");
	scanf("%d", &novoVeiculo->veiculo.ano);	
	printf("Insira o Valor do veiculo: ");
	scanf("%f",&novoVeiculo->veiculo.valor);
	
	novoVeiculo->proximo = NULL;
	
	if(p->inicio == NULL){
		p->inicio = novoVeiculo;
		p->fim = novoVeiculo;
	}else{
		p->fim->proximo = novoVeiculo;
		p->fim = novoVeiculo;
	}
}

void Consultar(TLista *p){
	
	TVeic *tmp;
	char aux[9];
	
	printf("Digite a placa: ");
	fflush(stdin);
	gets(aux);
	
	tmp = p->inicio;
	while(tmp != NULL){
		if(strcmp(tmp->veiculo.placa, aux) == 0){
			printf("\n Placa: %s", tmp->veiculo.placa);
			printf("\n Modelo: %s", tmp->veiculo.modelo);
			printf("\n Ano: %d", tmp->veiculo.ano);
			printf("\n Valor: %f", tmp->veiculo.valor);	
			break;
		}
		else{
			tmp = tmp->proximo;
		}
	}
}

void excluirVeiculo(TLista *p){
	TVeic *atual;
	TVeic *anterior;
	char aux[9];
	
	printf("Digite a placa: ");
	fflush(stdin);
	gets(aux);
	
	atual    = p->inicio;
	anterior = p->inicio;
	
	while(atual != NULL){
		if(strcmp(aux,atual->veiculo.placa) == 0){
			if (atual == p->inicio){
				p->inicio = p->inicio->proximo;	
				free(atual);
				break;
			}
			else{
				if(atual==p->fim){
					p->fim = anterior;
					p->fim->proximo = NULL;
					free(atual);
					break;
				}
				else{
					anterior->proximo = atual->proximo;
					free(atual);
					break;
				}
			}
		} 
		else{
			anterior = atual;
			atual    = atual->proximo;
		}
	}
}

void apresentarVeiculos (TLista *p)
{
	if (p->inicio == NULL)
	{
		printf("\n Lista vazia!");
	}
	else
	{
		TVeic *aux = p->inicio;
		while (aux != NULL)
		{
			printf("\n Placa: %s", aux->veiculo.placa);
			printf("\n Modelo: %s", aux->veiculo.modelo);
			printf("\n Ano: %d", aux->veiculo.ano);
			printf("\n Valor: %.2f", aux->veiculo.valor);
			printf("\n ------------------------");
			aux = aux->proximo;
		}
	}
	getch();
}


void ordenaVeiculos (TLista *p, TVeiculo veiculo)
{
	TVeic *novo;
	novo = new TVeic;
	
	novo->veiculo = veiculo;
	novo->proximo = NULL;
	
	if (p->inicio == NULL)
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	{
		if (novo->veiculo.valor < p->inicio->veiculo.valor)
		{
			novo->proximo = p->inicio;
		}
		else
		{
			if (novo->veiculo.valor > p->fim->veiculo.valor)
			{
				p->fim->proximo = novo;
				p->fim = novo;
			}
			else
			{
				TVeic *atual, *anterior;
				atual = p->inicio->proximo;
				anterior = p->inicio;
				
				while (atual != NULL)
				{
					if (atual->veiculo.valor > novo->veiculo.valor)
					{
						novo->proximo = atual;
						anterior->proximo = novo;
					}
					else
					{
						anterior = atual;
						atual = atual->proximo;
					}
				}
			}
		}
	}
}
	


void inserirOrdCrescValor (TLista *p)
{
	TLista LOrdenadaValor;
	inicializarLista(&LOrdenadaValor);
	
	TVeic *aux = p->inicio;
	
	while (aux != NULL)
	{
		ordenaVeiculos(&LOrdenadaValor, aux->veiculo);
		aux = aux->proximo;
	}
	apresentarVeiculos(&LOrdenadaValor);
}


int main()
{
	TLista L;
	inicializarLista (&L);
	int opcao;
	
	do
	{
		printf("\n 1 - Inserir Carro ");
		printf("\n 2 - Excluir Carro ");
		printf("\n 3 - Apresentar Carros ");
		printf("\n 4 - Apresentar Carros em ordem crescente de valor ");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch (opcao)
		{
			case 1: inserirVeiculo(&L); break;
			case 2: excluirVeiculo(&L); break;
			case 3: apresentarVeiculos(&L); break;
			case 4: inserirOrdCrescValor(&L); break;
		}
	}while (opcao != 0);
}



