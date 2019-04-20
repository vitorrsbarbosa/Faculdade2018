#include "tipos.h"

void inserirlista(TListaCursos *p)
{
	if(p->tamListaCursos==100)
	{
		printf("lista cheia!");
	}
	else
	{
		TCurso novocurso;
		printf("\n infome um curso novo:");
		fflush(stdin);
		gets(novocurso.codCurso);
		printf("\n informe o nome do curso:");
		fflush(stdin);
		gets(novocurso.nomeCurso);
		printf("\n informe a duracao do curso:");
		fflush(stdin);
		scanf("%d",&novocurso.duracao);
		
		if (p->tamListaCursos==0)
		{
			p->listaDeCursos[0]=novocurso;
		}
		else
		{
			if(strcmp(novocurso.nomeCurso,p->listaDeCursos[p->tamListaCursos-1].nomeCurso) > 0)
			{
				p->listaDeCursos[p->tamListaCursos] = novocurso;
			}
			else
			{
				int i;
				
				for(i=0 ; i<p->tamListaCursos ; i++)
				{
					if (strcmp(p->listaDeCursos[i].nomeCurso,novocurso.nomeCurso) > 0)
					{break;}
				}
				
				int j;
				
				for (j=p->tamListaCursos; j>i ; j--)
				{
					p->listaDeCursos[j] = p->listaDeCursos[j-1];
				}
				
				p->listaDeCursos[i] = novocurso;
			}
		}
		p->tamListaCursos++;
	}
}














