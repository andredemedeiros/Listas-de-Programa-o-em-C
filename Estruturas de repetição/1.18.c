/*
ALGORITMO
DECLARE A,B,NUM,RESTO_A,RESTO_B,PRIMOS NUMÉRICO
ESCREVA "A"
LEIA A
ESCREVA "B"
LEIA B 
NUM←2
RESTO_A←0
RESTO_B←0
PRIMOS←1
SE A>B 
    ENTÃO INÍCIO
    ENQUANTO NUM<=B FAÇA
        INÍCIO
        RESTO_A←(A%NUM)
        RESTO_B←(B%NUM)
        SE RESTO_A=0 E RESTO_B=0
            PRIMOS←0
        NUM←NUM+1
        FIM
    FIM
SENÃO SE A<B
    ENTÃO INÍCIO
    ENQUANTO NUM<=A FAÇA
        INÍCIO
        RESTO_A←(A%NUM)
        RESTO_B←(B%NUM)
        SE RESTO_A=0 E RESTO_B=0
            PRIMOS←0
        NUM←NUM+1
        FIM
    FIM
SE PRIMOS=1
    ESCREVA "A e B são primos entre si"
SENÃO
    ESCREVA "A e B não são primos entre si"
FIM_ALGORITMO.
        
*/
#include <stdio.h>

int main()
{
    int A,B,NUM,RESTO_A,RESTO_B,PRIMOS;
    printf("A = ");
    scanf("%i%*c", &A);
    printf("B = ");
    scanf("%i%*c", &B);
    NUM=2;
    RESTO_A=0;
    RESTO_B=0;
    PRIMOS=1;
    if (A>B) 
        {
        while (NUM<=B)
            {
            RESTO_A=(A%NUM);
            RESTO_B=(B%NUM);
            if (RESTO_A==0 && RESTO_B==0)
                PRIMOS=0;
            NUM=NUM+1;
            }
        }
    else if (A<B)
        {
        while (NUM<=A)
            {
            RESTO_A=(A%NUM);
            RESTO_B=(B%NUM);
            if (RESTO_A==0 && RESTO_B==0)
                PRIMOS=0;
            NUM=NUM+1;
            }
        }
    if (PRIMOS==1 && A!=B)
        printf("A e B são primos entre si");
    else
        printf("A e B não são primos entre si");
}
