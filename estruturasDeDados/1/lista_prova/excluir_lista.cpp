#include "tipos.h"

void excluirdalista (TListaCursos *p)
{
	char auxnomecurso[40];
	int indice;
	
	printf("\n informe o nome do curso a ser excluido");
	fflush(stdin);
	gets(auxnomecurso);
	
	indice = consultarlista (p, auxnomecurso);
	
	if (indice !=-1)
	{
		for (int j=indice ; j<p->tamListaCursos ; j++)
		{
			p->listaDeCursos[j] = p->listaDeCursos[j+1];
		}
		p->tamListaCursos--;
	}
	else
	{
		printf("\n curso inexistente!");
	}
}
