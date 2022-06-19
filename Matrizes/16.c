#include <stdio.h>

int main(){
    int m[3][3],n[3][3];

    for(int i=0;i<3;i++){ //Ler matriz m 3x3
        for(int j=0;j<3;j++){
            scanf("%i%*c",&m[i][j]);
        }
    }
    for(int i=0;i<3;i++){ //Girar a matriz m 270º e armazenar em n
        n[i][0]=m[0][2-i];
        n[i][1]=m[1][2-i];
        n[i][2]=m[2][2-i];
    }
    for(int i=0;i<3;i++){ //Printar matriz n
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%i ",n[i][j]);
        }
    }
    printf("\n ");
}