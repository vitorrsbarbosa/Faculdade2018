#include "tipos.h"

void tocaSom(char tecla)
{
	switch(tecla){
		case VERMELHO: Beep(132.000,VELOCIDADE);break;
		case AMARELO: Beep(148.104,VELOCIDADE);break;
		case VERDE: Beep(166.320,VELOCIDADE);break;
		case AZUL: Beep(176.220,VELOCIDADE);break;
	}
}
