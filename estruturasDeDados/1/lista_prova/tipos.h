#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <string.h>
#include <conio.h>
//////////////////////////////
typedef struct tipoCurso
{
	char codCurso[10];
	char nomeCurso[40];
	int duracao;
}TCurso;
//////////////////////////////
typedef struct tipoListaCursos
{
	TCurso listaDeCursos[100];
	int tamListaCursos;
}TListaCursos;
//////////////////////////////
void inicializarlista(TListaCursos *p);
void inserirlista(TListaCursos *p);
void excluirdalista(TListaCursos *p);
void apresentarlista(TListaCursos *p);
int consultarlista(TListaCursos *p, char auxnomecurso);
//////////////////////////////
#endif
