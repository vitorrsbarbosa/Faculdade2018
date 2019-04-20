#include "tipos.h"

void excluirCurso (TListaCursos *p)
{
	char auxNomeCurso[40];
	int indice;
	
	printf("\n Informe nome do curso a ser excluido: ");
	fflush(stdin);
	gets(auxNomeCurso);
	
	indice = consultarCurso (p, auxNomeCurso);
	
	if (indice != -1)
	{
		for (int j = indice; j < p->tamListaCursos-1; j++)
		{
			p->listaDeCursos[j] = p->listaDeCursos[j+1];
		}
		p->tamListaCursos--;
	}
	else
	{
		printf("\n Curso nao existe!");
		getch();
	}
}


