/*
Implemente um programa que leia uma cadeia de caracteres e um número inteiro
positivo “n”. O programa deve imprimir todas as sub-cadeias da cadeia original de
comprimento igual a “n”.
*/
#include <stdio.h>
void subCadeias(char cadeia[],int tam,int n);

int main(){
    char cadeia[51];
    int n,tam;
    printf("Cadeia de caracteres: ");
    fgets(cadeia,51,stdin);
    tam=(strlen(cadeia)-1);
    printf("n: ");
    scanf("%i%*c",&n);
    subCadeias(cadeia,tam,n);
    return 0;
}
void subCadeias(char cadeia[],int tam,int n){
    for(int i=0;i<=(tam-n);i++){
        for(int j=0;j<n;j++){
            printf("%c",cadeia[i+j]);
        }
        printf("\n");
    }
}