#include <stdio.h>

int main()
{
    float vendas[100],preco[100],total;
    total=0;
    for(int i=0;i<100;i++) //Preço das mercadorias de 1 à 100
    {
        printf("Preço da mercadoria %i = ",i+1);
        scanf("%f%*c",&preco[i]);
    }
    for(int j=0;j<100;j++) //Vendas de cada mercadoria
    {
        printf("Vendas da mercadoria %i = ",j+1);
        scanf("%f%*c",&vendas[j]);
    }
    for(int k=0;k<100;k++)
        total=total+(vendas[k]*preco[k]);
    printf("Faturamento mensal do armazém = %.2f",total);
    return 0;
}
/*
ALGORITMO
DECLARE vendas[100],preco[100],total NUMERICO
total←0
PARA  i←1 ATÉ 100 FAÇA
	INÍCIO
		ESCREVA "Preço da mercadoria",i," ="
		LEIA preco[i]
	FIM
PARA  j←1 ATÉ 100 FAÇA
	INÍCIO
		ESCREVA "Vendas da mercadoria",j," ="
		LEIA vendas[j]
	FIM
PARA  k←1 ATÉ 100 FAÇA
	total←total+(vendas[k]*preco[k])
	ESCREVA "Faturamento mensal do armazém =",total
FIM_ALGORITMO.
*/