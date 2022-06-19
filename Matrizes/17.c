#include <stdio.h>

int main(){
    float m[12][4],total_ano,total_mes[12];
    total_ano=0;
    for(int i=0;i<12;i++){ //Preencher vendas do ano e somar as vendas do ano
        for(int j=0;j<4;j++){
            printf("Vendas da %io. semana do %io. mes = ",j+1,i+1);
            scanf("%f%*c",&m[i][j]);
            total_ano=total_ano+m[i][j];
        }
    }
    for(int i=0;i<12;i++){ //Mostrar vendas de cada semana e somar a venda de cada semana às vendas de cada mês
        total_mes[i]=0;
        for(int j=0;j<4;j++){
            printf("\nVendas da %io. semana do %io; mes = %.2f",j+1,i+1,m[i][j]);
            total_mes[i]=total_mes[i]+m[i][j];
        }
    }
    for(int i=0;i<12;i++){ //Mostrar vendas de cada mês
        printf("\nVendas do %io. mes = %.2f",i+1,total_mes[i]);
    }
    printf("\nVendas do ano = %.2f",total_ano); //Mostrar vendas de cada ano
}