/*
ALGORITMO
DECLARE FATORIAL_I,I,CONTADOR,J,X,VET[15],NUMERADOR,SENX,K NUMÉRICO
ESCREVA "X EM GRAUS"
LEIA X
X←X*(3.1416/180)
CONTADOR←0
SENX←0
PARA I←1 ATÉ 29 FAÇA PASSO+2
    INÍCIO
    CONTADOR←CONTADOR+1
    SE CONTADOR%2=1
        FATORIAL_I←1
    SENÃO
        FATORIAL_I←-1
    PARA J←1 ATÉ I FAÇA
        FATORIAL_I←FATORIAL_I*J
    NUMERADOR←pow(X,I)
    VET[CONTADOR]←(NUMERADOR/FATORIAL_I)
    FIM
PARA K←1 ATÉ 15 FAÇA
    SENX←SENX+VET[K]
ESCREVA "SENX = ",SENX
FIM_ALGORITMO.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int CONTADOR;
    float NUMERADOR,SENX,X,VET[15],FATORIAL_I;
    printf("X EM GRAUS = ");
    scanf("%f%*c", &X);
    X=X*(3.1416/180);
    CONTADOR=0;
    SENX=0;
    for(float I=1;I<=29;I=I+2)
        {
        CONTADOR++;
        if(CONTADOR%2==1)
            FATORIAL_I=1;
        else
            FATORIAL_I=(-1);
        for(int J=1;J<=I;J++)
            FATORIAL_I=FATORIAL_I*J;
        NUMERADOR=pow(X,I);
        VET[CONTADOR-1]=(NUMERADOR/FATORIAL_I);
        }
    for(int K=0;K<=14;K++)
        SENX=SENX+VET[K];
    printf("SENX = %f",SENX);
}
