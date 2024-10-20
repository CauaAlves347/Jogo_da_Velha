#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define N 3

int main()
{
setlocale(LC_ALL,"portuguese");
srand(time(NULL)); // For randomness of loading

    int i,j,tab[N][N],contemp,h,a,b,e=0,lastgame=0,game=0;
    char coor[2*N],player1[30],player2[30];
	char transition[12];

while(lastgame==0){

	system("color 0F");
	//Loading screen
    for(int i=0;i<rand()%6;i++){
        system("cls");
        printf("Loading\no------");
        Sleep(50);
        system("cls");
        printf("Loading\n-o-----");
        Sleep(50);
        system("cls");
        printf("Loading\n--o----");
        Sleep(50);
        system("cls");
        printf("Loading\n---o---");
        Sleep(50);
        system("cls");
        printf("Loading\n----o--");
        Sleep(50);
        system("cls");
        printf("Loading\n-----o-");
        Sleep(50);
        system("cls");
        printf("Loading\n------o");
        Sleep(50);
    }
    system("cls");
    printf("Loading complete\n\n");
    sleep(1);

while(game==0){

do{
	system("cls");
    printf("\n\n");
    printf("	+==============================================================================+\n");
	printf("	|                          ");for(i=0;i<2;i++){printf("                          ");}printf("|\n");
    printf("	|                    !!! Welcome to the best tic tac toe !!!                   |\n");
	printf("	|                          ");for(i=0;i<2;i++){printf("                          ");}printf("|\n");
	printf("	|                                     new game                                 |\n");
	printf("	|                                    how to play                               |\n");
	printf("	|                                     credits                                  |\n");
	printf("	|                                       exit                                   |\n");
	printf("	|                          ");for(i=0;i<2;i++){printf("                          ");}printf("|\n");
	printf("	+==============================================================================+\n");
	printf("\n\n");
	printf("Please, write what you want to do the menu: \n\n");
	gets(transition);
	}while(strcmp(transition,"how to play")!=0 && strcmp(transition,"new game")!=0 && strcmp(transition,"credits")!=0 && strcmp(transition,"exit")!=0);

	if(strcmp(transition,"how to play")==0){

	//Loading screen
    for(int i=0;i<rand()%6;i++){
        system("cls");
        printf("Loading\no------");
        Sleep(50);
        system("cls");
        printf("Loading\n-o-----");
        Sleep(50);
        system("cls");
        printf("Loading\n--o----");
        Sleep(50);
        system("cls");
        printf("Loading\n---o---");
        Sleep(50);
        system("cls");
        printf("Loading\n----o--");
        Sleep(50);
        system("cls");
        printf("Loading\n-----o-");
        Sleep(50);
        system("cls");
        printf("Loading\n------o");
        Sleep(50);
    }
    system("cls");
    printf("Loading complete\n\n");
    sleep(1);

	system("cls");
    printf("\n\n");
    printf("	+================================================================================================+\n");
	printf("	|                                ");for(i=0;i<2;i++){printf("                                ");}printf("|\n");
	printf("	|    Based on the classic tic-tac-toe, this peculiar game consists of completing a row           |\n");
	printf("	|    of 3 identical characters whether diagonally, vertically or horizontally, however           |\n");
	printf("	|    not just on a 3x3 board but even on a 26X26 board, still with the same way of winning.      |\n");
	printf("	|    The moves are made indicating the coordinates of the board, such as: a3, d6;                |\n");
	printf("	|           Note: Player 1 will have 'X and Player 2 will have 'O'                               |\n");
	printf("	|                                ");for(i=0;i<2;i++){printf("                                ");}printf("|\n");
	printf("	+================================================================================================+\n");
	printf("\n\n");
	printf("Press any key to return to the menu...");
    getchar();
	getchar();

	}else if(strcmp(transition,"new game")==0 ){
	//Loading screen
	//Loading screen
    for(int i=0;i<rand()%4;i++){
        system("cls");
        printf("Loading\no-----");
        Sleep(50);
        system("cls");
        printf("Loading\n-o----");
        Sleep(50);
        system("cls");
        printf("Loading\n--o---");
        Sleep(50);
        system("cls");
        printf("Loading\n---o--");
        Sleep(50);
        system("cls");
        printf("Loading\n----o-");
        Sleep(50);
        system("cls");
        printf("Loading\n-----o");
        Sleep(50);
    }
    system("cls");
    printf("Loading complete\n\n");
    sleep(1);
    break;
	}else if(strcmp(transition,"credits")==0){
	//Loading screen
    for(int i=0;i<rand()%4;i++){
        system("cls");
        printf("Loading\no------");
        Sleep(50);
        system("cls");
        printf("Loading\n-o----");
        Sleep(50);
        system("cls");
        printf("Loading\n--o---");
        Sleep(50);
        system("cls");
        printf("Loading\n---o--");
        Sleep(50);
        system("cls");
        printf("Loading\n----o-");
        Sleep(50);
        system("cls");
        printf("Loading\n-----o");
        Sleep(50);
    }
    system("cls");
    printf("Loading complete\n\n");
    sleep(1);

	system("cls");
    printf("\n\n");
    printf("	+================================================================================================+\n");
	printf("	|                                ");for(i=0;i<2;i++){printf("                                ");}printf("|\n");
	printf("	|                    Made by Cauã Alves student of Computational Mathematics                     |\n");
	printf("	|                                ");for(i=0;i<2;i++){printf("                                ");}printf("|\n");
	printf("	+================================================================================================+\n");
	printf("\n\n");
	printf("Press any key to return to the menu...");
	getchar();
    getchar();

	}else if(strcmp(transition,"exit")==0){
	//Loading screen
    for(int i=0;i<rand()%4;i++){
        system("cls");
        printf("Loading\no-----");
        Sleep(50);
        system("cls");
        printf("Loading\n-o----");
        Sleep(50);
        system("cls");
        printf("Loading\n--o---");
        Sleep(50);
        system("cls");
        printf("Loading\n---o--");
        Sleep(50);
        system("cls");
        printf("Loading\n----o-");
        Sleep(50);
        system("cls");
        printf("Loading\n-----o");
        Sleep(50);
    }
    system("cls");
    printf("Loading complete\n\n");
    printf("Thank you for playing !!\n");
    sleep(1);
    return 0;
	}
}
	contemp=N*N;
	h=0;


    //Clean table
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            tab[i][j]=0;
       }
    }
    system ("cls");
    printf("What's your name Player 1? ");
    scanf("%s",&player1);

	system("cls");
    printf("What's your name Player 2? ");
    scanf("%s",&player2);

    system ("cls");

    printf("!!! Are you ready?? !!! \n");
	printf("Press any key to continue. . .");
	getchar();
	getchar();

