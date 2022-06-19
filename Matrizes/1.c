#include <stdio.h>

int main()
{
    int a[6][3],iniciar,maior,menor;
    iniciar=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Elemento i:%i, j:%i = ",i+1,j+1);
            scanf("%i%*c",&a[i][j]);
            if(iniciar==0)
            {
                maior=a[i][j];
                menor=a[i][j];
                iniciar=1;
            }
            else if(a[i][j]>maior)
                maior=a[i][j];
            else if(a[i][j]<menor)
                menor=a[i][j];
        }
    }
    printf("Maior e menor elemento: %i e %i.",maior,menor);
    return 0;
}
