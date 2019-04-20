#include "tipos.h"

void verificaListasIguais(TLista *pL1, TLista *pL2)
{
	TElemento *auxL1, *auxL2;
	auxL1 = pL1->inicio;
	auxL2 = pL2->inicio;
	
	while(auxL1 != NULL && auxL2 != NULL)
	{
		if(auxL1->info == auxL2->info)
		{
			auxL1 = auxL1->proximo
			auxL2 = auxL2->proximo
		}
		else
		{
			auxL1 = NULL;
		}
	}
	if (auxL1 == auxL2)
	printf("\n Listas iguais");
	else
	{
		printf("\n Listas diferentes");
	}
}

