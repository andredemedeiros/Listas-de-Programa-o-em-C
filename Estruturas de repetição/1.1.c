/*
ALGORITMO
DECLARE VEZES, POTENCIA NUMÉRICO
POTENCIA ← 2
PARA VEZES ← 1 ATÉ 20 FAÇA
    INÍCIO
    ESCREVA POTENCIA
    POTENCIA ← POTENCIA * 2
    FIM
*/
#include <stdio.h>

int main()
{
    int vezes,potencia;
    potencia = 2;
    for (vezes=1;vezes<=20;vezes++)
    {
        printf("%i\n", potencia);
        potencia = potencia * 2;
    }

    return 0;
}
