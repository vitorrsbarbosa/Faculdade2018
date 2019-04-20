#include "tipos.h"

void inserirOrdenandoCursos (TListaCursos *p)
{
	if (p->tamListaCursos == 100)
	{
		printf("\n Lista cheia");
	}
	else
	{
		TCurso novoCurso;
		
		printf("\n Informe Codigo do Curso:");
		fflush(stdin);
		gets(novoCurso.codCurso);
		printf("\n Informe Nome do Curso: ");
		fflush(stdin);
		gets(novoCurso.nomeCurso);
		printf("\n Informe Duracao do Curso: ");
		scanf("%d", &novoCurso.duracao);
		
		if (p->tamListaCursos == 0)
		{
			p->listaDeCursos[0] = novoCurso;
		}
		else
		{
			if (strcmp(novoCurso.nomeCurso, p->listaDeCursos[p->tamListaCursos-1].nomeCurso) > 0)
			{
				p->listaDeCursos[p->tamListaCursos] = novoCurso;
			}
			else
			{
				int i;
				for (i=0; i<p->tamListaCursos; i++)
				{
					if (strcmp(p->listaDeCursos[i].nomeCurso, novoCurso.nomeCurso) > 0)
					{
						break;
					}
				}
				
				int j;
				for (j = p->tamListaCursos; j > i; j--)
				{
					p->listaDeCursos[j] = p->listaDeCursos[j-1];
				}
				
				p->listaDeCursos[i] = novoCurso;
			}
		}
		p->tamListaCursos++;	
	}
}

