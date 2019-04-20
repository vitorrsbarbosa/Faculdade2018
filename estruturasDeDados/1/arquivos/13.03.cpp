#include <stdio.h>
#include <conio.h>

typedef struct tipoElemento
{
	int valor;
}TElemento;

typedef struct tipoLista
{
	TElemento valores[100];
	int tamanho;
}TLista;


void inicializarLista(TLista *p)
{
	p->tamanho = 0;
}

void inserir(TLista *p)
{
	//verifica se lista ainda pode receber elementos
	if (p->tamanho < 100)
	{
		int auxValor;
		printf("\n Informe novo valor: ");
		scanf("%d", &auxValor);
		
		p->valores[p->tamanho].valor = auxValor;
		p->tamanho++;
	}
	else
	{
		printf("\n Lista cheia!");
		getch();
	}
}

void apresentar(TLista *p)
{
	if (p->tamanho > 0)
	{
		int i;
		for (i=0; i < p->tamanho; i++)
		{
			printf("\n Indice: %d - Valor: %d", i, p->valores[i].valor);
		}
	}
	else
	{
		printf("\n Lista vazia!");
	}
	getch();
}

int consultar (int valorExclusao, TLista *p)
{
	int i;
	for (i = 0; i < p->tamanho; i++)
	{
		if (p->valores[i].valor == valorExclusao)
		{
			return i;
		}
	}
	return -1;
}


void consultarValor (TLista *p)
{
	if (p->tamanho > 0)
	{
		int auxValor;
		int achou;
		printf("\n Informe valor para consulta: ");
		scanf("%d", &auxValor);
		
		achou = consultar( auxValor, p);
		
		if (achou != -1)
		{
			printf("\n Valor encontrado!");
		}
		else
		{
			printf("\n Valor nao encontrado!");
		}
	}
	else
	{
		printf("\n Lista vazia!");
	}
	getch();
}




void excluir (TLista *p)
{
	int valorExclusao;
	printf("\n Informe valor a ser excluido: ");
	scanf("%d", &valorExclusao);
	
	int indice;
	indice = consultar (valorExclusao, p);
	
	if (indice == -1) //não encontrei o elemento na lista
	{
		printf("\n Elemento nao encontrado!");
		getch();
	}
	else
	{
		int j;
		for (j = indice; j < p->tamanho-1; j++)
		{
			p->valores[j] = p->valores[j+1];
		}
		p->tamanho--;	
	}
}



int main()
{
	TLista L;
	int opcao;
	
	//inicializando a lista
	//L.tamanho = 0;
	inicializarLista(&L);
	
	do
	{
		printf("\n 1 - Inserir");
		printf("\n 2 - Apresentar");
		printf("\n 3 - Consultar");
		printf("\n 4 - Excluir");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
			switch(opcao)
			{
				case 1: inserir(&L); break;
				case 2: apresentar(&L); break;
				case 3: consultarValor(&L); break;
				case 4: excluir(&L); break;
			}
	}while(opcao != 0);
}
