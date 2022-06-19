/*
ALGORITMO
DECLARE X,A,SOMA,I,FATORIAL_I,NUMERADOR NUMÉRICO
EXCREVA "X"
LEIA X
SOMA←1
FATORIAL_I←1
PARA I←1 ATÉ 14 FAÇA
    INÍCIO
    FATORIAL_I← FATORIAL_I*I
    NUMERADOR←pow(X,I)
    A←(NUMERADOR/FATORIAL_I)
    SOMA←SOMA+A
    FIM
ESCREVA "e ELEVADO A X = ", SOMA
FIM_ALGORITMO.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float X,A,SOMA,I,FATORIAL_I,NUMERADOR;
    printf("X = ");
    scanf("%f%*c", &X);
    SOMA=1;
    FATORIAL_I=1;
    for(float I=1;I<=14;I++)
        {
        FATORIAL_I=FATORIAL_I*I;
        NUMERADOR=pow(X,I);
        A=(NUMERADOR/FATORIAL_I);
        printf("\n%f",FATORIAL_I);
        SOMA=SOMA+A;
        }
    printf("e ELEVADO A X = %f", SOMA);
}
