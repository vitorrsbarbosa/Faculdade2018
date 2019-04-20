#include "tipos.h"

void sorteiaEInsereCor(TFila *p)
{
	TElemento *novoElemento = new TElemento;
	novoElemento->proximo = NULL;
	
	int valor = (rand() % 4) +1;
	Sleep(100);
	
	switch(valor){
		case 1: novoElemento->cor = VERMELHO; break;
		case 2: novoElemento->cor = AMARELO; break;
		case 3: novoElemento->cor = VERDE; break;
		case 4: novoElemento->cor = AZUL; break;
	}
	
	if(p->inicio == NULL){
		p->inicio = novoElemento;
		p->fim = novoElemento;
	}else{
		p->fim->proximo = novoElemento;
		p->fim = novoElemento;
	}
}
