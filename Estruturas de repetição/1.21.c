/*
ALGORITMO
DECLARE A,B,PARAR,RESTO,C NUMÉRICO
ESCREVA "A"
LEIA A
ESCREVA "B"
LEIA B
PARAR←0
ENQUANTO PARAR=0 FAÇA
    INÍCIO
    C←(A/B)
    RESTO←(A%B)
    SE RESTO=0
        ENTÃO INÍCIO
        ESCREVA "MDC(A,B) = ", B
        PARAR←1
        FIM
    SENÃO INÍCIO
        A←B
        B←RESTO
        FIM
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int A,B,PARAR,RESTO,C;
    printf("A = ");
    scanf("%i%*c", &A);
    printf("B = ");
    scanf("%i%*c", &B);
    PARAR=0;
    while(PARAR==0)
        {
        C=(A/B);
        RESTO=(A%B);
        if(RESTO==0)
            {
            printf("MDC(A,B) = %i", B);
            PARAR=1;
            }
        else 
            {
            A=B;
            B=RESTO;
            }
        }
}
