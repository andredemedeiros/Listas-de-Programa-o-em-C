/*
ALGORITMO
DECLARE NUM, I, RESTO_3, RESTO_5 NUMÉRICO
ESCREVA "Número:"
LEIA NUM
ESCREVA "Múltiplos de 3 ou 5 dentro de [0,%i]:", NUM
I←0
ENQUANTO I<=NUM FAÇA
    INÍCIO
    RESTO_3 ← (I%3)
    RESTO_5 ← (I%5)
    SE RESTO_3=0
            ESCREVA I
    SENÃO SE RESTO_5=0
            ESCREVA I
    I ← I+1
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()

{
    int NUM, I, RESTO_3, RESTO_5;
    printf("Número: ");
    scanf("%i%*c", &NUM);
    I=0;
    printf("Múltiplos de 3 ou 5 dentro do intervalo [0,%i]:", NUM);
    while (I<=NUM)
    {
        RESTO_3=(I%3);
        RESTO_5=(I%5);
        if (RESTO_3==0)
            printf("\n%i", I);
        else if (RESTO_5==0)
            printf("\n%i", I);
        I++;
    }
    
    return 0;
}
