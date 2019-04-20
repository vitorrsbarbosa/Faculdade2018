#include "tipos.h"

main()
{
	int opcao;
	TListaCursos LCursos;
	
	inicializarlista(&LCursos);
	
	do
	{
		printf("\n 1 - Inserir curso");
		printf("\n 2 - Consultar curso cadastrado");
		printf("\n 3 - Apresentar cursos cadastrados");
		printf("\n 4 - Excluir curso");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch (opcao)
		{
			case 1: inserirlista(&LCursos); break;
			case 2: consultarlista(&LCursos); break;
			case 3: apresentarlista(&LCursos); break;
			case 4: excluirdalista(&LCursos); break;
		}
	}while (opcao != 0);
}
