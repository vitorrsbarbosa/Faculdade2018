#include "tipos.h"

main()
{
	tipoFILA TF;
	int opcao;
	
	printf("\n Escolha uma opcao:");
	printf("\n 1 - Incluir na lista");
	printf("\n 2 - Excluir da lista");
	printf("\n 3 - Apresentar a lista");
	printf("\n 4 - Consultar a lista");
	
	do
	{
		switch(opcao)
		{
			case 1: incluirnafila(TF *p);break;
			case 2: excluirdafila(TF *p);break;
			case 3: apresentarfila(TF *p);break;
			case 4: consultarfila(TF *p);break;
		}
	}while(opcao!=0);
}
