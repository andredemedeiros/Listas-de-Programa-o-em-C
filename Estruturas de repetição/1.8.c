/*
ALGORITMO
DECLARE VEZES, INICIALIZADOR, PRODUTO NUMÉRICO
PRODUTO ← 1
INICIALIZADOR ← 0
PARA VEZES ← 1 ATÉ 26 FAÇA
    INÍCIO
    SE INICIALIZADOR=0
        ENTÃO INÍCIO
        INICIALIZADOR ← INICIALIZADOR + 1
        PRODUTO ← 1 
    FIM
    SENÃO 
        PRODUTO ← PRODUTO * 2
    FIM
ESCREVA "Número de erros no programa final: ", PRODUTO
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int vezes, inicializador, produto;
    produto=1;
    inicializador=0;
    for (vezes=1;vezes<=26;vezes++)
    {
        if (inicializador==0)
        {
            inicializador++;
            produto=1;
        }
        else
        {
            produto=produto*2;
        }
    }
printf("Número de erros no programa final: %i", produto);
    return 0;
}
