#include <stdio.h>

int main()
{
    int a[3][2],b[2][5],c[3][5];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("A(%i,%i)= ",i+1,j+1);
            scanf("%i",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("B(%i,%i)= ",i+1,j+1);
            scanf("%i",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
            c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j]);
    }
    printf("\nProduto entra as matrizes A e B =\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
            printf("%i ",c[i][j]);
        printf("\n");
    }
    return 0;
}
