/*
Escreva um programa que leia uma cadeia de caracteres (string) e gera uma nova
cadeia de caracteres onde todas as letras minúsculas da cadeia original foram trocadas
por maiúsculas e vice-versa. Caracteres que não são letras (como dígitos, '.', espaço,
etc.) não devem ser trocados
*/
#include <stdio.h>
void TrocarTamanho(char texto[],int tam);

int main(){
    char texto[51];
    int tam;
    printf("Digite a cadeia de caracteries: ");
    fgets(texto,51,stdin);
    tam=(strlen(texto)-1);
    TrocarTamanho(texto,tam);
    printf("Nova cadeia de caracteres: %s",texto);
    return 0;
}
void TrocarTamanho(char texto[],int tam){
    int caractere;
    for(int i=0;i<tam;i++){
        caractere=texto[i];
        if(caractere>=65 && caractere<=90){
            texto[i]=tolower(texto[i]);
        }
        else if(caractere>=97 && caractere<=122){
            texto[i]=toupper(texto[i]);
        }
    }
}
