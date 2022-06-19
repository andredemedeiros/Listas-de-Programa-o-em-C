#include <stdio.h>
float calcula(float x, float y, char op);

int main(){
    float x,y;
    char op;
    printf("x= ");
    scanf("%f%*c",&x);
    printf("y= ");
    scanf("%f%*c",&y);
    printf("Operacao (a=+,s=-,m=*,d=/): ");
    scanf("%c%*c",&op);
    calcula(x,y,op);
}
float calcula(float x, float y, char op){
    float soma,sub,mult,div;
    if(op=='a'){
        soma=x+y;
        printf("\nSoma de %f e %f = %f.",x,y,soma);
    }
    else if(op=='s'){
        sub=x-y;
        printf("\nSubtracão de %f por %f = %f.",x,y,sub);
    }
    else if(op=='m'){
        mult=x*y;
        printf("\nMultiplicacao de %f por %f = %f.",x,y,mult);
    }
    else if(op=='d'){
        div=x/y;
        printf("\nDivisão de %f por %f = %f.",x,y,div);
    }
    return 0;
}