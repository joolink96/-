#include <stdio.h>


void f(int a,int cnt)
{
     if(a<cnt)
        return;

    printf("%d\n",cnt);

    f(a,++cnt);











}


int main()
{
   int n;
    scanf("%d",&n);



     f(n,1);



}

