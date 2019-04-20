#include "tipos.h"

int consultarCurso (TListaCursos *p, char auxNomeCurso[])
{
	int i;
	for (i = 0; i < p->tamListaCursos; i++)
	{
		if (strcmp(p->listaDeCursos[i].nomeCurso, auxNomeCurso) == 0)
			return i;
	}
	return -1;
}

