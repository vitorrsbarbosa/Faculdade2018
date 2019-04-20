#include <stdio.h>
#include <conio.h>
#include <string.h>


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
typedef struct TIPOLISTACURSOS
{
		TCURSO LISTADECURSOS[100];
		//conjunto de cursos, aqui fica armazenado o array com os cursos
		int tamanholistadecursos;
}TLCURSOS;
/////////////////////////////////////
typedef struct TIPODISCIPLINA
{
		char codeDISCIPLINA[10];
		char nomeDISCIPLINA[40];
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
}TMC;
/////////////////////////////////////
void inicializarlistacursos(TLCURSOS *p)
{
	p->tamanholistadecursos = 0;
}
/////////////////////////////////////
void inserirCurso(TLCURSOS *p)
{
	if(tamanholistadecursos == 100)
	{
		printf("\n Lista cheia!")
	}
	else
	{
		TCURSOS novoCURSO;
		
		printf("\n Informe Codigo do Curos:");
		fflush(stdin);
		gets(novoCURSO.codeCURSO);
		printf("\n Informe Nome do Curso");
		fflush(stdin);
		gets(novoCURSO.nomeCURSO);
		printf("\n Infomre Duracao do Curso");
		fflush(stdin);
		scanf("%d",&novoCURSO.duracaoCURSO);
		
		p->LISTADECURSOS[p->tamanholistadecursos] = novoCURSO
		
		p->tamanholistadecursos++;
		/*
		printf("\n Informe Codigo do Curos:");
		fflush(stdin);
		gets(p->LISTADECURSOS[p->tamanholistadecursos].codeCURSO);
		printf("\n Informe Nome do Curso");
		fflush(stdin);
		gets(p->LISTADECURSOS[p->tamanholistadecursos].nomeCURSO);
		printf("\n Infomre Duracao do Curso");
		fflush(stdin);
		scanf("%d",&p->LISTADECURSOS[p->tamanholistadecursos].duracaoCURSO);
		
		p->tamanholistadecursos++;
		*/
	}
}
/////////////////////////////////////

void apresentarcurso(TLCURSOS *p)
{
	if(tamanholistadecursos == 0)
	{
		printf("\n Lista vazia!")
	}
	else
	{
		int i;
		for(i=0;i< p->tamanholistadecursos;i++)
		{
			printf("\n Codigo: %s", p->LISTADECURSOS[i].codeCURSO);
			printf("\n Nome: %s",p->LISTADECURSOS[i].nomeCURSO);
			printf("\n Duracao: %d \n",p->LISTADECURSOS[i].duracaoCURSO);
		}
	}
}
void excluircurso(TLCURSOS *p)
{
	if(tamanholistadecursos == 0)
	{
		printf("\n Lista vazia!")
	}
	else
	{
		/*
		perguntar qual elemento é
		criar um laço começando no tamanho em que o elemento está para transferir o elemento posterior pra posição anterior
		v[j]=v[j+1];
		tamanho--;
		algo assim
		*/
	}
}
int main()
{
	int opcao;
	TLCURSOS lcursos;
	inicializarlistacursos(&lcursos);
	

	do
	{
		printf("\n 1 - Inserir curso");
		printf("\n 2 - Consultar curso cadastrado");
		printf("\n 3 - Apresentar cursos cadastrados");
		printf("\n 4 - Excluir curso");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d",&opcao);


			switch(opcao)
			{
				case 1: inserirCurso(&lcursos);break;
				//case 2: consultarCurso();break;
				case 3: apresentarCursoCadastrado(&lcursos);break;
				case 4: excluirCurso(&lcursos);break;
				//case 0: sair();break;
			}
	}



}
