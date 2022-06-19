/*
ALGORITMO
DECLARE A1,A2,A3,TERMO,SOMA,N_TERMOS NUMÉRICO
ESCREVA "1o. termo: "
LEIA A1
ESCREVA "2o. termo: "
LEIA A2
ESCREVA "Número de termos da série: "
LEIA N_TERMOS
ESCREVA "Série de n termos: ",A1,A2
SOMA←A1+A2
PARA TERMO ← 3 ATÉ N_TERMOS FAÇA PASSO 1
    INÍCIO
    A3←A2+A1
    SOMA←SOMA+A3
    ESCREVA A3
    A1←A2
    A2←A3
    FIM
ESCREVA "Soma dos termos impressos: ",SOMA
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int A1,A2,A3,TERMO,SOMA,N_TERMOS;
    printf("1o. termo: ");
    scanf("%i%*c", &A1);
    printf("2o. termo: ");
    scanf("%i%*c", &A2);
    printf("Número de termos da série: ");
    scanf("%i%*c", &N_TERMOS);
    printf("Série de %i termos: ", N_TERMOS);
    printf("\n%i %i ", A1,A2);
    SOMA=A1+A2;
    for(TERMO=3;TERMO<=N_TERMOS;TERMO++)
        {
        A3=A2+A1;
        SOMA=SOMA+A3;
        printf("%i ", A3);
        A1=A2;
        A2=A3;
        }
    printf("\nSoma dos %i termos impressos = %i ", N_TERMOS,SOMA);
}
