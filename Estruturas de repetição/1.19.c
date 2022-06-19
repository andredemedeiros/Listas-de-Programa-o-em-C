/*
ALGORITMO
DECLARE NUM,RESTO,TESTE NUMÉRICO
ESCREVA "NUMERO"
LEIA NUM
TESTE←1
RESTO←0
ESCREVA "Divisores do número: "
ENQUANTO TESTE<=NUM FAÇA
    INÍCIO
    RESTO←(NUM%TESTE)
    SE RESTO=0
        ESCREVA TESTE," "
    TESTE←TESTE+1
    FIM
FIM_ALGORITMO.
        
*/
#include <stdio.h>

int main()
{
    int NUM,RESTO,TESTE;
    printf("Número: ");
    scanf("%i%*c", &NUM);
    TESTE=1;
    RESTO=0;
    printf("Divisores do número: ");
    while(TESTE<=NUM)
        {
        RESTO=(NUM%TESTE);
        if(RESTO==0)
            printf("%i ", TESTE);
        TESTE=TESTE+1;
        }
}
