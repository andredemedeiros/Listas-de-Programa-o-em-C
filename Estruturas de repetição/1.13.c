/*
ALGORITMO
DECLARE NUM, PAR, IMPAR, QUANTIDADE, RESTO, CONTADOR NUMÉRICO
ESCREVA "Quantidade de números:"
LEIA QUANTIDADE
PAR←0
IMPAR←0
CONTADOR←1
ENQUANTO CONTADOR<=QUANTIDADE FAÇA
{
    INÍCIO
    ESCREVA "Número: "
    LEIA NUM
    RESTO←(NUM%2)
    SE RESTO=0
        PAR←PAR+1
    SENÃO 
        IMPAR←IMPAR+1
    CONTADOR←CONTADOR+1
}
ESCREVA "Números pares= ", PAR
ESCREVA "Números ímpares= ", IMPAR
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()

{
    int NUM, PAR, IMPAR, QUANTIDADE, RESTO, CONTADOR;
    printf("Quantidade de números: ");
    scanf("%i%*c", &QUANTIDADE);
    PAR=0;
    IMPAR=0;
    CONTADOR=1;
    while (CONTADOR<=QUANTIDADE)
    {
        printf("%i o. número: ", CONTADOR);
        scanf("%i%*c", &NUM);
        RESTO=(NUM%2);
        if (RESTO==0)
            PAR=PAR+1;
        else
            IMPAR=IMPAR+1;
        CONTADOR=CONTADOR+1;
    }
    printf("Números pares= %i", PAR);
    printf("\nNúmeros ímpares= %i", IMPAR);
    return 0;
}
