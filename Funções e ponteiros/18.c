/*
 Escreva uma sub-rotina que recebe dois vetores A e B de tamanho n (contendo 
exatamente n/2 valores pares e n/2 valores ímpares, respectivamente) e, armazena todos 
os valores pares em A e todos os valores ímpares em B.
*/
#include <stdio.h>
void func(float veta[],float vetb[],int n);

int main(){
    int n;
    do{
        printf("Qual o tamanho dos vetores A e B? (insira um numero par)");
        scanf("%i%*c",&n);
    }while(n%2==1);   
    float veta[n],vetb[n];
    for(int i=0;i<n;i++){
        printf("%io. elemento de A: ",i+1);
        scanf("%f%*c",&veta[i]);
    }
    for(int i=0;i<n;i++){
        printf("%io. elemento de B: ",i+1);
        scanf("%f%*c",&vetb[i]);
    }
    func(veta,vetb,n);
    printf("\nNovo vetor A:");
    for(int i=0;i<n;i++)
        printf("%f ",veta[i]);
    printf("\nNovo vetor B:");
    for(int i=0;i<n;i++)
        printf("%f ",vetb[i]);
        return 0;
}
void func(float veta[],float vetb[],int n){
    int aux;
    for(int i=0;i<(n/2);i++){
        aux=veta[(n-1)-i];
        veta[(n-1)-i]=vetb[i];
        vetb[i]=aux;
    }
}