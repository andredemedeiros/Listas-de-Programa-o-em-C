/*
ALGORITMO
DECLARE A,B,QUOCIENTE,RESTO NUMÉRICO
ESCREVA "A"
LEIA A
ESCREVA "B"
LEIA B 
QUOCIENTE←0
RESTO←A
SE B=0 
    ESCREVA "Não é possível realizar uma divisão por 0"
SENÃO SE A>=B 
    ENTÃO INÍCIO
    ENQUANTO RESTO>=B FAÇA
        INÍCIO
        RESTO←RESTO-B
        QUOCIENTE←QUOCIENTE+1
        FIM
    FIM
ESCREVA "Quociente da divisão de A por B = ", QUOCIENTE
FIM_ALGORITMO.
        
*/
#include <stdio.h>

int main()
{
    int A,B,QUOCIENTE,RESTO;
    printf("A = ");
    scanf("%i%*c", &A);
    printf("B = ");
    scanf("%i%*c", &B);
    QUOCIENTE=0;
    RESTO=A;
    if (B==0)
    {
        printf("Não é possível realizar uma divisão por 0");
    }
    else if (A>=B)
    {
        while (RESTO>=B) 
        {
            RESTO=RESTO-B;
            QUOCIENTE=QUOCIENTE+1;
        }
    }
    printf("Quociente da divisão de A por B = %i ", QUOCIENTE);
}
