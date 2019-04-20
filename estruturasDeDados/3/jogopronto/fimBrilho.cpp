#include "tipos.h"

void fimBrilho(bool perdeu)
{
	ligaDesliga(true);
	Sleep(500);
	if(perdeu){Beep(247500,VELOCIDADE);}else{Beep(198000,VELOCIDADE);}
	ligaDesliga(false);
	Sleep(500);
}
