#include <stdio.h>
int funcprimo(int n);
int main(){
    int n,maior_primo;
    scanf("%i%*c",&n);
    if(n==0 || n==1){
        printf("Não há primo menor ou igual a %i.",n);
    }
    else{
    maior_primo=funcprimo(n);
    printf("Maior primo menor ou igual a %i = %i.",n,maior_primo);
    }
}

int funcprimo(int n){
    int resto,divisores;
    while(n>0){
        resto=0;
        divisores=0;
        for(int i=1;i<=n;i++){
            resto=(n%i);
            if(resto==0)
                divisores++;
        }
        if(divisores==2){
            return n;
        }
        else
            n--;      
    }
}