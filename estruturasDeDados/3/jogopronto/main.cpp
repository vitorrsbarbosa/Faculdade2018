#include "tipos.h"

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
