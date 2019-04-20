#include "tipos.h"

int main()
{
	int opcao;
	TListaCursos LCursos;
	
	inicializarListaCursos(&LCursos);
	
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
			case 1: inserirOrdenandoCursos(&LCursos); break;
			//case 2: consultarCurso(); break;
			case 3: apresentarCurso(&LCursos); break;
			case 4: excluirCurso(&LCursos); break;
		}
	}while (opcao != 0);
}
