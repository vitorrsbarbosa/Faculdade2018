#include "tipos.h"

int main()
{
	int opcao;
	TFila F;
	
	inicializarFila(&F);	
	
	do
	{
		printf("\n 1 - Enfileirar");
		printf("\n 2 - Desenfileirar");
		printf("\n 3 - Apresentar");
		printf("\n 4 - Destruir");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: enfileirar(&F); break;
			case 2: desenfileirar(&F); break;
			case 3: apresentar(&F); break;
			case 4: destruir(&F); break;
		}
	}while (opcao != 0);
}
