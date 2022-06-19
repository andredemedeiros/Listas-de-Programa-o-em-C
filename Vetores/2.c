/*
ALGORITMO
DECLARE VET[100],I,J,MULTIPLOS_5 NUMÉRICO
MULTIPLOS_5←5
PARA I←1 ATÉ 100 FAÇA
INÍCIO
    VET[I]←MULTIPLOS_5
    MULTIPLOS_5←MULTIPLOS_5+5
FIM
ESCREVA "Múltiplos de 5 no intervalo de 1 à 500: "
PARA j←1 ATÉ 100 FAÇA
    ESCREVA VET[I]
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int VET[100],MULTIPLOS_5;
    MULTIPLOS_5=5;
    for(int i=0;i<=99;i++)
    {
        VET[i]=MULTIPLOS_5;
        MULTIPLOS_5=MULTIPLOS_5+5;
    }
    printf("Múltiplos de 5 no intervalo de 1 à 500: ");
    for(int j=0;j<=99;j++)
        printf("%i\n", VET[j]);
    return 0;
}
