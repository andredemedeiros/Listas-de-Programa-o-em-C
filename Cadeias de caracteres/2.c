/*
Um palíndromo é uma palavra que se pode ler tanto da esquerda para a direita como
da direita para a esquerda. Alguns exemplos: arara, esse, ovo, rodador, sopapos.
Escreva um programa que leia uma cadeia de caractertes (string) e indica (imprime) se a
cadeia é ou não um palíndromo. 
*/
#include <stdio.h>
int palindromo(char texto[],int n);

int main(){
    char texto[51];
    int res,n;
    fgets(texto,51,stdin); //Ler cadeia de caracteres
    n=(strlen(texto)-1); //Descobrir tamanho da cadeia de caracteres
    printf("Caracteres: %i",n);
    res=palindromo(texto,n); //Res recebe o resultado (1 é palíndromo, 0 não é palíndromo)
    if(res==1)
        printf("\nPalindromo");
    if(res==0)
        printf("\nNao e palindromo");
    return 0;
}
int palindromo(char texto[],int n){ //A sub-rotina recebe a cadeia e o tamanho dela
    int igual,res;
    res=0;
    igual=0;
    for(int i=0;i<(n/2);i++){ //O for verifica se os extremos são iguais 
        if(texto[i]==texto[(n-1)-i])
            igual++;
    }
    if(igual==(n/2)) //Se os extremos forem igual res recebe 1
        res=1;
    return res;
}