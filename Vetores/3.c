/*
ALGORITMO
DECLARE I,QUADRADO,VET[10],POSIÇÃO,J NUMÉRICO
POSIÇÃO←1
PARA I←1 ATÉ 19 FAÇA PASSO 2
INÍCIO
    QUADRADO←I*I
    VET[POSIÇÃO]←QUADRADO
    POSIÇÃO←POSIÇÃO+1
FIM
PARA j←1 ATÉ 10 FAÇA
    ESCREVA VET[J]
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int QUADRADO,VET[10],POSICAO;
    POSICAO=0;
    for(int i=1;i<=19;i=i+2)
    {
        QUADRADO=i*i;
        VET[POSICAO]=QUADRADO;
        POSICAO++;
    }
    for(int j=0;j<=9;j++)
        printf("%i\n", VET[j]);
    return 0;
}
