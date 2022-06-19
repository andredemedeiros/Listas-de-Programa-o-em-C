/*
ALGORITMO
DECLARE SPARES,SIMPARES,PARES,IMPARES,MAIOR_PAR,MENOR_IMPAR,N,MI,MP NUMÉRICO
SPARES←0
SIMPARES←0
PARES←0
IMPARES←0
MAIOR_PAR←0
MENOR_IMPAR←99999999
ENQUANTO N>0 FAÇA
    INÍCIO
    ESCREVA "Número = "
    LEIA N
    SE N>0 E N%2=0
        ENTÃO INÍCIO
        SPARES←SPARES+N
        PARES←PARES+1
        SE N>MAIOR_PAR
            MAIOR_PAR=N
        FIM
    SENÃO SE N>0 E N%2=1
        ENTÃO INÍCIO
        SIMPARES←SIMPARES+N
        IMPARES←IMPARES+1
        SE N<MENOR_IMPAR
            MENOR_IMPAR=N
        FIM
    FIM
SE MENOR_IMPAR=99999999
    MENOR_IMPAR=0
MI←(SIMPARES/IMPARES)
MP←(SPARES/PARES)
ESCREVA "Média dos valores impares e pares digitados = ",MI,MP
ESCREVA "Menor número impar e maior número par digitados = ",MENOR_IMPAR,MAIOR_PAR
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float SPARES,SIMPARES,PARES,IMPARES,MAIOR_PAR,MENOR_IMPAR,MI,MP;
    int N;
    SPARES=0;
    SIMPARES=0;
    PARES=0;
    IMPARES=0;
    MAIOR_PAR=0;
    MENOR_IMPAR=99999999;
    while(N>0)
        {
        printf("Número = ");
        scanf("%i%*c", &N);
        if(N>0 && (N%2==0))
            {
            SPARES=SPARES+N;
            PARES++;
            if(N>MAIOR_PAR)
                MAIOR_PAR=N;
            }
        else if(N>0 && (N%2==1))
            {
            SIMPARES=SIMPARES+N;
            IMPARES++;
            if(N<MENOR_IMPAR)
                MENOR_IMPAR=N;
            }
        }
    if(MENOR_IMPAR==99999999)
        MENOR_IMPAR=0;
    MI=(SIMPARES/IMPARES);
    MP=(SPARES/PARES);
    printf("Média dos valores impares e pares digitados = %.2f e %.2f",MI,MP);
    printf("\nMenor número impar e maior número par digitados = %.2f e %.2f",MENOR_IMPAR,MAIOR_PAR);
}
