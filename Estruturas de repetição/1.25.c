/*
ALGORITMO
DECLARE A1,A2,N_TERMOS,I,AUX NUMÉRICO
ESCREVA "Número de termos da série: "
LEIA N_TERMOS
A1←1
N_TERMOS←N_TERMOS-1
ESCREVA "Série: ",A1
AUX←0
PARA I ← N_TERMOS ATÉ 1 FAÇA PASSO -1
    INÍCIO
    AUX←AUX+1
    A2←A1+1+(AUX*2)
    ESCREVA A2
    A2←A1
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int A1,A2,N_TERMOS,I,AUX;
    printf("Número de termos da série: ");
    scanf("%i%*c", &N_TERMOS);
    A1=1;
    N_TERMOS--;
    printf("Série: %i ", A1);
    AUX=0;
    for(I=N_TERMOS;I>=1;I--)
        {
        AUX++;
        A2=A1+1+(AUX*2);
        printf("%i ", A2);
        A1=A2;
        }
}
