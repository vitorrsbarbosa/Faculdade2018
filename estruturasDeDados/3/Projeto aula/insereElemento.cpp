#include "tipos.h"
void insereElemento(TFila *p)
{
	TElemento *novoElemento = new TElemento;
	printf("Informe o valor para o novo elemento:");
	scanf("%d", &novoElemento->valor);
	
	novoElemento->proximo = NULL;
	
	if(p->inicio == NULL){
		p->inicio = novoElemento;
		p->fim    = novoElemento;
	}
	else{
		p->fim->proximo = novoElemento;
		p->fim = novoElemento;
	}
	
}
