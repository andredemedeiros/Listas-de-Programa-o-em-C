/*
ALGORITMO
DECLARE LIMITE_INFERIOR, LIMITE_SUPERIOR, J, I, NUMERO, RESTO, SOMA NUMÉRICO
ESCREVA "Limite inferior: "
LEIA LIMITE_INFERIOR
ESCREVA "Limite superior: "
LEIA LIMITE_SUPERIOR
I←(LIMITE_SUPERIOR - LIMITE_INFERIOR)-1 
J←1
SOMA←0
ENQUANTO I>0 FAÇA
    INÍCIO
    NUMERO ← LIMITE_INFERIOR + J
    RESTO ← (NUMERO%2)
    SE RESTO=0
        ENTÃO INÍCIO
            ESCREVA NUMERO
            SOMA←SOMA+NUMERO
        FIM
    I←I-1
    J←J+1
    FIM
ESCREVA "Soma dos números pares do intervalo aberto: ", SOMA
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int LIMITE_INFERIOR, LIMITE_SUPERIOR, J, I, NUMERO, RESTO, SOMA;
    printf("Limite inferior aberto: ");
    scanf("%i%*c", &LIMITE_INFERIOR);
    printf("Limite superior aberto: ");
    scanf("%i%*c", &LIMITE_SUPERIOR);
    I=(LIMITE_SUPERIOR - LIMITE_INFERIOR)-1;
    J=1;
    SOMA=0;
    printf("Números pares: ");
    while (I>0)
    {
        NUMERO=LIMITE_INFERIOR+J;
        RESTO = (NUMERO%2);
        if (RESTO==0)
        {
            printf("\n%i", NUMERO);
            SOMA=SOMA+NUMERO;
        }
    
        I--;
        J++;
    }
    printf("\nSoma dos números pares dentro do intervalo aberto: %i", SOMA);
    return 0;
}
