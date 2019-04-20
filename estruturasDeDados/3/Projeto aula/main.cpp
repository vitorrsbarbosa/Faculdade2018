#include "tipos.h"

int main(){
	char menu;
	TFila Fila;
	inicializaFila(&Fila);
	while(menu != '0'){
		printf("Escolha uma opcao :");
		printf("\n  1-Inserir elemento");
		printf("\n  2-Exluir elemento");
		printf("\n  3-Mostra fila");;
		printf("\n  0-Sair\n");
		scanf("%c",&menu);
		
		switch(menu){
			case '1': insereElemento(&Fila); break;
			case '2': excluiElemento(&Fila); break;
			case '3': mostraElemento(&Fila); break;	
		}
		system("cls");
	}
		
}
