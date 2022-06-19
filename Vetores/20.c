#include <stdio.h>

int main(){
    int n,soma,somamax;
    printf("Tamanho da sequencia = ");
    scanf("%i%*c",&n);
    int vet[n];
    printf("Sequencia = ");
    for(int i=0;i<n;i++){
        scanf("%i%*c",&vet[i]);
    }
    soma=vet[0];
    somamax=vet[0];
    for(int i=1;i<n;i++){
        if(soma+vet[i]>vet[i])
            soma=vet[i]+soma;
        else 
            soma=vet[i];
        if(soma>somamax)
            somamax=soma;
    }
    printf("Segmento de soma maxima = %i",somamax);
}
/*
ALGORITMO
DECLARE n,soma,somamax NUMERICO
ESCREVA "Tamanho da sequencia = "
LEIA n
DECLARE vet[n] NUMERICO
ESCREVA "Sequencia = "
PARA  i←1 ATÉ n FAÇA
	INÍCIO
	LEIA vet[i]
	FIM
soma←vet[1]
somamax←vet[1]
PARA  i←2 ATÉ n FAÇA
	INÍCIO
	SE soma+vet[i]>vet[i] ENTAO
        soma←vet[i]+soma
    SENÃO
		soma←vet[i]

	SE soma>somamax ENTAO
		somamax←soma
	FIM
ESCREVA "Segmento de soma maxima = %i",somamax
FIM_ALGORITMO.
*/