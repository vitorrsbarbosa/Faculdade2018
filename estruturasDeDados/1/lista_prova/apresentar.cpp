#include "tipos.h"

void apresentarlista(TListaCursos *p)
{
	if(p->tamListaCursos==0)
	{
		printf("\n lista vazia");
	}
	else
	{
		int i;
		for (i=0 ; i<=p->tamListaCursos ; i++)
		{
			printf("\n codigo: %c",p->listaDeCursos[i].codCurso);
			printf("\n nome: %c", p->listaDeCursos[i].nomeCurso);
			printf("\n duracao: %d \n", p->listaDeCursos[i].duracao);
		}
	}
	getch();
}
