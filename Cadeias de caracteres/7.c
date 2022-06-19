/*
Implemente um programa que leia uma cadeia de caracteres e imprima todos os 
sufixos dessa cadeia. 
*/
#include <stdio.h>
void sufixos(char texto[],int tam);

int main(){
    char texto[51];
    int tam;
    printf("Cadeia de caracteres: ");
    fgets(texto,51,stdin);
    tam=(strlen(texto)-1);
    sufixos(texto,tam);
    return 0;
}
void sufixos(char texto[],int tam){
    int contador;
    contador=0;
    printf("Sufixos: ");
    for(int i=0;i<tam;i++){
        contador++;
        printf("\n");
        for(int j=(tam-contador);j<(tam);j++){
            printf("%c",texto[j]);
        }
    }
}