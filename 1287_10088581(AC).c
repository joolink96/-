#include <stdio.h>

int main()
{

    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i*n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

