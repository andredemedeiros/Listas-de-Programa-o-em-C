/*
ALGORITMO
DECLARE MAIOR, SEGUNDA_MAIOR, ALUNOS, SOMA, MEDIA, NOTA, REPETICOES NUMÉRICO
NOTA ← 0
SOMA ← 0
MAIOR ← 0
SEGUNDA_MAIOR ← 0
ESCREVA "DIGITE O NÚMERO DE ALUNOS:"
LEIA ALUNOS
REPETICOES ← ALUNOS;
ENQUANTO REPETICOES>0 FAÇA
    INÍCIO
        ESCREVA "DIGITE UMA NOTA: "
        LEIA NOTA
        SOMA ← SOMA+NOTA
        SE NOTA>MAIOR
            ENTÃO INÍCIO
            SEGUNDA_MAIOR ← MAIOR
            MAIOR ← NOTA
            FIM
        SENÃO SE NOTA>SEGUNDA_MAIOR
            ENTÃO INÍCIO
            SEGUNDA_MAIOR ← NOTA
            FIM
        REPETICOES ← REPETICOES - 1
    FIM
    MEDIA ← (SOMA)/(ALUNOS)
    ESCREVA "MAIOR E SEGUNDA MAIOR NOTA NA 1 AP: ", MAIOR, SEGUNDA_MAIOR
    ESCREVA "MÉDIA DAS NOTAS NA 1 AP: ", MEDIA
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{   
    float maior, segunda_maior, alunos, soma, media, nota, repeticoes;
    nota=0;
    soma=0;
    maior=0;
    segunda_maior=0;
    printf("Digite o número de alunos: ");
    scanf("%f%*c", &alunos);
    repeticoes=alunos;
    while (repeticoes>0)
    {
        printf("Digite uma nota: ");
        scanf("%f%*c", &nota);
        soma=soma+nota;
        if(nota>maior)
        {
            segunda_maior=maior;
            maior=nota;
        }
        else if (nota>segunda_maior)
        {
            segunda_maior=nota;
        }
        repeticoes--;
    }
    media = (soma)/(alunos);
    printf("Maior e segunda maior nota na 1 AP: %.2f, %.2f.", maior, segunda_maior);
    printf("\nMédia das notas na 1 AP: %.2f", media);
    return 0;
}
