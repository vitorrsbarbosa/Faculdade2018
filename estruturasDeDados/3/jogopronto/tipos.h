#define _tipos.h_
#ifndef _tipos.h_

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.c>
#include <conio.h>
#include <time.h>

#define VERMELHO 	'1'  
#define AZUL		'4'
#define VERDE 		'3'
#define AMARELO		'2'
#define VELOCIDADE   300

typedef struct TipoElemento
{
	char cor;
	TipoElemento *proximo;
}TElemento;

typedef struct TipoFila
{
	TElemento *inicio;
	TElemento *fim;
	int		   tamanho;
}TFila;

struct Jogador
{
	int placar;
	char tecla;	
};

void sorteiaEInsereCor(TFila *p);
bool jogar(TFila *p,Jogador *j);
void mostrarSequencia(TFila *p);
void iniciaJogo(TFila *p);
void sorteiaEInsereCorAvancado(TFila *p,bool destroi);
void mostraCor(char cor);
void hidecursor();
void fimBrilho(bool perdeu);
void tocaSom(char tecla);
void destroiLista(TFila *p);
void desenhaCor(char cor, bool ligado);
void ligaDesliga(bool liga);
int menu();
char escolheCor();

#endif
