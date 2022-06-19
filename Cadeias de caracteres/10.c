/*
 Faça um programa para validar uma senha digitada pelo usuário. A senha deve ter
pelo menos uma letra maiúscula, pelo menos uma letra minúscula, pelo menos um
dígito, deve ter no mínimo 8 e no máximo 15 caracteres. 
*/
#include <stdio.h>
int VerificarSenha(char senha[],int tam);

int main(){
    char senha[17];
    int tam,aprovada;
    do{
        printf("\nDigite uma senha de 8 a 15 caracteres com, ao menos, uma letra maiuscula e outra, minusucula e um digito: ");
        fgets(senha,17,stdin);
        tam=(strlen(senha)-1);
        aprovada=VerificarSenha(senha,tam);
        if(aprovada==0)
            printf("Senha invalida, tente novamente.");
        else if(aprovada==1)
            printf("Senha valida.");
    }while(aprovada==0);
    return 0;
}
int VerificarSenha(char senha[],int tam){
    int caractere,maiuscula,minuscula,digito,aprovada;
    aprovada=0;
    maiuscula=0;
    minuscula=0;
    digito=0;
    if(tam>=8 && tam<=15){
        for(int i=0;i<tam;i++){
            caractere=senha[i];
            if(caractere>=48 && caractere<=57)
                digito++;
            else if((caractere>=65 && caractere<=90)||caractere==128||(caractere>=142 && caractere<=144)||(caractere>=153 && caractere<=154)||caractere==165||(caractere>=181 && caractere<=183)||caractere==199)
                maiuscula++;
            else if((caractere>=97 && caractere<=122)||(caractere>=129 && caractere<=141)||(caractere>=147 && caractere<=152)||(caractere>=160 && caractere<=164)||caractere==198)
                minuscula++;
        }
    }
    if(maiuscula>0 && minuscula>0 && digito>0)
        aprovada=1;
    return aprovada;
}