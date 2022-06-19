/*
ALGORITMO
DECLARE N, VEZES, POTENCIAS NUMÉRICO
VEZES ← 1
POTENCIAS ← 1
ESCREVA "Número de potências de 2: "
LEIA N
ENQUANTO VEZES<=N FAÇA
    INÍCIO
    POTENCIAS ← POTENCIAS*2
    ESCREVA POTENCIAS
    VEZES++
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int n, vezes, potencias;
    vezes=1;
    potencias=1;
    printf("Número de potências de 2: ");
    scanf("%i%*c", &n);
    while (vezes<=n)
    {
        potencias=potencias*2;
        printf("%i\n", potencias);
        vezes++;
    }
    return 0;
}
