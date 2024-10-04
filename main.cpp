#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 3

int main()
{
setlocale(LC_ALL,"portuguese");
{/*
    Faça um programa que monte um tabuleiro de tamanho N x N (usando #define).
    Você irá simular um jogo entre dois jogadores, que no seu turno coloca uma peça
    sua no tabuleiro em qualquer espaço vazio. O objetivo do jogo é fazer três
    peças em sequência: horizontal, vertical ou diagonal.
    Oprograma deverá ser feito sem a criação de funções e usando matriz. A
    exibição do tabuleiro (para #define N 5) pode ser algo similar a isso:

    +---+---+---+---+---+
    |   |   |   |   |   |  1
    +---+---+---+---+---+
    |   |   |   |   |   |  2
    +---+---+---+---+---+
    |   |   |   |   |   |  3
    +---+---+---+---+---+
    |   |   |   |   |   |  4
    +---+---+---+---+---+
    |   |   |   |   |   |  5
    +---+---+---+---+---+
      a   b   c   d   e
*/}
    int i,j,tab[N][N],contv,contemp,h,a=0,b=0,d=0,e=1,game=0;
    char coor[2*N],player1[30],player2[30],lastgame[4]="yes",newgame[4]="yes",checkgame[3]="no";

    printf("!!! Welcome to the best tic tac toe !!!");
    printf("\n\n");
    printf("	+======================================================================================+\n");
    printf("	|            Moves are made based on the board coordinates, ex: a3                     |\n");
	printf("	|            Player 1 will have 'X and Player 2 will have 'O' 		               |\n");
	printf("	|    Whoever makes a line horizontal, vertical or diagonal with 3 characters wins      |\n");	
	printf("	+======================================================================================+\n");
	printf("\n\n");
	system("pause");
	
while(strcmp(lastgame,newgame)==0){
	system("cls");
	contemp=N*N;
	h=0;
	
    //Fill table
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            tab[i][j]=0;
        }
    }
    
    printf("What's your name Player 1? ");
    scanf("%s",&player1);
    
    printf("What's your name Player 2? ");
    scanf("%s",&player2);
    
    system ("cls");
    
    printf("!!! Estão prontos?? Se sim !!! \n");
    system ("pause");
    
    
	//Print board
	system ("cls");
	printf("!!! GO !!! \n\n");
	
    for(i=0;i<N;i++){
    	if(i==0) {
    		printf("   ");
			for(j=0;j<N;j++) printf("%d   ",(j+1));
		}
		printf("\n");
		printf(" ");
    	for(j=0;j<N;j++){
    		printf("+---");
    		if(j==N-1)printf("+");
		}
		printf("\n");
		printf("%c",(i+'a'));
		for(j=0;j<N;j++){
			if(tab[i][j]==0) {printf("|   "); if(j==N-1)printf("|");}
    		else if(tab[i][j]==1) {printf("| X "); if(j==N-1)printf("|");}
    		else if(tab[i][j]==2) {printf("| O "); if(j==N-1)printf("|");}
		}
		if(i==N-1){
			printf("\n");
			printf(" ");
			for(j=0;j<N;j++){
	    		printf("+---");
	    		if(j==N-1)printf("+");
			}
		}
	}


