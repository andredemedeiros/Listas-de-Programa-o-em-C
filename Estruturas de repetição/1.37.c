/*
ALGORITMO
DECLARE H,GEN,HMAX,HMIN,HMULHERES,MULHERES,SOMAH,I,MHM,MH NUMÉRICO
EXCREVA "Altura"
LEIA H
EXCREVA "Gênero (1 = homem, 2 = mulher)"
LEIA GEN
HMAX←H
HMIN←H
HMULHERES←0
MULHERES←0
SOMAH←0
SE GEN=2
    INÍCIO
    HMULHERES←H
    MULHERES←1
    FIM
SOMAH←H
PARA I←1 ATÉ 49 FAÇA
    INÍCIO
    ESCREVA "Altura"
    LEIA H
    ESCREVA "Gênero"
    LEIA GEN
    SE H>HMAX
        HMAX←H
    SENÃO SE H<HMIN
        HMIN←H
    SE GEN=2
        INÍCIO
        HMULHERES←HMULHERES+H
        MULHERES←MULHERES+1
        FIM
    SOMAH←SOMAH+H
    FIM
ESCREVA "Maior e menor altura da turma", HMAX,HMIN
MHM←(HMULHERES/MULHERES)
ESCREVA "Média das alturas das mulheres",MHM
MH←(SOMAH/50)
ESCREVA "Média de alturas da turma",MH
FIM_ALGORITMO.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float H,GEN,HMAX,HMIN,HMULHERES,MULHERES,SOMAH,I,MHM,MH;
    printf("Altura = ");
    scanf("%f%*c", &H);
    printf("Gênero (1 = homem, 2 = mulher) = ");
    scanf("%f%*c", &GEN);
    HMAX=H;
    HMIN=H;
    HMULHERES=0;
    MULHERES=0;
    SOMAH=0;
    if(GEN==2)
        {
        HMULHERES=H;
        MULHERES=1;
        }
    SOMAH=H;
    for(I=0;I<=49;I++)
        {
        printf("Altura = ");
        scanf("%f%*c", &H);
        printf("Gênero (1 = homem, 2 = mulher) = ");
        scanf("%f%*c", &GEN);
        if(H>HMAX)
            HMAX=H;
        else if(H<HMIN)
            HMIN=H;
        if(GEN=2)
            {
            HMULHERES=HMULHERES+H;
            MULHERES=MULHERES+1;
            }
        SOMAH=SOMAH+H;
        }
    printf("Maior e menor altura da turma = %f e %f", HMAX,HMIN);
    MHM=(HMULHERES/MULHERES);
    printf("Média das alturas das mulheres = %f",MHM);
    MH=(SOMAH/50);
    printf("Média de altura da turma = %f",MH);
}
