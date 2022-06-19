/*
ALGORITMO
DECLARE A1,A2,B1,B2,TERMOS NUMÉRICO
ESCREVA "Número de termos da série: "
LEIA TERMOS
A1←1
TERMOS←TERMOS-1
ESCREVA "Série: ",A1
SE TERMOS>0 
    ENTÃO INÍCIO
    B1←4
    TERMOS←TERMOS-1
    ESCREVA B1
    FIM
SE TERMOS>0 
    ENTÃO INÍCIO
    TERMOS←TERMOS-1
    ESCREVA B1
    FIM
ENQUANTO TERMOS>0 FAÇA
    INÍCIO
    A2←A1+1
    A1←A2
    ESCREVA A2
    TERMOS←TERMOS-1
    SE TERMOS>0
        ENTÃO INÍCIO
        B2←B1+1
        B1←B2
        ESCREVA B2
        TERMOS←TERMOS-1
        FIM
    SE TERMOS>0
        ENTÃO INÍCIO
        ESCREVA B2
        TERMOS←TERMOS-1
        FIM
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int A1,A2,B1,B2,TERMOS;
    printf("Número de termos da série: ");
    scanf("%i%*c", &TERMOS);
    A1=1;
    TERMOS--;
    printf("Série: %i ",A1);
    if(TERMOS>0)
        {
        B1=4;
        TERMOS--;
        printf("%i ", B1);
        }
    if(TERMOS>0) 
        {
        TERMOS--;
        printf("%i ", B1);
        }
    while(TERMOS>0)
        {
        A2=A1+1;
        A1=A2;
        printf("%i ", A2);
        TERMOS--;
        if(TERMOS>0)
            {
            B2=B1+1;
            B1=B2;
            printf("%i ", B2);
            TERMOS--;
            }
        if(TERMOS>0)
            {
            printf("%i ", B2);
            TERMOS--;
            }
        }
}
