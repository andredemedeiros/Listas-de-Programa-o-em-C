/*
ALGORITMO
DECLARE PA,PB,ANOS NUMÉRICO
ANOS←0
PA←5000000
PB←7000000
ENQUANTO PB>=PA FAÇA
    INÍCIO
    PA←PA*(1.03)
    PB←PB*(1.02)
    ANOS←ANOS+1
    FIM
ESCREVA "Tempo (em anos) para a população do país A ultrapassar a população do país B = ", ANOS
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float PA,PB;
    int ANOS;
    ANOS=0;
    PA=5000000;
    PB=7000000;
    while (PB>=PA)
        {
        PA=PA*(1.03);
        PB=PB*(1.02);
        ANOS++;
        }
    printf("Tempo (em anos) para a população do país A ultrapassar a população do país B = %i", ANOS);
}
