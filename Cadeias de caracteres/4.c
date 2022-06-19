/*
Escreva um programa que leia duas cadeias de caracteres (string) e verifica se uma é 
anagrama de outra. Anagrama é uma palavra formada pela transposição das letras de 
outra, como, por exemplo: 'capa' e 'paca'; 'roma' e 'mora'. 
*/
#include <stdio.h>
int anagrama(char texto1[],int n1,char texto2[],int n2);

int main(){

    char texto1[51],texto2[51];
    int n1,n2,res;
    printf("Digite a primeira palavra: ");
    fgets(texto1,51,stdin); //Ler primeira palavra
    n1=(strlen(texto1)-1); //Tamanho da primeira palavra
    printf("Digite a segunda palavra: "); 
    fgets(texto2,51,stdin); //Ler segunda palavra
    n2=(strlen(texto2)-1); //Tamanho da segunda palavra
    res=anagrama(texto1,n1,texto2,n2); //Se a função retornar 1, são anagramas, se 0, não são anagramas
    if(res==1)
        printf("As palavras sao anagramas.");
    else if(res==0)
        printf("As palavras nao sao anagramas.");
    return 0;
}
int anagrama(char texto1[],int n1,char texto2[],int n2){
    int caractere,teste,aparecetxt1,aparecetxt2,igualcaractere,res;
    res=0;
    igualcaractere=0;
    if(n1==n2){
        for(int i=0;i<n1;i++){
        aparecetxt1=0;
        caractere=texto1[i];
        for(int j=0;j<n1;j++){
            teste=texto1[j];
            if(caractere==teste)
                aparecetxt1++;
        }
        aparecetxt2=0;
        for(int k=0;k<n2;k++){
            teste=texto2[k];
            if(caractere==teste)
                aparecetxt2++;
        }
        if(aparecetxt1==aparecetxt2){
            igualcaractere++;
        }
    }
    if(igualcaractere==n1)
        res=1;
    }
    return res;
}
