/*
ALGORITMO
DECALRE NUMERO,TESTE_NUMERO,DIVISOR,RESTO,DIVISORES NUMÉRICO
ESCREVA "NUMERO"
LEIA NUMERO
DIVISORES←0
PARA TESTE_NUMERO ← 2 ATÉ NUMERO-1 FAÇA PASSO 1
    INÍCIO
    PARA DIVISOR ← 1 ATÉ TESTE_NUMERO FAÇA 
        INÍCIO
        RESTO←(TESTE_NUMERO%DIVISOR)
        SE RESTO=0
            DIVISORES←DIVISORES+1
        FIM
    SE DIVISORES=2
        ESCREVA TESTE_NUMERO
    DIVISORES←0
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int NUMERO,TESTE_NUMERO,DIVISOR,RESTO,DIVISORES;
    printf("Número: ");
    scanf("%i%*c", &NUMERO);
    DIVISORES=0;
    for(TESTE_NUMERO=2;TESTE_NUMERO<=(NUMERO-1);TESTE_NUMERO++)
        {
        for(DIVISOR=1;DIVISOR<=TESTE_NUMERO;DIVISOR++)
            {
            RESTO=(TESTE_NUMERO%DIVISOR);
            if(RESTO==0)
                DIVISORES++;
            }
        if(DIVISORES==2)
            printf("%i ", TESTE_NUMERO);
        DIVISORES=0;
        }
}
