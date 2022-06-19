#include <stdio.h>

int main()
{
    int tamanho;
    scanf("%i%*c", &tamanho);
    int vet[tamanho];
    for(int i=0;i<tamanho;i++)//Ler variável composta
    {
        scanf("%i%*c",&vet[i]);
    }
    int aux,contador;
    contador=0;
    do{//Ordenar vetor em forma crescente
    for(int i=0;i<(tamanho-1);i++)
    {
        if(vet[i]>vet[i+1])
        {
            aux=vet[i];
            vet[i]=vet[i+1];
            vet[i+1]=aux;
        }
    contador++;
    }
    }while(contador<=(tamanho*tamanho));
    
    int repetido_depois,termo,repetido_antes;
    termo=0;
    for(int i=0;i<(tamanho-1);i++)//Imprimir números repetidos
    {   
        termo++;
        repetido_depois=0;
        repetido_antes=0;
        if(termo==1)
            {
            for(int j=0;j<tamanho;j++)
                {
                    if(vet[i]==vet[j])
                    {
                        repetido_depois++;
                    }
                }
            }
        else
            {
                for(int k=0;k<i;k++)
                {
                    if(vet[i]==vet[k])
                    repetido_antes++;
                }
                if(repetido_antes==0)
                {
                    for(int l=i;l<tamanho;l++)
                    {
                    if(vet[i]==vet[l])
                    repetido_depois++;
                    }
                }
            }
        if((repetido_antes==0) && (repetido_depois>1))
        printf("O termo %i está repetido %i vezes.\n",vet[i],repetido_depois);
    }
    
    int t_novo, novo[tamanho],igual;//Colocar os elementos que nçao se repetem em outro vetor
    for(int i=0;i<tamanho;i++)
    {
        igual=0;
        for(int j=0;j<tamanho;j++)
        {
            if(vet[i]==vet[j])
                igual++;
        }
        if(igual==1)
        {
            novo[t_novo]=vet[i];
            t_novo++;
        }
    }
    printf("Conjunto em ordem crescente={");
    for(int i=0;i<tamanho;i++)
        printf("%i,",vet[i]);
    printf("}");
    
    printf("\nNovo conjunto={");
    for(int i=0;i<t_novo;i++)
        printf("%i,",novo[i]);
    printf("}");
    return 0;
}