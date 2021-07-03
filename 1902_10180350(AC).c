#include <stdio.h>


void f(int n)
{
     if(n==0)
        return;

    printf("%d\n",n);

    f(--n);










}


int main()
{
   int n;
    scanf("%d",&n);



     f(n);



}
