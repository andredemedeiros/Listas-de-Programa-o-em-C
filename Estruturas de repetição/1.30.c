/*
ALGORITMO
DECLARE A,I,SOMA,DENOMINADOR NUMÉRICO
SOMA←0.5
DENOMINADOR←4
PARA I ← 1 ATÉ 98 FAÇA
    INÍCIO
    A←(1/DENOMINADOR)
    SOMA←SOMA+A
    SE DENOMINADOR>0
        ENTÃO INÍCIO
        DENOMINADOR←DENOMINADOR+2
        DENOMINADOR←DENOMINADOR*(-1)
        FIM
    SENÃO INÍCIO
        DENOMINADOR←DENOMINADOR-2
        DENOMINADOR←DENOMINADOR*(-1)
        FIM
    FIM
ESCREVA "Soma da série de 100 termos = ",SOMA
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float A,SOMA, DENOMINADOR;
    SOMA=0.5;
    DENOMINADOR=4;
    for(int I=1;I<=98;I++)
        {
        A=(1/DENOMINADOR);
        printf("\n%f",A);
        SOMA=SOMA+A;
        if(DENOMINADOR>0)
            {
            DENOMINADOR=DENOMINADOR+2;
            DENOMINADOR=DENOMINADOR*(-1);
            }
        else
            {
            DENOMINADOR=DENOMINADOR-2;
            DENOMINADOR=DENOMINADOR*(-1);
            }
        }
    printf("Soma da série de 100 termos = %f", SOMA);
}
