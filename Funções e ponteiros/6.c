#include <stdio.h>
void triangulo(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Lados do triangulo: ");
    scanf("%i%*c %i%*c %i%*c",&a,&b,&c);
    triangulo(a,b,c);
    return 0;
}
void triangulo(int a,int b,int c){
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        if((a==b)&&(a==c))
            printf("equilatero");
        else if((a!=b)&&(a!=c))
            printf("escaleno");
        else 
            printf("isosceles");
    }
    else 
        printf("nao forma triangulo");
}