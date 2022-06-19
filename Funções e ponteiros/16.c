/*
 Escreva uma sub-rotina que recebe um vetor e, em seguida, identifica o maior 
elemento do vetor e armazena esse elemento na primeira posição do vetor.
*/
#include <stdio.h>
void maior(float vet[],int n);

int main(){
    int n;
    printf("Qual o tamanho do vetor?");
    scanf("%i%*c",&n);
    float vet[n];
    for(int i=0;i<n;i++){
        printf("Posicao %i do vetor: ",i+1);
        scanf("%f%*c",&vet[i]);
    }
    maior(vet,n);
    printf("Novo vetor: ");
    for(int i=0;i<n;i++)
        printf("%f ",vet[i]);
    return 0;
}
void maior(float vet[],int n){
    int max;
    max=vet[0];
    for(int i=1;i<n;i++){
        if(vet[i]>max)
        max=vet[i];
    }
    vet[0]=max;
}