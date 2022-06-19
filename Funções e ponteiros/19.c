/*
Escreva uma sub-rotina que recebe um vetor A e inverte a posição de seus 
elementos. Por exemplo, o primeiro elemento passa a ser o último, o segundo elemento 
passa a ser o penúltimo e assim sucessivamente. Não utilize vetores auxiliares. Imprima 
o vetor invertido ao final.
*/
#include <stdio.h>
void inverte(float vet[],int n);

int main(){
    int n;
    printf("Tamanho do vetor: ");
    scanf("%i%*c",&n);
    float vet[n];
    for(int i=0;i<n;i++){
        printf("%io. elemento do vetor: ",i+1);
        scanf("%f%*c",&vet[i]);
    }
    inverte(vet,n);
    printf("Vetor invertido: ");
    for(int i=0;i<n;i++)
        printf("%f ",vet[i]);
    return 0;
}
void inverte(float vet[],int n){
    int aux;
    for(int i=0;i<(n/2);i++){
        aux=vet[i];
        vet[i]=vet[(n-1)-i];
        vet[(n-1)-i]=aux;
    }
}