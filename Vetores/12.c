#include <stdio.h>
#include <math.h>

int main(){
    int n,aux,k,raiz,adicionados,adicionar,repetido;
    scanf("%i%*c",&n); //Quntidade de valores lidos
    raiz=sqrt(n);
    int v1[n],v2[n],v3[raiz];
    for(int i=0;i<n;i++){ //Ler vetor 1 (não ordenado) e vetor 2 (para a ordenação)
        scanf("%i%*c",&v1[i]);
        v2[i]=v1[i];
    }
    for(int i=0;i<(n-1);i++){ //Ordenar o vetor 2 de forma crescente
        for(int j=0;j<(n-1);j++){
            if(v2[j]>v2[j+1]){
                aux=v2[j];
                v2[j]=v2[j+1];
                v2[j+1]=aux;
            }
        }
    }
    printf("Variavel composta ordenada: ");
    for(int i=0;i<n;i++)
        printf("%i, ",v2[i]);
    adicionados=0;
    for(int i=0;i<n;i++){ //Printar valores repetidos e quantidade de vezes que aparecem repetidos
        repetido=0;
        adicionar=1;
        for(int j=0;j<n;j++){
            if(v1[i]==v1[j])
                repetido++;
        }
        if(repetido>1){
            for(int a=0;a<raiz;a++){
                if(v1[i]==v3[a])
                    adicionar=0;
            }
            if(adicionar==1){
                v3[adicionados]=v1[i];
                adicionados++;
                printf("\nO numero %i se repete %i vezes.",v1[i],repetido);
            }
        }
    }
    printf("\nK-esimo termo = ");
    scanf("%i%*c",&k);
    printf("K-esimo termo, antes e apos a ordenacao do vetor = %i e %i",v1[k-1],v2[k-1]);    
}
/*
ALGORITMO
DECLARE n,aux,k,raiz,adicionados,adicionar,repetido NUMERICO
LEIA n
raiz←sqrt(n)
DECLARE v1[n],v2[n],v3[raiz] NUMERICO
PARA  i←1 ATÉ n FAÇA
	INÍCIO
	LEIA v1[i]
    v2[i]←v1[i]
    FIM
PARA  i←1 ATÉ n-1 FAÇA
	INÍCIO
    PARA  j←1 ATÉ n-1 FAÇA
		INÍCIO
		SE v2[j]>v2[j+1] ENTAO
		INÍCIO
		aux←v2[j]
        v2[j]←v2[j+1]
		v2[j+1]←aux
		FIM
	FIM
FIM
ESCREVA "Variavel composta ordenada: "
PARA  i←1 ATÉ n FAÇA
    ESCREVA "%i, ",v2[i]
	
adicionados<-0
PARA  i←1 ATÉ n FAÇA
	INÍCIO
	repetido←0
    adicionar<-1
	PARA  j←1 ATÉ n FAÇA
		INÍCIO
			SE v1[i] = v1[j] ENTAO
			 repetido←repetido+1
		FIM
	SE repetido>1 ENTAO
		INÍCIO
			PARA  a←1 ATÉ raiz FAÇA
			INÍCIO
				SE v1[i] = v3[a] ENTAO
				adicionar←0
			FIM
		SE adicionar = 1 ENTAO
			INÍCIO
				v3[adicionados]←v1[i]
				adicionados←adicionados+1
				ESCREVA "O numero",v1[i],"se repete",repetido,"vezes."
			FIM
		FIM
	FIM
	ESCREVA "K-esimo termo = "
	LEIA k
	ESCREVA "K-esimo termo, antes e apos a ordenacao do vetor = ",v1[k-1],"e",v2[k-1]
FIM_ALGORITMO.
*/