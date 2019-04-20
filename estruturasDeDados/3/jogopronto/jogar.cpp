#include "tipos.h"

bool jogar(TFila *p, Jogador *j)
{
	TElemento *aux;
	aux = p->inicio;
	
	while(aux != NULL){
		
		j->tecla = escolheCor();
		
		mostraCor(j->tecla);
		
		if(j->tecla == aux->cor){
			aux = aux->proximo;
			j->placar += 20;
		}
		else{
			break;
		}
	}
	
	if(aux == NULL)
	{
		fimBrilho(true);	
		return false;
	}
	else
	{
		fimBrilho(false);	
		return true;
	}
}
