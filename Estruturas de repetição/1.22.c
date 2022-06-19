/*
ALGORITMO
DECLARE A0,A1,A2,TERMO NUMÉRICO
ESCREVA "TERMO"
LEIA TERMO
A0←0
A1←1
ESCREVA A1
TERMO←TERMO-1
ENQUANTO TERMO>0 FAÇA
    INÍCIO
    A2←A1+A0
    ESCREVA A2
    A0←A1
    A1←A2
    TERMO←TERMO-1
    FIM
FIM_ALGORITMO.
        
*/
#include <stdio.h>

int main()
{
    int A0,A1,A2,TERMO;
    printf("TERMO: ");
    scanf("%i%*c", &TERMO);
    A0=0;
    A1=1;
    printf("%i ", A1);
    TERMO=TERMO-1;
    while(TERMO>0)
    {
        A2=A1+A0;
        printf("%i ", A2);
        A0=A1;
        A1=A2;
        TERMO=TERMO-1;
    }
}
