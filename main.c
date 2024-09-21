#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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
    int i,j,tab[N][N],h=0;
    char coor[N];

    printf("!!! BEM VINDO ALGO MELHOR JOGO DA VELHA !!!");

    printf("\n");

    //preencher tabela
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            tab[i][j]=0;
        }
    }

    //imprimir tabuleiro primeira vez
     for(i=0;i<N;i++){

        printf("\n");
        if(i==0){
            printf("   ");
            for(j=0;j<N;j++)
            printf("%d    ",(j+1));
            printf("\n");
        }
        printf(" ");
        for(j=0;j<N;j++){
            printf("+---+");
        }
        printf("\n");
        printf("%c",('a'+i));
        for(j=0;j<N;j++){
            if (tab[i][j] == 0)
                    printf("|   |");
            else if (tab[i][j] == 1)
                    printf("| X |");
            else if (tab[i][j] == 2)
                    printf("| O |");
        }
        if(i==N-1){
            printf("\n");
            printf(" ");
            for(j=0;j<N;j++){
                printf("+---+");
            }
        }

    }
    printf("\n");

    //Jogador 1= X
    //Jogador 2= O

    while(h==0){
    printf("Qual sua jogada, Jogador 1?");
    scanf("%s", &coor);

    if(tab[coor[0]-'a'][coor[1]-'1'] ==0){
    tab[coor[0]-'a'][coor[1]-'1'] = 1;
    }
    else{//Validação se a casa esta ocupada
        while(tab[coor[0]-'a'][coor[1]-'1'] !=0){
                printf("Jogada inválida!! \n A casa já está ocupada!!\n");
                    printf("Qual sua jogada, Jogador 1?");
                    scanf("%s", &coor);
                    if(tab[coor[0]-'a'][coor[1]-'1'] ==0){
                    tab[coor[0]-'a'][coor[1]-'1'] = 1;
                    }
        }
    }


    if(coor[0]-'a'>N || coor[1]-'1'>N){
        do{
            printf("\nJogada inválida!! \nPor favor digite um jogada válida para o seu tabuleiro\n");
                printf("Qual sua real jogada, jogador 1?");
                scanf("%s", &coor);
                tab[coor[0]-'a'][coor[1]-'1'] = 1;
        }while(coor[0]-'a'>N || coor[1]-'1'>N);
    }


    printf("Qual sua jogada, Jogador 2?");
    scanf("%s", &coor);

    if(tab[coor[0]-'a'][coor[1]-'1'] ==0)
    tab[coor[0]-'a'][coor[1]-'1'] = 2;
    else{//Validação se a casa esta ocupada
        while(tab[coor[0]-'a'][coor[1]-'1'] != 0){
                printf("\nJogada inválida!! \n A casa já está ocupada!!\n");
                    printf("Qual sua jogada, Jogador 2?");
                    scanf("%s", &coor);
                    if(tab[coor[0]-'a'][coor[1]-'1'] ==0)
                    tab[coor[0]-'a'][coor[1]-'1'] = 2;

        }
    }


    if(coor[0]-'a'>N || coor[1]-'1'>N){
        do{
            printf("Jogada inválida, por favor digite um jogada válida para o seu tabuleiro\n");
                printf("Qual sua jogada, Jogador 2?");
                scanf("%s", &coor);
                tab[coor[0]-'a'][coor[1]-'1'] = 2;
        }while(coor[0]-'a'>N || coor[1]-'1'>N);
    }

        system("cls");

    //imprimir tabuleiro
    for(i=0;i<N;i++){

        printf("\n");
        if(i==0){
            printf("   ");
            for(j=0;j<N;j++)
            printf("%d    ",(j+1));
            printf("\n");
        }
        printf(" ");
        for(j=0;j<N;j++){
            printf("+---+");
        }
        printf("\n");
        printf("%c",('a'+i));
        for(j=0;j<N;j++){
            if (tab[i][j] == 0)
                    printf("|   |");
            else if (tab[i][j] == 1)
                    printf("| X |");
            else if (tab[i][j] == 2)
                    printf("| O |");
        }
        if(i==N-1){
            printf("\n");
            printf(" ");
            for(j=0;j<N;j++){
                printf("+---+");
            }
        }

    }
    printf("\n");
    }




















    return 0;
}
