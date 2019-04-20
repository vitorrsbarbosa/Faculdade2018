#include "tipos.h"

int main()
{
	int opcao;
	TP P;
	inicializar(&P);
	do
	{
		printf("\n 1 - Empilhar: ");
		printf("\n 2 - Desempilhar: ");
		printf("\n 3 - Apresentar: ");
		printf("\n 4 - Destruir: ");
		printf("\n 0 - Sair");
		scanf("%d",&opcao);
		switch(opcao)
		{
			case 1: empilhar(&P);break;
			case 2: desempilhar(&P);break;
			case 3: apresentar(&P);break;
			case 4: destruir(&P);break;
		}while(opcao!=0);
	}	
}
