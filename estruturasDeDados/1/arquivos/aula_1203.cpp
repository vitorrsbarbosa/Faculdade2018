#include <stdio.h>
#include <conio.h>
#include <string.h>


typedef struct TIPOENDERECOALUNO
{
		char enderecoRUA[40];
		char enderecoCIDADE[30];
		int enderecoNUMERO;
		int enderecoCEP;
}tendereco;

/////////////////////////////////////

typedef struct TIPOALUNO
{
		tendereco enderecoaluno;
		char nomealuno[40];
		char numeroaluno[15];
		int codigoaluno[15];	
}taluno;

/////////////////////////////////////

typedef struct TIPOCURSO
{
		char codeCURSO[10];
		char nomeCURSO[40];
		int duracaoCURSO;
}tcurso;

/////////////////////////////////////

typedef struct TIPOLISTACURSOS
{
		tcurso listadecursos[100];
		//conjunto de cursos, aqui fica armazenado o array com os cursos
		int tamanholistadecursos;
}tlcursos;

/////////////////////////////////////

typedef struct TIPODISCIPLINA
{
		char codeDISCIPLINA[10];
		char nomeDISCIPLINA[40];
		char nomeDOCENTE[40];
		int cargahorariaDISCIPLINA;
		int faltas;
		float nota[6];
}tdisciplina;

/////////////////////////////////////

typedef struct TIPOLISTADISCIPLINAS
{
		tdisciplina listadisciplina[100];
		int tamanholistadedisciplinas;
}tldisciplinas;

/////////////////////////////////////

typedef struct TIPOMATRIZCURRICULAR
{
		char codigo_matriz_curricular[10];
		char codigo_curso_matriz_curricular[10];		
}tmatrizcurricular;

/////////////////////////////////////

void inicializarlistacursos(tlcursos *p)
{
	p->tamanholistadecursos = 0;
}

/////////////////////////////////////

void inserirCurso(tlcursos *p)
{
	if(tamanholistadecursos == 100)
	{
		printf("\n Lista cheia!");
	}
	else
	{
		tcurso novo_curso;
		
		printf("\n Informe Codigo do Curos:");
		fflush(stdin);
		gets(novo_curso.codeCURSO);
		printf("\n Informe Nome do Curso");
		fflush(stdin);
		gets(novo_curso.nomeCURSO);
		printf("\n Infomre Duracao do Curso");
		fflush(stdin);
		scanf("%d",&novo_curso.duracaoCURSO);
		
		p->listadecursos[p->tamanholistadecursos] = novo_curso;
		
		p->tamanholistadecursos++;
		/*
		OUTRO JEITO DE FAZER ISSO É:
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

void apresentarcurso(tlcursos *p)
{
	if(tamanholistadecursos == 0)
	{
		printf("\n Lista vazia!");
	}
	else
	{
		int i;
		for(i=0;i< p->tamanholistadecursos;i++)
		{
			printf("\n Codigo: %s", p->listadecursos[i].codeCURSO);
			printf("\n Nome: %s",p->listadecursos[i].nomeCURSO);
			printf("\n Duracao: %d \n",p->listadecursos[i].duracaoCURSO);
		}
	}
}

/////////////////////////////////////

int consultar (int valorExclusao, tlcursos *p)
{
	int i;
	for (i = 0; i < p->tamanholistadecursos; i++)
	{
		if (p->listadecursos[i].nomeCURSO == valorExclusao)
		{
			return i;
		}
	}
	return -1;
}

/////////////////////////////////////

void consultar(tlcursos *p)
{
	if(p->tamanholistadecursos >0)
	{
		int auxvalor;
		int achou = 0;
		printf("\n Informe nome do curso para consulta: ");
		scanf("%d", &auxvalor);
		
		for(int i=0 ; i < p->tamanholistadecursos && achou == 0 ; i++)
		{
			if(p->listadecursos[i].nomeCURSO == auxvalor)
			{
				achou =1;
			}
		}
		if(achou==1)
		{
			printf("\n Valor encontrado");
		}
	}
}

/////////////////////////////////////

void excluircurso(tlcursos *p)
{
	if(tamanholistadecursos == 0)
	{
		printf("\n Lista vazia!");
	}
	else
	{
		int valorexclusao;
		printf("\n informe valor a ser excluido: ");
		scanf("%d", &valorexclusao);
		
		int indice;
		indice = consultar(valorexclusao, p);
		
		if(indice == -1)
			{
				printf("\n Elemento nao econtrado");
				getch();
			}
		else
			{
				int j;
				for(j=indice; j< p->tamanholistadecursos-1; j++)
				{
					p->listadecursos[j] = p->listadecursos[j+1];
				}
			}
		int consultar(int valorexclusao, tlcursos *p)
		{
			int i;
				for(i=o; i<p->tamanholistadecursos; i++)
					{
						if(p->listadecursos[i].nomeCURSO == valorexclusao)
						{
							return i;
						}
						
					}
					return -1;
		}
		/*
		-perguntar qual elemento é
		-pesquisar valor na lista
		-deslocar dados da posicação i+1 para a posição i da lista ex: v[i+1=v[i];
		-decrementar variável de controle de tamanho tamanholistadecursos--;
		*/
	}
}

/////////////////////////////////////

int main()
{
	int opcao;
	tlcursos lcursos;
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
				case 2: apresentarCursoCadastrado(&lcursos);break;
				case 3: consultarCurso(&lcursos);break;
				case 4: excluirCurso(&lcursos);break;
				//case 0: sair();break;
			}
	}while(opcao!=0);



}
