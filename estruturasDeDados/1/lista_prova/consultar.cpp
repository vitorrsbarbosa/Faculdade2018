#include "tipos.h"

int consultarlista(TListaCursos *p, char auxnomecurso[])
{
	int i;
	for (i=0 ; i<p->tamListaCursos ; i++)
	{
		if(strcmp(p->listaDeCursos[i].nomeCurso,auxnomecurso)==0)
			printf("o curso de indice %d existe",i);
			return i;
	}
	return -1;
}

