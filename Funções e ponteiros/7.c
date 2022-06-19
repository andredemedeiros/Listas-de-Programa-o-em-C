#include <stdio.h>
float potencia(float x,float z);

int main(){
    float x,z,res;
    printf("x= ");
    scanf("%f%*c",&x);
    printf("z= ");
    scanf("%f%*c",&z);
    res=potencia(x,z);
    printf("(%f)^(%f) = %f.",x,z,res);
    return 0;
}
float potencia(float x,float z){
    float pot=1;
    if(z>=0){
    for(int i=1;i<=z;i++)
        pot=pot*x;
    }
    else {
        z=z*(-1);
        for(int i=1;i<=z;i++)
            pot=pot*x;
        pot=(1/pot);
    }
    return pot;
}