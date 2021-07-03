#include <stdio.h>

int main()
{
    int i,j,n;

    scanf("%d",&n);


   if(n<=7)
   {


    for(i=1;i<=n-1;i++)
    {


        for(j=n-1;j>=1;j--)
        {

            if(i+j==n)
            {
                printf("%d %d\n",i,j);
            }




        }
        

    }

   }

   else if(n>7)
   {



       for(i=2;i<=6;i++)
    {


        for(j=6;j>=2;j--)
        {

            if(i+j==n)
            {
                printf("%d %d\n",i,j);
            }





        }


    }




   }
}
