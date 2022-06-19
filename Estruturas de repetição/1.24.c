/*
ALGORITMO
DECLARE A1,A2,A3,TERMO,N_TERMOS,I,RESTO NUMÉRICO
ESCREVA "1o. termo: "
LEIA A1
ESCREVA "2o. termo: "
LEIA A2
ESCREVA "Número de termos da série: "
LEIA N_TERMOS
ESCREVA "Tipo de série (soma=ímpar ou subtração=par): "
LEIA I
ESCREVA "Série de n termos = ",A1,A2
RESTO←(I%2)
SE RESTO=1 
    ENTÃO INÍCIO
    PARA TERMO ← 3 ATÉ N_TERMOS FAÇA PASSO 1
        INÍCIO
        A3←A2+A1
        ESCREVA A3
        A1←A2
        A2←A3
        FIM
    FIM
SENÃO INÍCIO
    PARA TERMO ← 3  ATÉ N_TERMOS FAÇA PASSO 1
        INÍCIO
        A3←A2-A1
        ESCREVA A3
        A1←A2
        A2←A3
        FIM
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int A1,A2,A3,TERMO,N_TERMOS,I,RESTO;
    printf("1o. termo: ");
    scanf("%i%*c", &A1);
    printf("2o. termo: ");
    scanf("%i%*c", &A2);
    printf("Número de termos da série: ");
    scanf("%i%*c", &N_TERMOS);
    printf("Tipo de série (soma=ímpar ou subtração=par): ");
    scanf("%i%*c", &I);
    printf("Série de %i termos = %i %i ",N_TERMOS,A1,A2);
    RESTO=(I%2);
    if(RESTO==1) 
        {
        for(TERMO=3;TERMO<=N_TERMOS;TERMO++)
            {
            A3=A2+A1;
            printf("%i ",A3);
            A1=A2;
            A2=A3;
            }
        }
    else
        {
        for(TERMO=3;TERMO<=N_TERMOS;TERMO++)
            {
            A3=A2-A1;
            printf("%i ", A3);
            A1=A2;
            A2=A3;
            }
        }
}
