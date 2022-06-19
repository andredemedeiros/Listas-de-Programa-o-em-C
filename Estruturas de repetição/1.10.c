/*
ALGORITMO
DECLARE ZE, GAL, GIL, I NUMÉRICO
ZE←0
GAL←0
GIL←0
I←1
ENQUANTO I>0 FAÇA
    INÍCIO
    ESCREVA "Digite 1, 2 ou 3 para votar, ou digite 0 para sair"
    LEIA I
    SE I=1
        ZE←ZE+1
    SENÃO SE I=2
        GAL←GAL+1
    SENÃO SE I=3
        GIL←GIL+1
    FIM
ESCREVA "Voto(s) para Zé:", ZE
ESCREVA "Voto(s) para Gal:", GAL
ESCREVA "Voto(s) para Gil:", GIL
FIM_ALGORITMO.
*/
#include <stdio.h>

int main()
{
    int ZE, GAL, GIL, I;
    ZE=0;
    GAL=0;
    GIL=0;
    I=1;
    while (I>0)
    {
        printf("Digite 1, 2 ou 3 para votar, ou digite 0 para sair: ");
        scanf("%i%*c", &I);
        if (I==1)
            ZE++;
        else if (I==2)
            GAL++;
        else if (I==3)
            GIL++;
    }
    printf("Voto(s) para Zé: %i", ZE);
    printf("\nVoto(s) para Gal: %i", GAL);
    printf("\nVoto(s) para Gil: %i", GIL);
    return 0;
}
