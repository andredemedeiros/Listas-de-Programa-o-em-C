/*
ALGORITMO
DECLARE VET[50],A1,A2,A3,I,J NUMÉRICO
A1←1
A2←1
VET[1]←A1
VET[2]←A2
PARA I←3 ATÉ 50 FAÇA
    INÍCIO
    A3←A2+A1
    VET[I]←A3
    A1←A2
    A2←A3
    FIM
PARA J←1 ATÉ 50 FAÇA
    ESCREVA J,"o. termo da série = ",VET[J]
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int VET[50],A1,A2,A3;
    A1=1;
    A2=1;
    VET[0]=A1;
    VET[1]=A2;
    for(int i=2;i<=49;i++)
        {
        A3=A2+A1;
        VET[i]=A3;
        A1=A2;
        A2=A3;
        }
    for(int j=0;j<=49;j++)
        printf("%io. termo da série = %i\n",j,VET[j]);
}
