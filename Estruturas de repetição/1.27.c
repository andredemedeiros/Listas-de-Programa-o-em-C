/*
ALGORITMO
DECLARE N,DENOMINADOR,X,H NUMÉRICO
ESCREVA "N"
LEIA N
H←0
PARA DENOMINADOR←1 ATÉ N FAÇA
    INÍCIO
    X←(1/DENOMINADOR)
    H←H+X
    FIM
ESCREVA "Valor de H = ",H
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int N;
    float DENOMINADOR,X,H;
    printf("N = ");
    scanf("%i%*c", &N);
    H=0;
    for(DENOMINADOR=1;DENOMINADOR<=N;DENOMINADOR++)
        {
        X=(1/DENOMINADOR);
        H=H+X;
        }
    printf("Valor de H = %f", H);
}
