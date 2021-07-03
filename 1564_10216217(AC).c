#include <stdio.h>

int a, b;

int gcd(int a,int b)
{
    int i,re;
    if(a>b)
    {
         for(i=1;i<=a;i++)
         {
             if(a%i==0&&b%i==0)
             {
                 re=i;
             }
         }

         return re;
    }

    else if(a<b)
    {
        for(i=1;i<=b;i++)
         {
             if(a%i==0&&b%i==0)
             {
                 re=i;
             }
         }
         return re;
      }

      else if(a==b)
      {
           for(i=1;i<=b;i++)
         {
             if(a%i==0&&b%i==0)
             {
                 re=i;
             }
         }
         return re;

      }
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
