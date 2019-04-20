#include "tipos.h"

int main()
{
	TLista L1, L2;
	inicializarLista(&L1);
	inicializarLista(&L2);

	int i;
	
	for (i=1 ; i<=5 ; i++)
		inserir (&L1, i);
		
	for (i=1 ; i<=5 ; i++)
		inserir (&L2, i);
	
	printf("Lista L1: \n");
	apresentar(&L1);
	printf("Lista L2: \n");
	apresentar(&L2);
	
	
	
}

