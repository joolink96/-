#include <stdio.h>

int main()
{
    int a,b;
    int i;

    scanf("%d %d",&a,&b);


    if(a<b)
    {
        for(i=a;i<=b;i++)
    {
        printf("%d ",i);

    }
    }

    if(a>b)
    {


        for(i=b;i<=a;i++)
    {
        printf("%d ",i);

    }

    }
    if(a==b)
    {



        for(i=a;i<=b;i++)
    {
        printf("%d ",i);

    }


    }












}

