#include <stdio.h>



typedef struct TIPOENDERECOALUNO
{
		char enderecoRUA[40];
		char enderecoCIDADE[30];
		int enderecoNUMERO;
		int enderecoCEP;
}TENDERECO;
/////////////////////////////////////
typedef struct TIPOALUNO
{
		char nomealuno[40];
		char numeroaluno[15];
		int codigoaluno[15];
		TENDERECO enderecoaluno		
}TALUNO;
/////////////////////////////////////
typedef struct TIPOCURSO
{
		char codeCURSO[10];
		char nomeCURSO[40];
		int duracaoCURSO;
}TCURSO;
/////////////////////////////////////
typedef struct TIPOLISTACURSO
{
		TCURSO LISTADECURSOS[100];
		//conjunto de cursos, aqui fica armazenado o array com os cursos
		int tamanholistadecursos;
}TLCURSOS;
/////////////////////////////////////
typedef struct TIPODISCIPLINA
{
		char codeDISCIPLINA[10];
		char nome DISCIPLINA[40];
		char nomeDOCENTE[40];
		int cargahorariaDISCIPLINA;
		int faltas;
		float nota[6];
}TDISCIPLINA;
/////////////////////////////////////
typedef struct TIPOLISTADISCIPLINAS
{
		TDISCIPLINA LISTADISCIPLINAS[100];
		int tamanholistadedisciplinas;
}TLDISCIPLINAS;
/////////////////////////////////////
typedef struct TIPOMATRIZCURRICULAR
{
		char codMATRIZCURRICULAR[10];
		char codCURSOMATRIZCURRICULAR[10];
		
}
