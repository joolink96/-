#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       sum+=i;

       if(sum>=n)
       {
           printf("%d",i);
           break;
       }

    }




}