while(h==0 && contemp!=0){

	//Player 1´s moves
	system("cls");
    system("color 0F");
    do{
        //Print Board
    system("cls");
    if(e==1)	system("color 0C");
    if(e==2)	system("color 0C");
    for(i=0;i<N;i++){
        if(i==0){
            printf("   ");
            for(j=0;j<N;j++)
            if(j<9) printf("%d   ",(j+1));
            else { printf("%d  ",(j+1));}
        }
		printf("\n");
		printf(" ");
    	for(j=0;j<N;j++){
    		printf("+---");
    		if(j==N-1)printf("+");
		}
		printf("\n");
		printf("%c",('a'+i));
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

        if(e==1) printf("\nInvalid Move!!\n\n Your move does not match the size of the board!!\n Please, play again!!\n");
        else if(e==2) printf("\nInvalid Move!!\n\n Please, choose a coordinate that is not occupied!!\n Please, play again!!\n");

        printf("\nYour move, %s ",player1);
        scanf("%s",&coor);
        a=coor[0]-'a';
        b=atoi(coor+0+1)-1;
        if(a>=N || b>=N) e=1;
        if(tab[a][b]!=0) e=2;
    }while(a>=N || b>=N || tab[a][b]!=0);

	tab[a][b]=1;
	contemp--;
	e=0;//It prints the notices correctly

	//Checks if all coordinates are occupied
	if(contemp==0){
            system("cls");
        	system("color 0B");
			printf("    +===========================================================+\n");
			printf("    |                                                           |\n");
			printf("    |              DRAW, All the players were great             |\n");
			printf("    |                                                           |\n");
			printf("    +===========================================================+\n");

            printf("Press any key to continue. . .");
            getchar();
            getchar();
            system("cls");
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
		if(h==0){
            for(i=a,j=b;i>0 && j>0;i--,j--){
            }
            for(;i+2<N && j+2<N;i++,j++){
                if(tab[i][j]==1 && tab[i+1][j+1]==1 && tab[i+2][j+2]==1)h=1;
            }
            for(i=a,j=b;i<N && j>0;i++,j--){
			}
            for(;i-2>=0 && j+2<N;i--,j++){
            if(tab[i][j]==1 && tab[i-1][j+1]==1 && tab[i-2][j+2]==1)h=1;
            }
		}

		if(h==1){
			system("cls");
        	system("color 0A");
			printf("      +========="); for(i=0;i<4+strlen(player1);i++){printf("=");	}printf("=========+\n");
			printf("      |         "); for(i=0;i<4+strlen(player1);i++){printf(" "); }printf("         |\n");
			printf("      |         "); printf("%s WINS", player1);printf("        |\n");
			printf("      |         "); for(i=0;i<4+strlen(player1);i++){printf(" "); }printf("         |\n");
			printf("      +========="); for(i=0;i<4+strlen(player1);i++){printf("=");	}printf("=========+\n\n");

            printf("Press any key to continue. . .");
            getchar();
            getchar();
            system("cls");
	break;
	}






	//Player 2´s moves

	system("cls");
    system("color 0F");
    do{
        //Print Board
    if(e==1)	system("color 0C");
    if(e==2)	system("color 0C");
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

        if(e==1) printf("\nInvalid Move!!\n\n Your move does not match the size of the board!!\n Please, play again!!\n");
        else if(e==2) printf("\nInvalid Move!!\n\n Please, choose a coordinate that is not occupied!!\n Please, play again!!\n");

        printf("\nYour move, %s ",player2);
        scanf("%s",&coor);
        a=coor[0]-'a';
        b=atoi(coor+0+1)-1;
        if(a>=N || b>=N) e=1;
        if(tab[a][b]!=0) e=2;
    }while(a>=N || b>=N || tab[a][b]!=0);

	tab[a][b]=2;
	contemp--;
	e=0;//It prints the notices correctly

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
            for(i=a,j=b;i>0 && j>0;i--,j--){
            }
            for(;i+2<N && j+2<N;i++,j++){
                if(tab[i][j]==2 && tab[i+1][j+1]==2 && tab[i+2][j+2]==2)h=1;
            }
            for(i=a,j=b;i<N && j>0;i++,j--){
			}
            for(;i-2>=0 && j+2<N;i--,j++){
            if(tab[i][j]==2 && tab[i-1][j+1]==2 && tab[i-2][j+2]==2)h=1;
            }
		}


		if(h==1){
			system("cls");
        	system("color 0A");
			printf("      +========="); for(i=0;i<4+strlen(player2);i++){printf("=");	}printf("=========+\n");
			printf("      |         "); for(i=0;i<4+strlen(player2);i++){printf(" "); }printf("         |\n");
			printf("      |         "); printf("%s WINS", player2);printf("        |\n");
			printf("      |         "); for(i=0;i<4+strlen(player2);i++){printf(" "); }printf("         |\n");
			printf("      +========="); for(i=0;i<4+strlen(player2);i++){printf("=");	}printf("=========+\n\n");

			printf("Press any key to continue. . .");
            getchar();
            getchar();
            system("cls");
		break;
		}


}




}



}
