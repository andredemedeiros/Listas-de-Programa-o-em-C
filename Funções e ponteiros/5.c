#include <stdio.h>
int fatorial(int x);

int main(){
    int x,fat;
    printf("Fatorial de: ");
    scanf("%i%*c",&x);
    fat=fatorial(x);
    printf("%i! = %i.",x,fat);
    return 0;
}
int fatorial(int x){
    int fat=1;
    for(int i=2;i<=x;i++)
        fat=fat*i;
    return fat;
}