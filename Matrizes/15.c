#include <stdio.h>

int main(){
    int m[3][3],n[3][3];

    for(int i=0;i<3;i++){ //Ler matriz m 3x3
        for(int j=0;j<3;j++){
            scanf("%i%*c",&m[i][j]);
        }
    }
    for(int i=0;i<3;i++){ //Girar m 180º e armazenar em n
        n[2][i]=m[0][2-i];
        n[1][i]=m[1][2-i];
        n[0][i]=m[2][2-i];
    }
    for(int i=0;i<3;i++){ //Printar n
        printf("\n");
        for(int j=0;j<3;j++)
            printf("%i ",n[i][j]);
    }
    printf("\n ");
}