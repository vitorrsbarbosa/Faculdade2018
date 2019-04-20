#include "tipos.h"

void sorteiaEInsereCorAvancado(TFila *p,bool destroi)
{
	int contador;
	contador = ++p->tamanho;
	if(destroi){	
		destroiLista(p);
	}
	while(contador != 0){
		sorteiaEInsereCor(p);
		contador--;
	}
}
