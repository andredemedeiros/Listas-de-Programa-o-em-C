/*
ALGORITMO
DECLARE A,B,POTENCIA NUMÉRICO
ESCREVA "A"
LEIA A 
ESCREVA "B"
LEIA B
POTENCIA←1
ENQUANTO B>=1 FAÇA
    INÍCIO
    POTENCIA←POTENCIA*A
    B←B-1
    FIM
    ESCREVA "Produto de A e B", PRODUTO
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float A,B,POTENCIA;
    printf("A: ");
    scanf("%f%*c", &A);
    printf("B: ");
    scanf("%f%*c", &B);
    POTENCIA=1;
    while (B>=1)
        {
        POTENCIA=POTENCIA*A;
        B=B-1;
        }
    printf("Produto de A e B = %f", POTENCIA);
}
