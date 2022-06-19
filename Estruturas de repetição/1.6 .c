/*
ALGORITMO
DECLARE NUMERO, FATORIAL NUMÉRICO
ESCREVA "Digite um número: "
LEIA NUMERO
ENQUANTO NUMERO != 0 FAÇA
    INÍCIO
    FATORIAL ← FATORIAL*NUMERO
    NUMERO ← NUMERO - 1
    FIM
ESCREVA "Fatorial do número: ", FATORIAL
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int numero, fatorial;
    fatorial=1;
    printf("Digite um número: ");
    scanf("%i%*c", &numero);
    while (numero!=1)
    {
        fatorial = fatorial*numero;
        numero--;
    }
    printf("Fatorial do número: %i", fatorial);
    return 0;
}
