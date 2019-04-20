#include "tipos.h"

void mostraCor(char cor)
{
	desenhaCor(cor,true);
	tocaSom(cor);
	Sleep(VELOCIDADE);
	desenhaCor(cor,false);
	Sleep(200);
}
