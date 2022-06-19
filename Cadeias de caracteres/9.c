/*
Faça um programa para validar um endereço de e-mail digitado pelo usuário. O
programa deve indicar se o email fornecido é válido ou não. 
*/
#include <stdio.h>
void verifica(char email[],int tam);

int main(){
    char email[51];
    int tam;
    printf("E-mail: ");
    fgets(email,51,stdin);
    tam=(strlen(email)-1);
    verifica(email,tam);
    return 0;
}
void verifica(char email[],int tam){
    char arroba;
    arroba='@';
    int quantidade_arroba,posicao_arroba,quantidadedepontos,adjacente,espaco,dominio,comecaarroba,printou;
    quantidade_arroba=0;
    for(int i=0;i<tam;i++){ //Descobrir a quantidade de arrobas no email
            if(email[i]==arroba)
            quantidade_arroba++;
        }
    quantidadedepontos=0;
    adjacente=0;
    dominio=1;
    if(quantidade_arroba==1){ //O email deve possuir um arroba
        posicao_arroba=(strchr(email,arroba)-email); //Posição vetorial do arroba
        if(email[tam-1]!='.'){ //O email não pode terminar por "."
            for(int j=(posicao_arroba+1);j<(tam-1);j++){ //Não pode haver pontos adjacentes no email e decobrir a quantidade de pontos do email.
                if(email[j]=='.'){
                quantidadedepontos++;
                if(email[j]==email[j+1])
                    adjacente=1;
                }
            }
        }
        if(email[posicao_arroba+1]=='.'){ //O domínio do email não pode começar por "."
        dominio=0;
    }
    }
    espaco=0;
    for(int i=0;i<tam;i++){ //O email não pode contem espaços
        if(email[i]==' '){
            espaco=1;
        }
    }
    comecaarroba=0;
    if(email[0]=='@'){ //O email não pode começar por "@"
    comecaarroba=1;
    }
    printou=0;
    if(quantidadedepontos>0 && adjacente==0 && espaco==0 && dominio==1 && comecaarroba==0)
        printf("Email valido");        
    else
        printf("Email invalido");     
}