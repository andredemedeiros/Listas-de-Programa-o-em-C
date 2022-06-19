/*
Implemente um programa que leia uma cadeia de caracteres e um caractere. O 
programa deve retirar da cadeia todas as ocorrências desse caractere. Imprimir a nova 
cadeia. 
*/
#include <stdio.h>
void apaga(char texto[],int tam,int caractere);

int main(){
    char texto[51],caractere;
    int tam,apagados;
    printf("Digite a cadeia de caractere: ");
    fgets(texto,51,stdin); //Ler cadeia de caracteres
    tam=(strlen(texto)-1); //Tamanho da cadeia de caracteres
    printf("Caractere a ser retirado: ");
    scanf("%c%*c",&caractere); //Ler dígito a ser apagado
    apaga(texto,tam,caractere); //Imprimir a cadeia de caracteres sem o dígito
    return 0;
}
void apaga(char texto[],int tam,int caractere){
    int teste;
    printf("Nova cadeia de caracteres: ");
    for(int i=0;i<tam;i++){ //Imprimir digítos diferentes do informado
        teste=texto[i];
        if(caractere!=teste)
            printf("%c",texto[i]);
    }
}
