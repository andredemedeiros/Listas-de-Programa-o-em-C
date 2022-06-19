/*
Escreva um programa que leia uma cadeia de caracteres (string) que represente o
nome completo de uma pessoa e imprima o mesmo nome no formato indicado nos
exemplos a seguir. Se a String recebida for “Maria de Sá Santos” o programa deve
imprimir “Santos, Maria de Sá”. Se a String recebida for “Pedro de Souza” o programa
deve imprimir “Souza, Pedro de”. 
*/
#include <stdio.h>
int posicao(char texto[],int tam);
void imprimir(char texto[],int tam,int posicao_espaco);

int main(){
    char texto[51];
    int tam,posicao_ultimo_espaco;
    fgets(texto,51,stdin); //Ler nome
    tam=(strlen(texto)-1); //Descobrir tamanho do nome digitado
    posicao_ultimo_espaco=posicao(texto,tam); //Função vai achar a posição do ultimo espaço digitado
    imprimir(texto,tam,posicao_ultimo_espaco); //Função vai imprimir nome invertido
    return 0;
}
int posicao(char texto[],int tam){
    int posicao_espaco;
    char espaco=' ';
    posicao_espaco=(strrchr(texto,espaco)-texto);
    return posicao_espaco;
}
void imprimir(char texto[],int tam,int posicao_espaco){

    for(int i=(posicao_espaco+1);i<tam;i++) //Imprimir do último espaço até o fim do nome 
        printf("%c",texto[i]);
    printf(", ");   //Imprimir a vírugla e o espaço
    for(int i=0;i<posicao_espaco;i++)   //Imprimir o resto do nome
        printf("%c",texto[i]);
}