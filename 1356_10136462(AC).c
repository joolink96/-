
#include <stdio.h>

int main()
{
 int i,j,k;
 int n;


 scanf("%d",&n);


 for(i=0;i<n;i++)
 {

     for(j=0;j<n;j++)
     {

         if(i==0||i==n-1)
         {
             printf("*");
         }
        else
        {
            printf("*");

            for(k=0;k<n-2;k++)
            {
                printf(" ");
            }
            printf("*");
            break;
        }

     }

     printf("\n");
 }

 }








