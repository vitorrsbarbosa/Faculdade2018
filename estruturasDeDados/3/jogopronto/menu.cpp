#include "tipos.h"

int menu()
{
	int posicaoMenu = 1;
	char menu;
	hidecursor();
	
	printf("			         _              _            _              _      _                  _        \n");
	printf("			        /\\ \\           /\\ \\         /\\ \\     _     /\\ \\   /\\_\\               / /\\      \n");
	printf(" 			       /  \\ \\         /  \\ \\       /  \\ \\   /\\_\\   \\ \\ \\ / / /         _    / /  \\     \n");
	printf("			      / /\\ \\_\\       / /\\ \\ \\     / /\\ \\ \\_/ / /   /\\ \\_\\\\ \\ \\__      /\\_\\ / / /\\ \\__  \n");
	printf(" 			     / / /\\/_/      / / /\\ \\_\\   / / /\\ \\___/ /   / /\\/_/ \\ \\___\\    / / // / /\\ \\___\\ \n");
	printf("  			    / / / ______   / /_/_ \\/_/  / / /  \\/____/   / / /     \\__  /   / / / \\ \\ \\ \\/___/ \n");
	printf("  			   / / / /\\_____\\ / /____/\\    / / /    / / /   / / /      / / /   / / /   \\ \\ \\       \n");
	printf("			  / / /  \\/____ // /\\____\\/   / / /    / / /   / / /      / / /   / / /_    \\ \\ \\      \n");
	printf("			 / / /_____/ / // / /______  / / /    / / /___/ / /__    / / /___/ / //_/\\__/ / /      \n");
	printf("			/ / /______\\/ // / /_______\\/ / /    / / //\\__\\/_/___\\  / / /____\\/ / \\ \\/___/ /       \n");
	printf("			\\/___________/ \\/__________/\\/_/     \\/_/ \\/_________/  \\/_________/   \\_____\\/        \n");
                                                                                       
	printf("\n\n\n\n\n\n");
	printf("                                                  1- Genius normal\n");
	printf("                                                  2- Genius Sortido\n");
	printf("                                                  3- Genius avancado \n");
	printf("                                                  4- Sei la\n");
	printf("                                                  5- Sair");
	textcolor(12);
	
	gotoxy(48,posicaoMenu + 17);
		printf(">>");
	while(menu != 13){
		menu = getch();
		gotoxy(48,posicaoMenu + 17);
		printf("  ");
		switch(menu){
			
			case '8':
			case 'w':
			case 'W':	if(posicaoMenu > 1){posicaoMenu--;}break;
			
			case '2':
			case '5':
			case 's':
			case 'S':	if(posicaoMenu < 5){posicaoMenu++;}break;
		}
		gotoxy(48,posicaoMenu + 17);
		printf(">>");		
	}
	
		textcolor(WHITE);
	
	return posicaoMenu;
}
