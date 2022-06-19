/*
Implemente um programa que leia uma cadeia de caracteres e imprima todos os 
prefixos dessa cadeia. 
*/
#include <stdio.h>
void imprimir_prefixos(char texto[],int tam);

int main(){
    char texto[51];
    int tam;
    printf("Cadeia de caracteres: ");
    fgets(texto,51,stdin);
    tam=(strlen(texto)-1);
    imprimir_prefixos(texto,tam);
    return 0;
}
void imprimir_prefixos(char texto[],int tam){
    int contador;
    contador=0;
    printf("Prefixos: ");
    for(int i=0;i<tam;i++){
        contador++;
        printf("\n");
        for(int j=0;j<contador;j++){
            printf("%c",texto[j]);
        }
    }
}