#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
typedef struct TipoFuncionario
{
	char nome[50];
	float salario;
	struct TipoFuncionario *proximo;
}TFuncionario;

typedef struct TipoLista
{
	TFuncionario *Inicio;
	TFuncionario *Fim;
}TLista;

void IniciaLista(TLista *p)
{
	p->Inicio = NULL;
	p->Fim    = NULL;
}

void mostraLista(TLista *p)
{
	TFuncionario *aux;
	aux= p->Inicio;
	while(aux != NULL)
	{
		printf("Nome do funcionario: %s",aux->nome);
		printf("\nSalario do funcionario: %f\n\n",aux->salario);
		aux = aux->proximo;
	}
	getch();
}

void AdicionaElemento(TLista *p)
{
	TFuncionario *novoElemento = new TFuncionario;
	novoElemento->proximo = NULL;
	printf("Informe o nome do funcionario:");
	gets(novoElemento->nome);
	printf("Informe o salario do funcionario:");
	scanf("%f",&novoElemento->salario);
	fflush(stdin);
	
	if(p->Inicio  == NULL)
	{
		p->Inicio = novoElemento;
		p->Fim    = novoElemento;
	}
	else
	{
		p->Fim->proximo = novoElemento;
		p->Fim = novoElemento;
	}
}

void ExcluiElemento(TLista *p)
{
	TFuncionario *aux,*anterior;
	char nomeParaExcluir[50];
	aux = p->Inicio;
	anterior = NULL;
	printf("Informe o nome do funcionario que deseja excluir: ");
	gets(nomeParaExcluir);
	if(strcmp(p->Inicio->nome , nomeParaExcluir) == 0)
	{
		aux = p->Inicio;
		p->Inicio = p->Inicio->proximo;
	}
	else
	{
		anterior = p->Inicio;
		aux = p->Inicio->proximo;
		while(aux != NULL)
		{
			if(strcmp(aux->nome, nomeParaExcluir) == 0)
			{
				anterior->proximo = aux->proximo;
				printf("Entrei aqui");
				break;
			}
			else
			{
				printf("proximo \n");
				anterior = aux;
				aux = aux->proximo;
			}
		}	
		if(aux == p->Fim)
		{
			p->Fim = anterior;
		}
		
		if(aux == NULL)
		{
			printf("Usuario não foi encontrado");
			getch();
		}
	}
	free(aux);
}

void ConsultaElementoPeloNome(TLista *p)
{
	TFuncionario *aux;
	aux = p->Inicio;
	char nomePesquisado[50];
	printf("Informe o nome do funcionario que deseja procurar: ");
	gets(nomePesquisado);
	
	while(aux != NULL)
	{
		if(strcmp(aux->nome,nomePesquisado) == 0)
		{
			break;
		}
		else
		{
			aux = aux->proximo;
		}
	}
	
	if(aux != NULL)
	{
		printf("Usuario :%s",aux->nome);
		printf("\nSalario :%f",aux->salario);
		getch();
	}
	else
	{
		printf("Usuario nao encontrado");
		getch();
	}
}

void insereOrdemCrescenteNome(TLista *p, TFuncionario *elemento)
{
	TFuncionario *atual,*anterior;
	TFuncionario *elementoNovo = new TFuncionario;
	strcpy(elementoNovo->nome,elemento->nome); 
	elementoNovo->salario = elemento->salario;
	elementoNovo->proximo = NULL;
	
	if(p->Inicio == NULL)
	{
		p->Inicio = elementoNovo; 
		p->Fim = elementoNovo;
		return;	
	}	
	if(strcmp(elementoNovo->nome , p->Inicio->nome) == -1)
	{
		elementoNovo->proximo = p->Inicio;
		p->Inicio = elementoNovo;
	}
	else
	{
		if(strcmp(elementoNovo->nome , p->Fim->nome) == 1)
		{
			p->Fim->proximo = elementoNovo;
			p->Fim = elementoNovo;
		}
		else
		{
			atual = p->Inicio->proximo;
			anterior = p->Inicio;
			while(atual != NULL)
			{
				if(strcmp(elementoNovo->nome , atual->nome) == -1)
				{
					anterior->proximo = elementoNovo;
					elementoNovo->proximo = atual;
					return;
				}
				else
				{
					anterior = atual;
					atual = atual->proximo;	
				}
			}		
		}
	}
}

void ApresentaOrdemCrescenteDeNome(TLista *p)
{
	TLista l2;
	TFuncionario *contador;
	contador= p->Inicio;
	while(contador != NULL)
	{
		insereOrdemCrescenteNome(&l2,contador);
		contador=contador->proximo;
	}
	mostraLista(&l2);
}

void insereOrdemDecrescenteSalario(TLista *p, TFuncionario *elemento)
{
	TFuncionario *atual,*anterior;
	TFuncionario *elementoNovo = new TFuncionario;
	strcpy(elementoNovo->nome,elemento->nome); 
	elementoNovo->salario = elemento->salario;
	elementoNovo->proximo = NULL;
	
	if(p->Inicio == NULL)
	{
		p->Inicio = elementoNovo; 
		p->Fim = elementoNovo;
		return;
	}	
	if(elementoNovo->salario > p->Inicio->salario)
	{
		elementoNovo->proximo = p->Inicio;
		p->Inicio = elementoNovo;
	}
	else
	{
		if(elementoNovo->salario < p->Fim->salario)
		{
			p->Fim->proximo = elementoNovo;
			p->Fim = elementoNovo;
		}
		else
		{
			atual = p->Inicio->proximo;
			anterior = p->Inicio;
			while(atual != NULL)
			{
				if(elementoNovo->salario > atual->salario)
				{
					anterior->proximo = elementoNovo;
					elementoNovo->proximo = atual;
					return;
				}
				else
				{
					anterior = atual;
					atual = atual->proximo;	
				}
			}		
		}
	}
}

void ApresentaOrdemDescrecenteDeSalario(TLista *p)
{
	TLista l2;
	TFuncionario *contador;
	contador= p->Inicio;
	while(contador != NULL)
	{
		insereOrdemDecrescenteSalario(&l2,contador);
		contador=contador->proximo;
	}	
	mostraLista(&l2);
}

int main()
{
	char menu;
	TLista l1;
	IniciaLista(&l1);
	
	
	while(menu!= '0')
	{
		printf("Escolha uma opcao :");
		printf("\n 1- Cadastrar funcionario ");
		printf("\n 2- Consultar funcionario ");
		printf("\n 3- Apresentar funcionarios em ordem crescente de nome");
		printf("\n 4- Apresentar funcionarios em ordem decrescente de salario");
		printf("\n 5- Excluir funcionario ");
		printf("\n 0- Sair \n");
		scanf("%c",&menu);
		fflush(stdin);
		
		switch(menu)
		{
			case '1': AdicionaElemento(&l1); break;
			case '2': ConsultaElementoPeloNome(&l1); break;
			case '3': ApresentaOrdemCrescenteDeNome(&l1); break;
			case '4': ApresentaOrdemDescrecenteDeSalario(&l1); break;
			case '5': ExcluiElemento(&l1); break;
			case '6': mostraLista(&l1); break;
		}
		system("cls");
	}
}
