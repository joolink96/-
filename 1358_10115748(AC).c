#include <stdio.h>

int main()
{
    int i,j,k,n;


    scanf("%d",&n);


        for(i=0;i<=n/2;i++)
      {
        for(j=n/2;j>i;j--)
        {
           printf(" ");


        }
        for(k=0;k<=i*2;k++)
        {
            printf("*");
        }


            printf("\n");



    }

    }




