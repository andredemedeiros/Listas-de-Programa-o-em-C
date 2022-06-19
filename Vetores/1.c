/*
ALGORITMO
DECLARE I,X[101],NUM NUMÉRICO
NUM←200
PARA I←1 ATÉ 101 FAÇA
INÍCIO
    X[I]←NUM
    NUM←NUM-1
FIM
PARA I←1 ATÉ 101 FAÇA
    ESCREVA X[I]
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int x[101],NUM;
    NUM=200;
    for(int i=0;i<=100;i++)
    {
        x[i]=NUM;
        NUM--;
    }
    for(int j=0;j<=100;j++)
        printf("%i\n", x[j]);
    return 0;
}
