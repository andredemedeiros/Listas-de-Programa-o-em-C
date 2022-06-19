/*
ALGORITMO
DECLARE numero, maior NUMÉRICO
maior ← 0
    FAÇA
    INÍCIO
        ESCREVA "Digite um número (ou 0 para sair):"
        LEIA numero
        SE numero=0
            ENTÃO numero++;
        SENÃO SE maior=0
            ENTÃO INÍCIO
            maior=numero;
            numero ← 2;
            FIM
        SENÃO 
            INÍCIO
            SE numero>maior
                ENTÃO maior=numero
                numero ← 2
            FIM
    FIM
    ENQUANTO numero!=1
    ESCREVA "Maior número digitado =", maior
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float numero, maior;
    maior=0;
    
    do
    {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%f%*c", &numero);
        if (numero==0)
        {
            numero++;
        }
        else if (maior==0)
        {
            maior=numero;
            numero=2;
        }
        else 
        {
            if (numero>maior)
                maior=numero;
            numero=2;
        }
        
    }while (numero!=1);
    printf("Maior número digitado = %f", maior);
    return 0;
}
