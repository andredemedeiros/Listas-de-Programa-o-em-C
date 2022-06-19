/*
ALGORITMO
DECLARE X,SOMA,TERMO,I,A NUMÉRICO
ESCREVA "X"
LEIA X
SOMA←X
TERMO←X*(-1)
PARA I ← 1 ATÉ 19 FAÇA
    INÍCIO
    A←(TERMO/I)
    SOMA←SOMA+A
    TERMO←A*(-1)
    FIM
ESCREVA "Somatório = ",SOMA
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float X,SOMA,TERMO,A;
    int I;
    printf("X = ");
    scanf("%f%*c", &X);
    SOMA=X;
    TERMO=X*(-1);
    for(I=1;I<=19;I++)
        {
        A=(TERMO/I);
        SOMA=SOMA+A;
        TERMO=A*(-1);
        }
    printf("Somatório = %f ", SOMA);
}
