/*
ALGORITMO
DECLARE VET[10],SOMA_ALTURAS,MEDIA_ALTURAS,I,J,K NUMÉRICO
SOMA_ALTURAS←0
PARA I←1 ATÉ 10 FAÇA
    INÍCIO
    ESCREVA "Digite a ",I,"a. altura"
    LEIA VET[I]
    FIM
PARA J←1 ATÉ 10 FAÇA
    SOMA_ALTURAS←SOMA_ALTURAS+VET[J]
MEDIA_ALTURAS←(SOMA_ALTURAS/10)
PARA K←1 ATÉ 10 FAÇA
    INÍCIO
    SE (VET[I]>MEDIA_ALTURAS)
        ESCREVA VET[K]
    FIM
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    float SOMA_ALTURAS,MEDIA_ALTURAS;
    float atletas [10];
    SOMA_ALTURAS=0;
    for(int i=0;i<=9;i++)
        {
        printf("Digite a %ia. altura: ",i+1);
        scanf("%f%*c", &atletas[i]);
        }
    for(int j=0;j<=9;j++)
        SOMA_ALTURAS=SOMA_ALTURAS+atletas[j];
    MEDIA_ALTURAS=(SOMA_ALTURAS/10);
    printf("Altura(s) maior(es) que a média: ");
    for(int k=0;k<=9;k++)
        {
        if(atletas[k]>MEDIA_ALTURAS)
            printf("%.2f\n",atletas[k]);
        }
}
