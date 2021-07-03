#include <stdio.h>

int main()
{
    int arr[3]={0};
    int i,n=0;



    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i=0;i<3;i++)
    {



        if(arr[i]<=170)
        {
            n++;
            printf("CRASH");
            printf(" %d",arr[i]);
            break;
        }







    }


   if(n==0)
   {
       printf("PASS");
   }


}