while(h==0 && contemp!=0){



	//Player 1´s moves
	
	do{
	printf("\nYour turn, %s ",player1);
	scanf("%s",&coor);
	a=coor[0]-'a';
	b=atoi(coor+0+1)-1;
	if(a>=N || b>=N) printf("\nYour move does not match the size of the board!!\nPlese, play again!!\n");
	}while(a>=N || b>=N);

	if(tab[a][b]==0) {
	tab[a][b]=1;
	contemp--;
	
	//Print Board
	system("cls");
    for(i=0;i<N;i++){
    	if(i==0) {
    		printf("   ");
			for(j=0;j<N;j++) printf("%d   ",(j+1));
		}
		printf("\n");
		printf(" ");
    	for(j=0;j<N;j++){
    		printf("+---");
    		if(j==N-1)printf("+");
		}
		printf("\n");
		printf("%c",(i+'a'));
		for(j=0;j<N;j++){
			if(tab[i][j]==0) {printf("|   "); if(j==N-1)printf("|");}
    		else if(tab[i][j]==1) {printf("| X "); if(j==N-1)printf("|");}
    		else if(tab[i][j]==2) {printf("| O "); if(j==N-1)printf("|");}
		}
		if(i==N-1){
			printf("\n");
			printf(" ");
			for(j=0;j<N;j++){
	    		printf("+---");
	    		if(j==N-1)printf("+");
			}
		}
	}

	}
	else{
		d=0;
		while(d==0){
			system("cls");
			printf("\nInvalid Move!!\n\n Please, choose a coordinate that is not occupied!!\n");
			system("Pause");
			do{
				//Print Board
				system("cls");
			    for(i=0;i<N;i++){
			    	if(i==0) {
			    		printf("   ");
						for(j=0;j<N;j++) printf("%d   ",(j+1));
					}
					printf("\n");
					printf(" ");
			    	for(j=0;j<N;j++){
			    		printf("+---");
			    		if(j==N-1)printf("+");
					}
					printf("\n");
					printf("%c",(i+'a'));
					for(j=0;j<N;j++){
						if(tab[i][j]==0) {printf("|   "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==1) {printf("| X "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==2) {printf("| O "); if(j==N-1)printf("|");}
					}
					if(i==N-1){
						printf("\n");
						printf(" ");
						for(j=0;j<N;j++){
				    		printf("+---");
				    		if(j==N-1)printf("+");
						}
					}
				}
				printf("\nYour move, %s ",player1);
				scanf("%s",&coor);
				a=coor[0]-'a';
				b=atoi(coor+0+1)-1;
				if(a>=N || b>=N) printf("\nYour move does not match the size of the board!!\nPlease, play again!!\n");
			}while(a>=N || b>=N);
		
			if(tab[a][b]==0){
			tab[a][b]=1;
			contemp--;
			d=1; //Checks if the coordinate is occupied
				system("cls");
				//Print Board
			    for(i=0;i<N;i++){
			    	if(i==0) {
			    		printf("   ");
						for(j=0;j<N;j++) printf("%d   ",(j+1));
					}
					printf("\n");
					printf(" ");
			    	for(j=0;j<N;j++){
			    		printf("+---");
			    		if(j==N-1)printf("+");
					}
					printf("\n");
					printf("%c",(i+'a'));
					for(j=0;j<N;j++){
						if(tab[i][j]==0) {printf("|   "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==1) {printf("| X "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==2) {printf("| O "); if(j==N-1)printf("|");}
					}
					if(i==N-1){
						printf("\n");
						printf(" ");
						for(j=0;j<N;j++){
				    		printf("+---");
				    		if(j==N-1)printf("+");
						}
					}
				}
			}
		}
	}
	
	//Checks if all coordinates are occupied
	if(contemp==0){
			printf("\n\n+===========================================================+");
			printf("    |                                                           |\n");
			printf("    |              DRAW, All the players were great             |\n");
			printf("    |                                                           |\n");
			printf("\n\n+===========================================================+");
			
			system("pause");
			system("cls");
			do{
			system("cls");
			printf("Do you still want to continue playing(yes or no)? ");
			scanf("%s",&newgame);
			}while(strcmp(lastgame,newgame)!=0 && strcmp(checkgame,newgame)!=0);
	break;
	}
	
		//Checks if Player 1 won
	
		//Checks Horizontal
		for(j=0;j+2<N;j++){
			if(tab[a][j]==1 && tab[a][j+1]==1 && tab[a][j+2]==1)h=1 ;
		}
		//Checks Vertical
		if(h==0){
			for(i=0;i+2<N;i++){
				if(tab[i][b]==1 && tab[i+1][b]==1 && tab[i+2][b]==1)h=1;
			}
		}
		//Checks Diagonal



		if(h==1){
			system("cls");
			printf("      +========="); for(i=0;i<4+strlen(player1);i++){printf("=");	}printf("=========+\n");
			printf("      |         "); for(i=0;i<4+strlen(player1);i++){printf(" "); }printf("         |\n"); 
			printf("      |         "); printf("%s WINS", player1);printf("        |\n"); 
			printf("      |         "); for(i=0;i<4+strlen(player1);i++){printf(" "); }printf("         |\n"); 
			printf("      +========="); for(i=0;i<4+strlen(player1);i++){printf("=");	}printf("=========+\n");

			system("pause");
			system("cls");
			do{
			system("cls");
			printf("Do you still want to continue playing(yes or no)? ");
			scanf("%s",&newgame);
			}while(strcmp(lastgame,newgame)!=0 && strcmp(checkgame,newgame)!=0);
	break;
	}
		
	
	
	
	
	
	//Player 2´s moves
	
	do{
	printf("\nYour turn, %s ",player2);
	scanf("%s",&coor);
	a=coor[0]-'a';
	b=atoi(coor+0+1)-1;
	if(a>=N || b>=N) printf("\nYour move does not match the size of the board!!\nPlese, play again!!\n");
	}while(a>=N || b>=N);

	if(tab[a][b]==0) {
	tab[a][b]=2;
	contemp--;
	
	//Print Board
	system("cls");
    for(i=0;i<N;i++){
    	if(i==0) {
    		printf("   ");
			for(j=0;j<N;j++) printf("%d   ",(j+1));
		}
		printf("\n");
		printf(" ");
    	for(j=0;j<N;j++){
    		printf("+---");
    		if(j==N-1)printf("+");
		}
		printf("\n");
		printf("%c",(i+'a'));
		for(j=0;j<N;j++){
			if(tab[i][j]==0) {printf("|   "); if(j==N-1)printf("|");}
    		else if(tab[i][j]==1) {printf("| X "); if(j==N-1)printf("|");}
    		else if(tab[i][j]==2) {printf("| O "); if(j==N-1)printf("|");}
		}
		if(i==N-1){
			printf("\n");
			printf(" ");
			for(j=0;j<N;j++){
	    		printf("+---");
	    		if(j==N-1)printf("+");
			}
		}
	}

	}
	else{
		d=0;
		while(d==0){
			system("cls");
			printf("\nInvalid Move!!\n\n Please, choose a coordinate that is not occupied!!\n");
			system("Pause");
			do{
				//Print Board
				system("cls");
			    for(i=0;i<N;i++){
			    	if(i==0) {
			    		printf("   ");
						for(j=0;j<N;j++) printf("%d   ",(j+1));
					}
					printf("\n");
					printf(" ");
			    	for(j=0;j<N;j++){
			    		printf("+---");
			    		if(j==N-1)printf("+");
					}
					printf("\n");
					printf("%c",(i+'a'));
					for(j=0;j<N;j++){
						if(tab[i][j]==0) {printf("|   "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==1) {printf("| X "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==2) {printf("| O "); if(j==N-1)printf("|");}
					}
					if(i==N-1){
						printf("\n");
						printf(" ");
						for(j=0;j<N;j++){
				    		printf("+---");
				    		if(j==N-1)printf("+");
						}
					}
				}
				printf("\nYour move, %s ",player2);
				scanf("%s",&coor);
				a=coor[0]-'a';
				b=atoi(coor+0+1)-1;
				if(a>=N || b>=N) printf("\nYour move does not match the size of the board!!\nPlease, play again!!\n");
			}while(a>=N || b>=N);
		
			if(tab[a][b]==0){
			tab[a][b]=2;
			contemp--;
			d=1; //Checks if the coordinate is occupied
				system("cls");
				//Print Board
			    for(i=0;i<N;i++){
			    	if(i==0) {
			    		printf("   ");
						for(j=0;j<N;j++) printf("%d   ",(j+1));
					}
					printf("\n");
					printf(" ");
			    	for(j=0;j<N;j++){
			    		printf("+---");
			    		if(j==N-1)printf("+");
					}
					printf("\n");
					printf("%c",(i+'a'));
					for(j=0;j<N;j++){
						if(tab[i][j]==0) {printf("|   "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==1) {printf("| X "); if(j==N-1)printf("|");}
			    		else if(tab[i][j]==2) {printf("| O "); if(j==N-1)printf("|");}
					}
					if(i==N-1){
						printf("\n");
						printf(" ");
						for(j=0;j<N;j++){
				    		printf("+---");
				    		if(j==N-1)printf("+");
						}
					}
				}
			break;
			}
		}
	}
	//Check if player 2 won
	
		//Checks Horizontal
		for(j=0;j+2<N;j++){
			if(tab[a][j]==2 && tab[a][j+1]==2 && tab[a][j+2]==2)h=1 ;
		}
		
		//Checks Vertical
		if(h==0){
			for(i=0;i+2<N;i++){
				if(tab[i][b]==2 && tab[i+1][b]==2 && tab[i+2][b]==2)h=1;
			}
		}
		//Checks Diagonal
		if(h==0){
			for(i=0,j=0;i+2<N;i++,j++){
		}
		}
		
		
		
		

		if(h==1){
			system("cls");
			printf("      +========="); for(i=0;i<4+strlen(player2);i++){printf("=");	}printf("=========+\n");
			printf("      |         "); for(i=0;i<4+strlen(player2);i++){printf(" "); }printf("         |\n"); 
			printf("      |         "); printf("%s WINS", player2);printf("        |\n"); 
			printf("      |         "); for(i=0;i<4+strlen(player2);i++){printf(" "); }printf("         |\n"); 
			printf("      +========="); for(i=0;i<4+strlen(player2);i++){printf("=");	}printf("=========+\n");
			
			system("pause");
			system("cls");
			do{
			system("cls");
			printf("Do you still want to continue playing(yes or no)? ");
			scanf("%s",&newgame);
			}while(strcmp(lastgame,newgame)!=0 && strcmp(checkgame,newgame)!=0);
		break;
		}
	

}
    
    

}
    
    

    return 0;
}

