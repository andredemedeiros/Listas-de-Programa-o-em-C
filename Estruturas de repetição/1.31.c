/*
ALGORITMO
DECLARE A,SOMA,N,B,I NUMÉRICO
ESCREVA "Somatório de N termos: "
LEIA N
SOMA←0
PARA I ← 1 ATÉ N FAÇA PASSO +1
    INÍCIO
    B←(1/I)
    A←pow(B,I)
    SOMA←SOMA+A
    FIM
ESCREVA "Somatório de N = ",SOMA
FIM_ALGORITMO.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float A,SOMA,B;
    int N;
    printf("Somatório de N termos: ");
    scanf("%i%*c", &N);
    SOMA=0;
    for(float I=1;I<=N;I++)
        {
        B=(1/I);
        A=pow(B,I);
        SOMA=SOMA+A;
        }
    printf("Somatório de N = %f", SOMA);
}
