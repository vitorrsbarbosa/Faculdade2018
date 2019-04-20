#include "tipos.h"

void apresentarCurso (TListaCursos *p)
{
	if (p->tamListaCursos == 0)
	{
		printf("\n Lista Vazia");
	}
	else
	{
		int i;
		for (i=0; i < p->tamListaCursos; i++)
		{
			printf("\n Codigo: %s", p->listaDeCursos[i].codCurso);
			printf("\n Nome: %s", p->listaDeCursos[i].nomeCurso);
			printf("\n Duracao: %d \n", p->listaDeCursos[i].duracao);
		}
	}
	getch();
}

