#include <stdio.h>
#include <math.h>
int arredonda (double x);

int main(){
    double n;
    int n2;
    printf("n: ");
    scanf("%lf%*c",&n);
    n2=arredonda(n);
    printf("%lf arredondado: %i",n,n2);
}
int arredonda(double x){
    float ref;
    int pi,res;
    if(x>=0){
        pi=(int)x;
        ref=pi+0.5;
        if(ref>x)
            res=pi;
        else
            res=pi+1;
    }
    else{
        x=x*(-1);
        pi=(int)x;
        ref=pi+0.5;
        if(ref>x)
            res=pi;
        else
            res=pi+1;
        res=res*(-1);
    }
    return res;
}