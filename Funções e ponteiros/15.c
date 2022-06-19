/*
 Escreva uma sub-rotina que recebe uma matriz real Amxn, o valor de m, o valor de n 
e retorna o valor 1, se A for uma matriz Identidade, e 0, caso contrário.
*/
#include <stdio.h>
int identidade(int l,int c,float matriz[][c]);

int main(){
    int l,c,res;
    printf("Linhas da matriz A: ");
    scanf("%i%*c",&l);
    printf("Coluas da matriz A:");
    scanf("%i%*c",&c);
    float matriz[l][c];
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("\nElemento %i,%i: ",i+1,j+1);
            scanf("%f%*c",&matriz[i][j]);
        }
    }/*
    for(int i=0;i<c;i++){
        printf("\n");
        for(int j=0;j<c;j++){
            printf("%f ",matriz[i][j]);
        }
    }*/        
    res=identidade(l,c,matriz);
    if(res==1)
        printf("Matriz identidade.");
    else if(res==0)
        printf("Nao e matriz identidade");
}
int identidade(int l,int c,float matriz[][c]){
    int uns,zeros,res;
    uns=0;
    zeros=0;
    res=0;
    if(l==c && l!=0 && c!=0){
        for(int i=0;i<l;i++){
            if(matriz[i][i]==1)
                uns++;
        }
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                if((i!=j)&& (matriz[i][j]==0))
                    zeros++;
            }
        }
        if(uns==l && zeros==(l*(l-1)))
            res=1;
    }
    return res;
}