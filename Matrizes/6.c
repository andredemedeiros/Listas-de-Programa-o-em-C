#include <stdio.h>

int main()
{
    int m[3][5],v[3],soma;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("Elemento i:%i, j:%i = ",i+1,j+1);
            scanf("%i%*c",&m[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        soma=0;
        for(int j=0;j<5;j++)
        {
            soma=soma+m[i][j];
        }
        v[i]=soma;
    }
    printf("\nSoma das linhas 1, 2 e 3: ");
    for(int i=0;i<3;i++)
        printf("%i, ",v[i]);
    return 0;
}
