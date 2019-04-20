#include "tipos.h"
void excluiElemento(TFila *p)
{
	if(p->inicio == NULL){
		printf("Fila Vazia");
		getch();
	}
	else{
		TElemento *aux;
		printf("Valor excluido : %d",p->inicio->valor);
		getch();
		aux = p->inicio;
		p->inicio = p->inicio->proximo;
		free(aux);
	}
	
	
}
