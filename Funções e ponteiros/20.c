/*
Escreva uma sub-rotina que recebe um vetor A e um número n, e, em seguida, 
exclui do vetor A todas as ocorrências do elemento n
*/
#include <stdio.h>
int retirarnumero(float vet[],int tam,float n);

int main(){
    int tam,vezesn,k;
    printf("Tamanho do vetor A: "); //Tamanho vetor
    scanf("%i%*c",&tam);
    float vet[tam],n;
    for(int i=0;i<tam;i++){ //Ler vetor
        printf("%io. elemento do vetor: ",i+1);
        scanf("%f%*c",&vet[i]);
    }
    printf("Numero para retirar: "); //Retirar número
    scanf("%f%*c",&n);
    vezesn=retirarnumero(vet,tam,n); //Receber vezes que o numero aparece e colocar o numero ao final do vetor
    printf("Vetor sem o numero %f: ",n);
    k=tam-vezesn;
    for(int i=0;i<k;i++){ //imprimir o vetor sem os números no final
        printf("%f ",vet[i]);
    }
    return 0;
}
int retirarnumero(float vet[],int tam,float n){
    int vezesn;
    float aux;
    vezesn=0;
    for(int i=0;i<tam;i++){ //Quantas vezes o número aparece
        if(vet[i]==n)
         vezesn++;
    }
    for(int i=0;i<(tam-1);i++){ //Ordenar o número aparecido para o final do vetor
        if(vet[i]==n){
            for(int j=i;j<(tam-1);j++){
                vet[j]=vet[j+1];
            }
            vet[tam-1]=n;
        }
    }
    return vezesn;
}