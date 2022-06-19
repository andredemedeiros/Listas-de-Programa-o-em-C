/*
ALGORITMO
DECLARE X, PRODUTO NUMÉRICO
X ← 0
PRODUTO ← 0
ENQUANTO X!=1 FAÇA
    INÍCIO
    ESCREVA "Adicione um número ao produto (ou 0 para sair): "
    LEIA X
    SE X=0 // SAIR DO ENQUANTO 
        X++
    SENÃO SE PRODUTO=0 // INICIAR A VARIÁVEL PRODUTO
        PRODUTO ← X
        X ← 2 // NÃO SAIR DO ENQUANTO
    SENÃO
        PRODUTO  ← PRODUTO*X
        X ← 2 // NÃO SAIR DO ENQUANTO
    FIM
ESCREVA "Produto dos números digitados = ", PRODUTO
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int X, PRODUTO;
    X=0;
    PRODUTO=0;
    while (X!=1)
    {
        printf("Adicione um número ao produto (ou 0 para sair): ");
        scanf("%i%*c", &X);
        if (X==0)
        {
            X++;
        }
        else if (PRODUTO==0)
        {
            PRODUTO = X;
            X=2;
        }
        else 
        {
            PRODUTO = PRODUTO * X;
            X=2;
        }
    }
    printf("Produto dos números digitados = %i", PRODUTO);
    return 0;
}
