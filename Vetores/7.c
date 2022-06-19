/*
ALGORITMO
DECLARE TEMP[121],TMAIOR,TMENOR,SOMAT,TMEDIA,I,J,N_DIAS NUMÉRICO
ESCREVA "Temperatura do 1o. dia"
LEIA TEMP[1]
TMAIOR←TEMP[1]
TMENOR←TEMP[1]
SOMAT←TEMP[1]
N_DIAS←0
PARA I←2 ATÉ 121 FAÇA PASSO +1
    INÍCIO
    ESCREVA "Temperatura do",I,"o. dia"
    LEIA TEMP[I]
    SE TEMP[I]>TMAIOR
        TMAIOR←TEMP[I]
    SENÃO SE TEMP[I]<TMENOR
        TMENOR←TEMP[I]
    SOMAT←SOMAT+TEMP[I]
    FIM
TMEDIA←(SOMAT/121)
PARA J←1 ATÉ 121 FAÇA PASSO +1
    INÍCIO
    SE TEMP[J]<TMEDIA
        N_DIAS←N_DIAS+1
    FIM
ESCREVA "Menor T ocorrida",TMENOR
ESCREVA "Maior T ocorrida",TMAIOR
ESCREVA "T média",TMEDIA
ESCREVA "Nº de dias com T>Tmédia",N_DIAS
FIM_ALGORITMO.

*/
#include <stdio.h>

int main()
{
    float TEMP[121],TMAIOR,TMENOR,SOMAT,TMEDIA;
    int N_DIAS;
    printf("Temperatura do 1o. dia = ");
    scanf("%f%*c", &TEMP[0]);
    TMAIOR=TEMP[0];
    TMENOR=TEMP[0];
    SOMAT=TEMP[0];
    N_DIAS=0;
    for(int I=1;I<=120;I++)
        {
        printf("Temperatura do %io. dia = ",I+1);
        scanf("%f%*c", &TEMP[I]);
        if(TEMP[I]>TMAIOR)
            TMAIOR=TEMP[I];
        else if(TEMP[I]<TMENOR)
            TMENOR=TEMP[I];
        SOMAT=SOMAT+TEMP[I];
        }
    TMEDIA=(SOMAT/121);
    for(int J=0;J<=120;J++)
        {
        if(TEMP[J]<TMEDIA)
            N_DIAS++;
        }
    printf("Menor T ocorrida = %.2f",TMENOR);
    printf("\nMaior T ocorrida = %.2f",TMAIOR);
    printf("\nT média = %.2f",TMEDIA);
    printf("\nNº de dias com T>Tmédia = %i",N_DIAS);
}
