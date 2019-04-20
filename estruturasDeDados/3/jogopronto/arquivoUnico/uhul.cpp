#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.c>
#include <conio.h>
#include <time.h>
////////////////////////////////////////////
#define VERMELHO 	'1'  
#define AZUL		'4'
#define VERDE 		'3'
#define AMARELO		'2'
#define VELOCIDADE   300
////////////////////////////////////////////
typedef struct TipoElemento
{
	char cor;
	TipoElemento *proximo;
}TElemento;
////////////////////////////////////////////
typedef struct TipoFila
{
	TElemento *inicio;
	TElemento *fim;
	int		   tamanho;
}TFila;
////////////////////////////////////////////
struct Jogador
{
	int placar;
	char tecla;	
};
////////////////////////////////////////////
void sorteiaEInsereCor(TFila *p);
bool jogar(TFila *p,Jogador *j);
void mostrarSequencia(TFila *p);
void iniciaJogo(TFila *p);
void sorteiaEInsereCorAvancado(TFila *p,bool destroi);
void mostraCor(char cor);
void hidecursor();
void fimBrilho(bool perdeu);
void tocaSom(char tecla);
void destroiLista(TFila *p);
void desenhaCor(char cor, bool ligado);
void ligaDesliga(bool liga);
int menu();
char escolheCor();
////////////////////////////////////////////
void iniciaJogo(TFila *p)
{
	p->inicio = NULL;
	p->fim = NULL;
	p->tamanho=0;
	system("mode con:cols=60 lines=22");
}
////////////////////////////////////////////
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
////////////////////////////////////////////
char escolheCor()
{
	char tecla;
	tecla = getch();
	switch(tecla){
		case VERMELHO:
		case 'w':
		case 'W': tecla = VERMELHO;break;
		
		case AMARELO:
		case 's':
		case 'S': tecla = AMARELO;break;
		
		case VERDE:
		case 'a':
		case 'A': tecla = VERDE;break;
		
		case AZUL:
		case 'd':
		case 'D': tecla = AZUL;break;
	}
	return tecla;
}
////////////////////////////////////////////
void destroiLista(TFila *p)
{
	if(p->inicio == NULL){return;}
	TElemento *aux;
	aux = p->inicio;
	p->inicio = p->inicio->proximo;
	
	free(aux);
	if(p->fim != p->inicio){ //Inicio é diferente do fim
		destroiLista(p);//Mando distruir de novo
	}else{//Se nao, zera a lista
		aux = p->inicio;
		p->inicio = NULL;
		p->fim = NULL;
		free(aux);
	}
}
////////////////////////////////////////////
void desenhaCor(char cor, bool ligado)
{	
	int espacamentoX = 10;
	int espacamentoY = 2;
	switch(cor){
		case VERMELHO:
			if(ligado){
				textbackground(4+8);	
			}	
			else{
				textbackground(4);	
			}		
			
			gotoxy(espacamentoX + 13,espacamentoY );printf("              ");
			gotoxy(espacamentoX + 13,espacamentoY +1);printf("              ");
			gotoxy(espacamentoX + 10,espacamentoY +1);printf("                    ");
			gotoxy(espacamentoX + 8,espacamentoY +2);printf("                        ");
			gotoxy(espacamentoX + 8,espacamentoY +3);printf("                        ");
			gotoxy(espacamentoX + 10,espacamentoY +4);printf("                    ");
			gotoxy(espacamentoX + 12,espacamentoY +5);printf("                ");
			gotoxy(espacamentoX + 14,espacamentoY +6);printf(" ");
			gotoxy(espacamentoX + 25,espacamentoY +6);printf(" ");	
			break;
			
		case AMARELO://Parte Inferior
			if(ligado){
				textbackground(6+8);	
			}	
			else{
				textbackground(6);	
			}
			gotoxy(espacamentoX + 25,espacamentoY +12);printf(" ");
			gotoxy(espacamentoX + 14,espacamentoY +12);printf(" ");
			gotoxy(espacamentoX + 12,espacamentoY +13);printf("                ");
			gotoxy(espacamentoX + 10,espacamentoY +14);printf("                    ");
			gotoxy(espacamentoX + 8,espacamentoY +15);printf("                        ");
			gotoxy(espacamentoX + 8,espacamentoY +16);printf("                        ");
			gotoxy(espacamentoX + 10,espacamentoY +17);printf("                    ");
			gotoxy(espacamentoX + 13,espacamentoY +18);printf("              ");
			break;
			
		case VERDE://Parte Esquerda
			if(ligado){
				textbackground(2+8);	
			}	
			else{
				textbackground(2);	
			}
			gotoxy(espacamentoX + 6,espacamentoY +3);printf("  ");
			gotoxy(espacamentoX + 5,espacamentoY +4);printf("     ");
			gotoxy(espacamentoX + 4,espacamentoY +5);printf("        ");
			gotoxy(espacamentoX + 3,espacamentoY +6);printf("           ");
			gotoxy(espacamentoX + 2,espacamentoY +7);printf("            ");
			gotoxy(espacamentoX + 2,espacamentoY +8);printf("           ");
			gotoxy(espacamentoX + 2,espacamentoY +9);printf("           ");
			gotoxy(espacamentoX + 2,espacamentoY +10);printf("           ");
			gotoxy(espacamentoX + 2,espacamentoY +11);printf("            ");
			gotoxy(espacamentoX + 3,espacamentoY +12);printf("           ");
			gotoxy(espacamentoX + 4,espacamentoY +13);printf("        ");
			gotoxy(espacamentoX + 5,espacamentoY +14);printf("     ");
			gotoxy(espacamentoX + 6,espacamentoY +15);printf("  ");
			break;
		
		
		case AZUL://Parte Direita
			if(ligado){
				textbackground(1+8);	
			}	
			else{
				textbackground(1);	
			}
			gotoxy(espacamentoX + 32,espacamentoY +3);printf("  ");
			gotoxy(espacamentoX + 30,espacamentoY +4);printf("     ");
			gotoxy(espacamentoX + 28,espacamentoY +5);printf("        ");
			gotoxy(espacamentoX + 26,espacamentoY +6);printf("           ");
			gotoxy(espacamentoX + 26,espacamentoY +7);printf("            ");
			gotoxy(espacamentoX + 27,espacamentoY +8);printf("           ");
			gotoxy(espacamentoX + 27,espacamentoY +9);printf("           ");
			gotoxy(espacamentoX + 27,espacamentoY +10);printf("           ");
			gotoxy(espacamentoX + 26,espacamentoY +11);printf("            ");
			gotoxy(espacamentoX + 26,espacamentoY +12);printf("           ");
			gotoxy(espacamentoX + 28,espacamentoY +13);printf("        ");
			gotoxy(espacamentoX + 30,espacamentoY +14);printf("     ");
			gotoxy(espacamentoX + 32,espacamentoY +15);printf("  ");
			break;
	}
	
	gotoxy(29,25);
	textbackground(BLACK);
}
////////////////////////////////////////////
void fimBrilho(bool perdeu)
{
	ligaDesliga(true);
	Sleep(500);
	if(perdeu){Beep(247500,VELOCIDADE);}else{Beep(198000,VELOCIDADE);}
	ligaDesliga(false);
	Sleep(500);
}
////////////////////////////////////////////
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
////////////////////////////////////////////
void ligaDesliga(bool liga)
{
	desenhaCor(VERMELHO,liga);
	desenhaCor(AMARELO,liga);
	desenhaCor(VERDE,liga);
	desenhaCor(AZUL,liga);
}
////////////////////////////////////////////
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
////////////////////////////////////////////
void mostraCor(char cor)
{
	desenhaCor(cor,true);
	tocaSom(cor);
	Sleep(VELOCIDADE);
	desenhaCor(cor,false);
	Sleep(200);
}
////////////////////////////////////////////
void mostrarSequencia(TFila *p)
{
	TElemento *aux;
	aux = p->inicio;
	
	while(aux != NULL){
		mostraCor(aux->cor);
		aux = aux->proximo;
	}	
}
////////////////////////////////////////////
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
////////////////////////////////////////////
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
////////////////////////////////////////////
void tocaSom(char tecla)
{
	switch(tecla){
		case VERMELHO: Beep(132.000,VELOCIDADE);break;
		case AMARELO: Beep(148.104,VELOCIDADE);break;
		case VERDE: Beep(166.320,VELOCIDADE);break;
		case AZUL: Beep(176.220,VELOCIDADE);break;
	}
}
////////////////////////////////////////////
int main()
{
	bool gameOver = false;
	system("mode con:cols=130 lines=22");
	int modoDeJogo = menu();
	TFila filaDeCores;
	srand((unsigned) time(NULL));
	Jogador player;
	player.placar = 0;
	
	
	iniciaJogo(&filaDeCores);
	ligaDesliga(false);
	
	while(!gameOver && modoDeJogo != 5){
		
		switch(modoDeJogo){
			case 1:sorteiaEInsereCor(&filaDeCores);break;
			case 2:sorteiaEInsereCorAvancado(&filaDeCores,true);break;//Avançado
			case 3:sorteiaEInsereCorAvancado(&filaDeCores,false);break;//Dificil
			case 4:break;//Sei la
		}
		
		mostrarSequencia(&filaDeCores);
		
		if(kbhit()){
			while(kbhit()){
				getch();
			}
		}
		gameOver = jogar(&filaDeCores,&player);
	}	
	
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n			Seu placar e :%d",player.placar);
}

