#include <stdio.h>

int main(){
    int m[10][4],codigo,iniciar,maiorcr;

    for(int i=0;i<10;i++){
        printf("\nMatricula Aluno(a) %i = ",i+1);
        scanf("%i%*c",&m[i][0]);
        printf("\nGenero (M=1,F=0) aluno(a) %i = ",i+1);
        scanf("%i%*c",&m[i][1]);
        printf("\nCodigo do curso aluno(a) %i = ",i+1);
        scanf("%i%*c",&m[i][2]);
        printf("\nCR do aluno(a) %i = ",i+1);
        scanf("%i%*c",&m[i][3]);
    }
    printf("\nCodigo do curso para premiar = ");
    scanf("%i%*c",&codigo);
    iniciar=0;
    for(int i=0;i<10;i++){
        if((m[i][1]==0)&&(m[i][2]==codigo)&&(iniciar==0)){
            maiorcr=m[i][3];
            iniciar=1;
        }
        else if((m[i][1]==0)&&(m[i][2]==codigo)&&(m[i][3]>maiorcr))
            maiorcr=m[i][3];
    }
    printf("\nAluna(s) premiada(s) =");
    for(int i=0;i<10;i++){
        if((m[i][1]==0)&&(m[i][2]==codigo)&&(m[i][3]==maiorcr))
            printf(" %i,",m[i][0]);
    }
    printf("\n ");
}