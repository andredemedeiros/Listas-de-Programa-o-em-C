/*
Escreva uma sub-rotina que localiza uma letra em um vetor de caracteres (recebidos 
como parâmetros) e retorna um outro vetor com suas posições onde a letra foi 
encontrada. 
Por exemplo:
0 1 2 3 4
[v][a][n][i][a]
// output procurando a letra "a"
[1][4]
*/
#include <stdio.h>
void localiza(char vet[],char letra,int n,int vet_localiza[],int *termo_localiza);

int main(){
    int n;
    printf("Quantas letras tem o vetor de caracteres?");
    scanf("%i%*c",&n);
    char vet[n],letra;
    int vet_localiza[n],termo_localiza;
    for(int i=0;i<n;i++){
        printf("%io. caractere: ",i+1);
        scanf("%c%*c",&vet[i]);    
        }        
    printf("Letra a ser localizada: ");
    scanf("%c%*c",&letra);
    localiza(vet,letra,n,vet_localiza,&termo_localiza);
  for(int i=0;i<termo_localiza;i++){
        printf("%i ",vet_localiza[i]);
  }
    return 0;
}
void localiza(char vet[],char letra,int n,int vet_localiza[],int *termo_localiza){
    *termo_localiza=0;
    for(int i=0;i<n;i++){
        if(vet[i]==letra){
            vet_localiza[*termo_localiza]=i+1;
            *termo_localiza=*termo_localiza+1;
        }
    }
}