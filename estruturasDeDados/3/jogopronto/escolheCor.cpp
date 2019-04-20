#include "tipos.h"

char escolheCor()
{
	char tecla;
	tecla = getch();
	switch(tecla){
		case VERMELHO:
		case 'w':
		case 'W': tecla = VERMELHO;break;
		
		case AMARELO:
		case 's':
		case 'S': tecla = AMARELO;break;
		
		case VERDE:
		case 'a':
		case 'A': tecla = VERDE;break;
		
		case AZUL:
		case 'd':
		case 'D': tecla = AZUL;break;
	}
	return tecla;
}
