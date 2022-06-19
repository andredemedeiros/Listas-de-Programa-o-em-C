/*
Escreva uma sub-rotina que recebe como parâmetros um vetor real A com n 
elementos e um vetor real B com m elementos, ambos representando conjuntos, e 
verifica se A está contido em B
*/
#include <stdio.h>
int estacontido(float vetA[],int n,float vetB[],int m);

int main(){
    int m,n,res,adicionar;
    printf("Quantos elementos tem o conjunto A? (minimo=1)");
    scanf("%i%*c",&n);
    float vetA[n];
    printf("Digite o 1o. elemento do conjunto A: ");
    scanf("%f%*c",&vetA[0]);
    for(int i=1;i<n;i++){
        do{
        adicionar=1;
        printf("Digite o %io. elemento do conjunto A: ",i+1);
        scanf("%f%*c",&vetA[i]);
        for(int j=0;j<i;j++){
            if(vetA[i]==vetA[j])
                adicionar=0;            
            }
        if(adicionar==0)
            printf("Valor repetido, digite um novo valor.");
        }while(adicionar==0);
    }       
    printf("Quantos elementos tem o conjunto B? (minimo=1)");
    scanf("%i%*c",&m);
    float vetB[m];
    printf("Digite o 1o. elemento do conjunto B: ");
    scanf("%f%*c",&vetB[0]);
    for(int i=1;i<m;i++){
        do{
        adicionar=1;
        printf("Digite o %io. elemento do conjunto B: ",i+1);
        scanf("%f%*c",&vetB[i]);
        for(int j=0;j<i;j++){
            if(vetB[i]==vetB[j])
                adicionar=0;            
            }
        if(adicionar==0)
            printf("Valor repetido, digite um novo valor.");
        }while(adicionar==0);
    }
    res=estacontido(vetA,n,vetB,m);
    if(res==1)
        printf("A esta contido em B.");
    else 
        printf("A nao esta contido em B.");
    return 0;
}
int estacontido(float vetA[],int n,float vetB[],int m){
    int achou,igual,estacont;
    igual=0;
    estacont=0;
    if(n<=m){
        for(int i=0;i<n;i++){
            achou=0;
            for(int j=0;j<m;j++){
                if(vetA[i]==vetB[j])
                    achou=1;
            }
            if(achou==1)
            igual++;
        }
        if(igual==n)
        estacont=1;
    }
    return estacont;
}