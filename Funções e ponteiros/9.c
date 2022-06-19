#include <stdio.h>
#include <math.h>
unsigned int numero_ao_contrario(unsigned int numero);
unsigned int potencia(int base,int indice);

int main(){
    unsigned int numero,novo_numero;
    printf("Digite um numero: ");
    scanf("%u%*c",&numero);
    novo_numero=numero_ao_contrario(numero);
    printf("Numero ao contrario: %u",novo_numero);
    return 0;
}
unsigned int numero_ao_contrario(unsigned int numero){
    int resto,digitos,indice;
    unsigned int a;
    digitos=(log10(numero)+1);
    int vet[digitos];
    for(int i=0;i<digitos;i++){ //Adicionar os dígitos do número ao contrário no vetor vet
        resto=(numero%10);
        vet[i]=resto;
        numero=(numero/10);
    }
    /*for(int i=0;i<digitos;i++)
        printf("\n%i",vet[i]);
        */
    indice=(digitos-1);
    for(int i=0;i<digitos;i++){ //Juntar os números do vetor ao contrário
        a=((vet[i])*potencia(10,indice));
        numero=numero+a;
        indice--;
    }
    return numero;
}
unsigned int potencia(int base,int indice){ //Função para calcular potências
    unsigned int pot=1;
    while(indice>0){
        pot=base*pot;
        indice--;
    }
    return pot;
}