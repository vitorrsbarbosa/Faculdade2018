#include "tipos.h"

int main()
{
	
	TP p1,p2,p3;
	int mover;
	
	printf("\n	use as setas do teclado para escolher uma das pilhas");
	printf("\n	use o espaco para selecionar a pilha");
	
	scanf("%d",&mover);	
	switch(mover)
	{
		
		case 1: movimento(TP *p);
			{
				
			}
			break; //mover para cima
		case 2: movimento(TP *p);break; //mover para esquerda
		case 3: movimento(TP *p);break; //mover para direita
		case 4: movimento(TP *p);break; //mover para baixo
		case 5: movimento(TP *p);break; //selecionar peça
		case 6: empilhar(TP *p); break; //andar entre as pilhas
	
	}
		
}
