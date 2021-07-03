#include <stdio.h>


void f(int a,int b)
{
     if(a>b)
        return;
    if(a%2==1)
    {
        printf("%d ",a);
    }


    f(++a,b);











}


int main()
{
   int n,k;
    scanf("%d %d",&n,&k);



     f(n,k);



}
