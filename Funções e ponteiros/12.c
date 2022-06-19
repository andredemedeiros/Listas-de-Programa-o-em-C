/* Escreva uma sub-rotina que, dado um número real passado como parâmetro, retorne 
a parte inteira e a parte fracionária desse número por referência.*/
#include <stdio.h>
void separar(float n,int *pi,float *pf);

int main(){
    float n,pf;
    int pi;
    scanf("%f%*c",&n);
    separar(n,&pi,&pf);
    printf("Parte inteira: %i\nParte fracionaria: %f",pi,pf);
    return 0;
}
void separar(float n,int *pi,float *pf){
    *pi=(int)n;
    *pf=n-(*pi);    
}