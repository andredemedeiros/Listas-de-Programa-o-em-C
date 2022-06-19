/*
ALGORITMO
DECLARE SOMA,A,DENOMINADOR,I,B,PI NUMÉRICO
DENOMINADOR←1
SOMA←0
PARA I ← 1 ATÉ 51 FAÇA PASSO +1
    INÍCIO
    B ← (1/DENOMINADOR)
    A ← POW(B,3)
    SOMA ← SOMA + A 
    SE DENOMINADOR>0 
        ENTÃO INÍCIO
        DENOMINADOR←DENOMINADOR+2
        DENOMINADOR←DENOMINADOR*(-1)
        FIM
    SENÃO INÍCIO
        DENOMINADOR←DENOMINADOR*(-1)
        DENOMINADOR←DENOMINADOR+2
        FIM
    FIM
PI←CBRT(SOMA*32)
ESCREVA "PI = ",PI
FIM_ALGORITMO.
*/
#include <stdio.h>
#include <math.h>

int main ()
{
    float SOMA,A,DENOMINADOR,B,PI;
    DENOMINADOR=1;
    SOMA=0;
    for(int i=1;i<=51;i++)
        {
        B=(1/DENOMINADOR);
        A=pow(B,3);
        SOMA=SOMA+A;
        if(DENOMINADOR>0)
            {
            DENOMINADOR=DENOMINADOR+2;
            DENOMINADOR=DENOMINADOR*(-1);
            }
        else
            {
            DENOMINADOR=DENOMINADOR*(-1);
            DENOMINADOR=DENOMINADOR+2;
            }
        }
    PI=cbrt(SOMA*32);
    printf("PI = %f", PI);
}

