#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct tipoCurso
{
	char codCurso[10];
	char nomeCurso[40];
	int duracao;
}TCurso;

typedef struct tipoListaCursos
{
	TCurso listaDeCursos[100];
	int tamListaCursos;
}TListaCursos;

void inicializarListaCursos(TListaCursos *p);
void inserirOrdenandoCursos(TListaCursos *p);
void apresentarCurso(TListaCursos *p);
void excluirCurso(TListaCursos *p);
int consultarCurso (TListaCursos *p, char auxNomeCurso[]);

#endif
