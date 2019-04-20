#include <stdio.h>
#include <conio.h>

		typedef struct tipoElemento
		{
			int valor;
		}TE;

		typedef struct tipoLista
		{
			TE valores[100];
			int tamanho;
		}TL;
	void inicializarLista(TL *p)
		{
			p->tamanho = 0;
		}
	void Inserir(TL *p)
		{
			if(p->tamanho < 100)
				{
					int auxvalor;
					printf("\n Informe novo valor:");
					scanf("%d", &auxvalor);
					p->valores[p->tamanho].valor = auxvalor;
					p->tamanho++;
				}
			else
				{	
					printf("\nLISTA CHEIA!");
					getch();
				}
		}


	void Apresentar(TL *p)
	{
		if(p->tamanho > 0)
		{
			int i;
			for (i=0 ; i < p->tamanho ; i++)
			{
				printf(" Indice: %d   -   Valor: %d \n", i, p->valores[i].valor);
			}	
		}
		else
			{
				printf("\n Lista esta vazia!");
			}
			getch();

	}

	void Consultar(TL *p)
	{
		int auxvalor;
		int achou = 0;
		
		printf("\n Informe valor para consulta: ");
		scanf("%d", &auxvalor);

		for(int x = 0 ; x < p->tamanho ; x++)
		{
			if(p->valores[x].valor == auxvalor)
			{
			achou = 1;
			}
		}
		
		if(achou == 1)

				{
				printf("\n Valor encontrado!");
				}

			else

				{
				printf("\n Valor nao encontrado!");
				}
	
	}

int main()
{
TL L;
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
				case 1: Inserir (&L);break;
				case 2: Apresentar (&L);break;
				case 3: Consultar (&L);break;
				//case 4: Excluir (&L);break;
				//case 0: Sair (&L);break;
			}
		}while(opcao != 0);
}
