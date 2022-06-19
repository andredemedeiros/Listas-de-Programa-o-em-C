#include <stdio.h>

int main()
{
    int n;
    float divisor[10],resto;
    printf("Grau de P(x) (n<=20) = ");
    scanf("%i%*c",&n);
    
    float coef[n+1];
    for(int i=0;i<=n;i++)//Receber os coeficientes de P(x)
    {
        printf("a(indice=%i) = ",i);
        scanf("%f%*c",&coef[i]);
    }
    for(int j=0;j<10;j++)//Receber os 10 divisores de P(x)
    {
        printf("X(indice=%i) = ",j+1);
        scanf("%f%*c",&divisor[j]);
    }
    for(int i=0;i<=n;i++)
        printf("\n%f.",coef[i]);
    
    for(int l=0;l<10;l++)//Aplicar o dispositivo de briot ruffini para achar o resto da divisão
    {
        resto=coef[n];
        for(int k=(n-1);k>=0;k--)
        {   
            resto=coef[k]+(resto*divisor[l]);
        }
        printf("\nPara x = %f, P(x) = %f",divisor[l],resto);
    }
}
/*
ALGORITMO
DECLARE n, divisor[10],resto NUMERICO
ESCREVA "Grau de P(x) (n<=20) = "
LEIA n
DECLARE coef[n+1] NUMERICO
	PARA  i←1 ATÉ n FAÇA
	INÍCIO
		ESCREVA "a(indice=","i",") = "
		LEIA coef[i]
	FIM
PARA  j←1 ATÉ 10 FAÇA
	INÍCIO
		ESCREVA "X(indice=","j",") = "
		LEIA divisor[j]

	FIM
PARA  i←1 ATÉ n FAÇA
	ESCREVA "\n.",coef[i]
PARA  l←1 ATÉ 10 FAÇA
	INÍCIO
		resto←coef[n]
		PARA  k←n ATÉ 1 FAÇA
		INÍCIO
		resto<-coef[k]+(resto*divisor[l])
		FIM
	ESCREVA "Para x =",divisor[l],"P(x) = ",resto
	FIM
FIM_ALGORITMO.
*/