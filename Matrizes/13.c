#include <stdio.h>

int main(){

    int m[3][3],somal[3]={0,0,0},somac[3]={0,0,0},somad[2]={0,0},dif;

    for(int i=0;i<3;i++){ //Ler matriz 3x3
        for(int j=0;j<3;j++){
            printf("A(%i,%i) = ",i+1,j+1);
            scanf("%i%*c",&m[i][j]);
        }
    }
    for(int a=0;a<3;a++){ //Soma das linhas, colunas e diagonais 
        somal[0]=somal[0]+m[0][a];
        somal[1]=somal[1]+m[1][a];
        somal[2]=somal[2]+m[2][a];
        somac[0]=somac[0]+m[a][0];
        somac[1]=somac[1]+m[a][1];
        somac[2]=somac[2]+m[a][2];
        somad[0]=somad[0]+m[a][a];
        somad[1]=somad[1]+m[a][2-a];
    }
    dif=0;
    for(int j=0;j<3;j++){
        if(somal[0]!=somal[j])
            dif=1;
        if(somal[0]!=somac[j])
            dif=1;
        if((j>=0)&&(j<=1)){
            if(somal[0]!=somad[j])
                dif=1;
        }
    }
    if(dif==0)
        printf("V");
    else 
        printf("F");
    return 0;
}