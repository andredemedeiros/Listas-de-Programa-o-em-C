#include <stdio.h>
#include <math.h>
int divisores(int n);

int main(){
    int n,res;
    n=1;
    while(n!=0){
        scanf("%i%*c",&n);
        if(n!=0){
            res=divisores(n);
            printf("%i ",res);
        }
    }
}
int divisores(int n){
    int resto,div;
    div=0;
    for(int i=1;i<=n;i++){
        if((n%i)==0)
            div++;
    }
    return div;
}