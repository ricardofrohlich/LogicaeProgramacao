//Atribuição automática a matriz utilizando os indices
//Depois apresenta a linha 0
//Depois apresenta a coluna 3
#include <stdio.h>
#include <conio.h>
main(){
    int i,j;
    float mat[5][5], soma=0, media=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] = i*j;
        }
    }
    for(i=0;i<5;i++){
        printf("%f ",mat[0][i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%f ",mat[i][3]);
    }
    
    getch();
}
