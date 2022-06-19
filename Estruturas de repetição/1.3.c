/*
ALGORITMO
DECLARE N, VEZES, NUMERO, SOMA, MEDIA NUMÉRICO
SOMA ← 0
VEZES ← 1
ESCREVA "Média de quantos números: "
LEIA N
ENQUANTO VEZES<=N FAÇA
    INÍCIO
    ESCREVA "Digite um número: "
    LEIA NUMERO
    soma ← soma + numero;
    vezes++;
    FIM
MEDIA ← SOMA/N    
ESCREVA "Média dos números digitados =",MEDIA
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float n, vezes, numero, soma, media;
    soma=0;
    vezes=1;
    printf("Média de quantos números: ");
    scanf("%f%*c", &n);
    while (vezes<=n)
    {
        printf("Digite um número: ");
        scanf("%f%*c", &numero);
        soma = soma + numero;
        vezes++;
    }
    media=soma/n;
    printf("Média dos números digitados = %.2f", media);
    return 0;
}
