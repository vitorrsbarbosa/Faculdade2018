#include "tipos.h"

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
