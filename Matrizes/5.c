#include <stdio.h>

int main()
{
    int m[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Elemento i:%i, j:%i = ",i+1,j+1);
            scanf("%i%*c",&m[i][j]);
        }
    }
    printf("\nMatriz sem d.s.: \n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i+j)==3)
                printf(" ");
            else 
                printf("%i",m[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
