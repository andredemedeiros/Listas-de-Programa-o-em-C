#include <stdio.h>
int trocarconteudo(int *a,int *b);

int main(){
    int a,b;
    printf("a: ");
    scanf("%i%*c",&a);
    printf("b: ");
    scanf("%i%*c",&b);
    trocarconteudo(&a,&b);
    printf("Novo conteudo de a: %i",a);
    printf("\nNovo conteudo de b: %i",b);
    return 0;
}
int trocarconteudo(int *a,int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}