/*
Implemente um programa que leia um ano, no formato dddd, e imprime o ano por
extendo. 
*/
#include <stdio.h>
void extenso(char data[],int tam);

int main(){
    char data[7];
    int tam;
    printf("Ano: ");
    fgets(data,7,stdin);
    tam=(strlen(data)-1);
    extenso(data,tam);
    return 0;
}
void extenso(char data[],int tam){
    if(data[0]=='1')
        printf("mil");
    if(data[0]=='2')
        printf("dois mil");
    if(data[0]=='3')
        printf("tres mil");
    if(data[0]=='4')
        printf("quatro mil");
    if(data[0]=='5')
        printf("cinco mil");
    if(data[0]=='6')
        printf("seis mil");
    if(data[0]=='7')
        printf("sete mil");
    if(data[0]=='8')
        printf("oito mil");
    if(data[0]=='9')
        printf("nove mil");
    if(data[1]=='1')
        printf(" e cento");
    if(data[1]=='2')
        printf(" e duzentos");
    if(data[1]=='3')
        printf(" e trezentos");
    if(data[1]=='4')
        printf(" e quatrocentos");
    if(data[1]=='5')
        printf(" e quinhentos");
    if(data[1]=='6')
        printf(" e seiscentos");
    if(data[1]=='7')
        printf(" e setecentos");
    if(data[1]=='8')
        printf(" e oitocentos");
    if(data[1]=='9')
        printf(" e novecentos");
    if(data[2]=='1'){
        if(data[3]=='0')
        printf(" e dez");
        if(data[3]=='1')
        printf(" e onze");
        if(data[3]=='2')
        printf(" e doze");
        if(data[3]=='3')
        printf(" e treze");
        if(data[3]=='4')
        printf(" e quatorze");
        if(data[3]=='5')
        printf(" e quinze");
        if(data[3]=='6')
        printf(" e dezesseis");
        if(data[3]=='7')
        printf(" e dezezete");
        if(data[3]=='8')
        printf(" e dezoito");
        if(data[3]=='9')
        printf(" e dezenove");
    }
    if(data[2]=='2')
        printf(" e vinte");
    if(data[2]=='3')
        printf(" e trinta");
    if(data[2]=='4')
        printf(" e quarenta ");
    if(data[2]=='5')
        printf(" e cinquenta");
    if(data[2]=='6')
        printf(" e sessenta");
    if(data[2]=='7')
        printf(" e setenta");
    if(data[2]=='8')
        printf(" e oitenta");
    if(data[2]=='9')
        printf(" e noventa");
    if(data[3]=='1'&& data[2]!='1')
        printf(" e um");
    if(data[3]=='2'&& data[2]!='1')
        printf(" e dois");
    if(data[3]=='3'&& data[2]!='1')
        printf(" e tres");
    if(data[3]=='4'&& data[2]!='1')
        printf(" e quatro");
    if(data[3]=='5'&& data[2]!='1')
        printf(" e cinco");
    if(data[3]=='6'&& data[2]!='1')
        printf(" e seis");
    if(data[3]=='7'&& data[2]!='1')
        printf(" e sete");
    if(data[3]=='8'&& data[2]!='1')
        printf(" e oito");
    if(data[3]=='9'&& data[2]!='1')
        printf(" e nove");    
}