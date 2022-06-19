/*
Implemente um programa que gere aleatoriamente um
CAPTCHA de seis caracteres, o qual obrigatoriamente deve conter: letras maiúsculas,
letras minúscula e dígitos. O programa deve exibir o CAPTCHA gerado e solicitar que
o usuário digite o valor exibido. Em seguida, o programa deve ler o texto digitado pelo
usuário e verificar se este corresponde ao CAPTCHA gerado. Observe que, durante esta
comparação, não se faz diferença entre letras maiúsculas ou minúsculas. O programa
deve imprimir uma mensagem dizendo se o usuário passou ou não do teste. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void tamanhocaptchar(int captchar[]);
void gerarcaptchar(int captchar[],char codigo[],char resposta1[],char resposta2[]);
void verificar(char codigo[],char resposta1[],char resposta2[]);

int main(){
    int captchar[3],codigo[7],resposta1[7],resposta2[7];
    tamanhocaptchar(captchar);
    gerarcaptchar(captchar,codigo,resposta1,resposta2);
    verificar(codigo,resposta1,resposta2);
    return 0;
}
void tamanhocaptchar(int captchar[]){
    int tamanhocaptchar,aleatorio;
    srand(time(NULL));
    
    aleatorio=((rand()%4)+1); //Preenchar a primeira posição do vetor captchar com um número aleatório de 1 a 4.
    captchar[0]=aleatorio;
    tamanhocaptchar=aleatorio;

    do{ //Preenchar a segunda posição do vetor captchar com um número aleatório de 1 a 4.
        aleatorio=((rand()%4)+1);
    }while((aleatorio+tamanhocaptchar)>=6);
    captchar[1]=aleatorio;
    tamanhocaptchar=tamanhocaptchar+aleatorio;

    aleatorio=6-tamanhocaptchar; //Preenchar a terceira posição do vetor captchar com um número para completar 6.
    captchar[2]=aleatorio;
}
void gerarcaptchar(int captchar[],char codigo[],char resposta1[],char resposta2[]){
    int aleatorio;
    char aleatoriochar;
    for(int i=0;i<captchar[0];i++){ //Adicionar letras maiúsuculas ao código e as respostas
        aleatorio=(rand()%26)+65;
        aleatoriochar=aleatorio;
        codigo[i]=aleatoriochar;
        resposta1[i]=aleatoriochar;
        aleatorio=aleatorio+32;
        aleatoriochar=aleatorio;
        resposta2[i]=aleatoriochar;
    }
    for(int i=(captchar[0]);i<(captchar[0]+captchar[1]);i++){ //Adicionar letras minúsuculas ao código e as respostas
        aleatorio=(rand()%26)+97;
        aleatoriochar=aleatorio;
        codigo[i]=aleatoriochar;
        resposta1[i]=aleatoriochar;
        aleatorio=aleatorio-32;
        aleatoriochar=aleatorio;
        resposta2[i]=aleatoriochar;
    }
    for(int i=(captchar[0]+captchar[1]);i<6;i++){ //Adicionar dígitos ao código e as respostas
        aleatorio=(rand()%10)+48;
        aleatoriochar=aleatorio;
        codigo[i]=aleatoriochar;
        resposta1[i]=aleatoriochar;
        resposta2[i]=aleatoriochar;
    }
}
void verificar(char codigo[],char resposta1[],char resposta2[]){
    char resposta_usuario[10];
    int igual;
    printf("Codigo Captchar:");
    for(int i=0;i<6;i++)
        printf("%c",codigo[i]);
    printf("\nDigite o codigo captchar: ");
    fgets(resposta_usuario,10,stdin);
    igual=0;
    for(int i=0;i<6;i++){
        if((resposta_usuario[i]==resposta1[i])||(resposta_usuario[i]==resposta2[i]))
            igual++;
    }
    if(igual==6){
        printf("Passou!");
    }
    else 
        printf("Não passou, tente novamente.");
}