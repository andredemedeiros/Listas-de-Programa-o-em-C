#include <stdio.h>
int eVogal(char letra);

int main(){
    char letra;
    int res;
    printf("Digite uma letra: ");
    scanf("%c%*c",&letra);
        res=eVogal(letra);
    printf("%i",res);
    return 0;
}

//Programa para testar a função int eVogal(char letra)
/*    
int main(){
    char letra;
    int res;
    for(int i=97;i<=122;i++){
        letra=i;
        res=eVogal(letra);
        printf("\n%c=%i",letra,res);
    }
    return 0;
}
*/
    
int eVogal(char letra){
    int res=0;
    if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
        res=1;
    return res;
}