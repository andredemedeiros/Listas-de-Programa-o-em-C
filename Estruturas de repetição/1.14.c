/*
ALGORITMO
DECLARE A,B,PRODUTO NUMÉRICO
ESCREVA "A"
LEIA A 
ESCREVA "B"
LEIA B
PRODUTO←0
SE B>=0
    ENTÃO INÍCIO
    ENQUANTO B>=1 FAÇA
        INÍCIO
        PRODUTO←PRODUTO+A
        B←B-1
        FIM
    FIM
SENÃO SE B<0 E A>=0
    ENTÃO INÍCIO
    ENQUANTO B<0 FAÇA
        INÍCIO
        PRODUTO←PRODUTO+A
        B←B+1
        FIM
    PRODUTO←PRODUTO*(-1)
    FIM
SENÃO INÍCIO
    ENQUANTO B<0 FAÇA
    INÍCIO
    PRODUTO←PRODUTO+A
    B←B+1
    FIM
    PRODUTO←PRODUTO*(-1)
    FIM
ESCREVA "Produto de A e B", PRODUTO
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float A,B,PRODUTO;
    printf("A: ");
    scanf("%f%*c", &A); 
    printf("B: ");
    scanf("%f%*c", &B);
    PRODUTO=0;
    if(B>=0)
        {
        while (B>=1)
            {
            PRODUTO=PRODUTO+A;
            B=B-1;
            }
        }
    else if (B<0 && A>=0)
        {
        while (B<0) 
            {
            PRODUTO=PRODUTO+A;
            B=B+1;
            }
        PRODUTO=PRODUTO*(-1);
        }
    else
        {
        while (B<0) 
        {
        PRODUTO=PRODUTO+A;
        B=B+1;
        }
        PRODUTO=PRODUTO*(-1);
        }
    printf("Produto de A e B = %f", PRODUTO);
}
