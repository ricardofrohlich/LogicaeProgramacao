//Atribuibuição automática de valores a matriz, utilizando os indices
//Mostra a matriz
//E mostra os valores da diagonal principal
#include <stdio.h>
#include <conio.h>
main(){
    int i,j;
    float mat[4][4], soma=0, media=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o elemento [%d][%d]:",i,j);
            scanf("%f",&mat[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%f ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal principal\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j) printf("[%d][%d]=%f ",i,j,mat[i][j]);
        }
    }
	printf("\nDiagonal secundaria\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if((i+j)==3) printf("[%d][%d]=%f ",i,j,mat[i][j]); // diagonal secundaria em uma matriz quadrada = em uma matriz 4x4, o i+j == 3
        }
    }
    
    getch();
}
