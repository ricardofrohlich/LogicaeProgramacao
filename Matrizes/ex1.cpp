#include <stdio.h>
#include <conio.h>

main(){

    int i,j, mat[3][4];
    for(i=0;i<3;i++){ /// linhas
        for(j=0;j<4;j++){ // colunoas
            printf("Digite o elemento [%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<3;i++){ // linhas
        for(j=0;j<4;j++){ // colunas
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    getch();
}
