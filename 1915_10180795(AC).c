#include <stdio.h>


int f(int a)
{



     if(a==1||a==2)
        return 1;


    return f(a-1)+f(a-2);


}


int main()
{
   int n;
    scanf("%d",&n);

    printf("%d",f(n));

}

