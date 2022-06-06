
//Calcular o somatorio da matriz e a m√©dia dos valores.
#include <stdio.h>
#include <conio.h>
main(){
    int i,j;
    float mat[3][4], soma=0, media=0;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
          //  mat[i][j] = i*j; //preenchimento automatico da matriz utilizando o calculo de multiplicaÁ„o dos indices 
            printf("Digite o elemento [%d][%d]:",i,j);
            scanf("%f",&mat[i][j]);
		}
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            soma+=mat[i][j]; // somatorio de todos os elementos da matriz
        }
    }
    
    media = soma/(i*j); //calculando a mÈdia dos valores da matriz
    printf("media: %f",media);
    getch();
}
