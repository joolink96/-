#include <stdio.h>

int main()
{
    int a,b,c;
    int i;

    scanf("%d %d %d",&a,&b,&c);

    if(a%2==1)
    {
        for(i=a;i<c;i++)
    {
        a+=b;

    }

    }

    if(a%2==0)
    {

        for(i=a;i<=c;i++)
    {
        a+=b;

    }


    }



    printf("%d",a);

}
