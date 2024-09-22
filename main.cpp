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
    char coor[2*N],player1[30],player2[30],lastgame[4]="sim",newgame[4]="sim",checkgame[4]="nao";

    printf("!!! BEM VINDO ALGO MELHOR JOGO DA VELHA !!!");
    printf("\n\n");
    printf("	| As jogadas são feitas a partir das coordenadas do tabuleiro, ex: a3 |\n");
	printf("	| O jogador ficará com 'X'' e o Jogador 2 com 'O'' 		      |");
	printf("\n\n");
	system("pause");
	
while(strcmp(lastgame,newgame)==0){
	system("cls");
	contemp=N*N;
	h=0;
	
    //preencher tabela
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            tab[i][j]=0;
        }
    }
    
    printf("Qual o nome do Jogador 1? ");
    scanf("%s",&player1);
    
    printf("Qual o nome do Jogador 2? ");
    scanf("%s",&player2);
    
    system ("cls");
    
    printf("!!! Estão prontos?? Se sim !!! \n");
    system ("pause");
    
    
	//Imprimir tabeiro
	system ("cls");
	printf("!!! COMECEM !!! \n\n");
	
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



	//Jogadas do Jogador 1
	
	do{
	printf("\nQual é sua jogada, %s? ",player1);
	scanf("%s",&coor);
	a=coor[0]-'a';
	b=coor[1]-'1';
	if(a>=N || b>=N) printf("\nSua jogada não é correspondente ao tamanho do tabuleiro!!\nJogue novamente!!\n");
	}while(a>=N || b>=N);

	if(tab[a][b]==0) {
	tab[a][b]=1;
	contemp--;
	
	//Imprimir tabuleeiro
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
			printf("\nJogada inválida!!\n\n Por favor, escolha uma coordenada não ocupada!!\n");
			do{
			printf("Qual é sua jogada, %s? ",player1);
			scanf("%s",&coor);
			a=coor[0]-'a';
			b=coor[1]-'1';
			if(a>=N || b>=N) printf("\nSua jogada não é correspondente ao tamanho do tabuleiro!!\nJogue novamente!!\n");
			}while(a>=N || b>=N);
		
			if(tab[a][b]==0){
			tab[a][b]=1;
			contemp--;
			d=1;
				system("cls");
				//Imprimir tabuleeiro
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
	
	//Validar se o jogo acabou a partir de todas as peças ocupadas
	if(contemp==0){
			printf("\n\n!!! DEU VELHA, NINGUÉM FOI BOM O SUFICIENTE !!!\n\n");
			system("pause");
			system("cls");
			do{
			system("cls");
			printf("Vocês ainda querem continuar jogando?(sim ou nao, escreva minúsculo e dessa forma)? ");
			scanf("%s",&newgame);
			}while(strcmp(lastgame,newgame)!=0 && strcmp(checkgame,newgame)!=0);
	break;
	}
	
		//Validar se venceu se Jogaodor 1 venceu
	
		//Validando Horizontal
		for(j=0,contv=0;j<N;j++){
			if(tab[a][j]==1 && tab[a][j+1]==1)contv++;
		}
		if(contv==2)h=1;
		
		//Validando Vertical
		if(h==0){
			for(i=0,contv=0;i<N;i++){
				if(tab[i][b]==1 && tab[i+1][b]==1)contv++;
			}
			if(contv==2)h=1;
		}
		//Validando Diagonal
		/*
		contv=0;
		if(h==0){
			if(tab[a][b]==1 && tab[a+1][b-1]==1){
				contv++;
				if(tab[a+1][b-1]==1 && tab[a+2][b-2]==1) {contv++; h=1;}
			}
			if(h==0){
				contv=0;
				if(tab[a][b]==2 && tab[a-1][b-1]==2){
					contv++;
					if(tab[a-1][b-1]==1 && tab[a-2][b-2]==1) {contv++; h=1;}
				}
			}
			if(h==0){
				contv=0;
				if(tab[a][b]==1 && tab[a+1][b+1]==1){
					contv++;
					if(tab[a+1][b+1]==1 && tab[a+2][b+2]==1) {contv++; h=1;}
				}
			}
			if(h==0){
				contv=0;
				if(tab[a][b]==1 && tab[a-1][b+1]==1){
					contv++;
					if(tab[a-1][b+1]==1 && tab[a-2][b+2]==1) {contv++; h=1;}
				}
			}
		}
		if(h==1){
			printf("\n\n!!! VITÓRIA DE %s !!!\n",player1);
			break;
		}
	*/
	
	
	
	
	//Jogadas do Jogador 2
	
	
	do{
	printf("\nQual é sua jogada, %s? ",player2);
	scanf("%s",&coor);
	a=coor[0]-'a';
	b=coor[1]-'1';
	if(a>=N || b>=N) printf("\nSua jogada não é correspondente ao tamanho do tabuleiro!!\nJogue novamente!!\n");
	}while(a>=N || b>=N);

	if(tab[a][b]==0) {
	tab[a][b]=2;
	contemp--;
	
	//Imprimir tabuleeiro
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
		while(d==0){
			printf("\nJogada inválida!!\n\n Por favor, escolha uma coordenada não ocupada!!\n");
			do{
			printf("Qual é sua jogada, %s? ",player2);
			scanf("%s",&coor);
			a=coor[0]-'a';
			b=coor[1]-'1';
			if(a>=N || b>=N) printf("\nSua jogada não é correspondente ao tamanho do tabuleiro!!\nJogue novamente!!\n");
			}while(a>=N || b>=N);
		
			if(tab[a][b]==0){
			tab[a][b]=2;
			contemp--;
				system("cls");
				//Imprimir tabuleeiro
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
	//Validar se venceu se Jogaodor 2 venceu
	
		//Validando Horizontal
		for(j=0,contv=0;j<N;j++){
			if(tab[a][j]==2 && tab[a][j+1]==2)contv++;
		}
		if(contv==2)h=1;
		
		//Validando Vertical
		if(h==0){
			for(i=0,contv=0;i<N;i++){
				if(tab[i][b]==2 && tab[i+1][b]==2)contv++;
			}
			if(contv==2)h=1;
		}
		//Validando Diagonal
		/*
		contv=0;
		if(h==0){
			if(tab[a][b]==2 && tab[a+1][b-1]==2){
				contv++;
				if(tab[a+1][b-1]==2 && tab[a+2][b-2]==2) {contv++; h=1;}
			}
			if(h==0){
				contv=0;
				if(tab[a][b]==2 && tab[a-1][b-1]==2){
					contv++;
					if(tab[a-1][b-1]==2 && tab[a-2][b-2]==2) {contv++; h=1;}
				}
			}
			if(h==0){
				contv=0;
				if(tab[a][b]==2 && tab[a+1][b+1]==2){
					contv++;
					if(tab[a+1][b+1]==2 && tab[a+2][b+2]==2) {contv++; h=1;}
				}
			}
			if(h==0){
				contv=0;
				if(tab[a][b]==2 && tab[a-1][b+1]==2){
					contv++;
					if(tab[a-1][b+1]==2 && tab[a-2][b+2]==2) {contv++; h=1;}
				}
			}
		}
		if(h==1){
			printf("!!! VITÓRIA DE %s !!!",player2);
		}
	
	*/
}
    
    

}
    
    

    return 0;
}

