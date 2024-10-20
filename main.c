#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 5
#define M 3

int main()
{
setlocale(LC_ALL,"Portuguese");

{/* 01. Faça um programa que receba um número n e preencha um vetor com n números.
Supondo que o vetor digitado foi [1, 2, 3, 4], imprima-o da seguinte maneira: (1) (2) (3)
(4).*/
/*
    int i;
    float num[N];

    printf("Digite um sequência de número de sua preferência: ");

    for(i=0;i<N;i++){
    scanf("%f",&num[i]);
    }
    printf("\n");
    printf("O números digitados foram: ");
    for(i=0;i<N;i++){
        printf("(%.0f)  ",num[i]);
    }
return 0;
*/

}

{/*02. Faça um programa que receba um número n e preencha um vetor com n números.
Depois, realize as seguintes operações na sequência:
a. Imprima o vetor preenchido
b. Digite um número x, se este número existir no vetor remova-o
c. Imprima novamente o vetor
d. Digite um número y, se este número não existir no vetor, adicione-o
e. Imprima novamente o vetor
*/
{/* Jeito Fácil
    int i,c,d,rem;
    float num[N],n,NN;

    printf("Digite um sequência de número de sua preferência: ");

    for(i=0;i<N;i++){
        scanf("%f", &num[i]);
    }
    //a)
    printf("\n");
    printf("Foram gravadas as seguintes informações no vetor: ");
    for(i=0;i<N;i++){
        printf("(%.0f) ",num[i]);
    }
    //b)
    printf("\n");
    printf("Digite um número de sua preferência: ");
    scanf("%f",&n);

    for(i=0;i<N;i++){
        if(num[i]==n){
            for(;i<N-1;i++){
                num[i]=num[i+1];
            }
        }
    }
    //c)
    printf("\n");
    printf("Seu vetor foi alterado, esse é seu novo vetor: ");
    for(i=0;i<N-1;i++){
        printf("(%.0f) ",num[i]);
    }

    //d)
    printf("\n");
    printf("Digite um outro número de sua preferência: ");
    scanf("%f",&n);
    for(i=0;i<N;i++){
        if(num[i]!=n){
            i=N-1;
            num[i]=n;
        }
    }
    //e)
    printf("\n");
    printf("Seu vetor foi alterado, esse é seu novo vetor: ");
    for(i=0;i<N;i++){
        printf("(%.0f) ",num[i]);
    }



return 0;
*/}

{// Jeito Divertido
    int i,c,d,rem;
    float num[N],n,NN;
    char ch;

    printf("Digite um sequência de números: ");
    for(i=0;i<N;i++){
        scanf("%f",&num[i]);
    }

    for(i=0;i<N;i++){
        printf("(%.0f) ",num[i]);
    }

    NN=N;
    ch='y';
    while(ch=='y'){
        printf("\nDeseja tirar algum número de seu vetor(y=sim e n=não)? ");
        scanf(" %c",&ch);
    if(ch=='y'){
        printf("\nDigite qual número deseja tirar ao seu vetor? ");
        scanf("%f",&n);

        for(i=0;i<NN;i++){
            if(num[i]==n){
                for(;i<NN;i++){
                    num[i]=num[i+1];
                }
            NN=NN-1;
            }
        }

    }else ch='n';
    }

    for(i=0;i<NN;i++){
        printf("(%.0f) ",num[i]);
    }
    ch='y';
    while(ch=='y'){
        printf("\nDeseja adicionar algum número ao seu vetor(y=sim e n=não)? ");
        scanf(" %c",&ch);
    if(ch=='y'){
        printf("\nDigite qual número deseja adicionar ao seu vetor? ");
        scanf("%f",&n);

        for(i=0;i<NN;i++){
            if(num[i]!=n){
                i=NN;
                num[i]=n;
                NN=NN+1;
            }
        }

    }else ch='n';

    }

    for(i=0;i<NN;i++){
        printf("(%.0f) ",num[i]);
    }







}


}






























return 0;
}
