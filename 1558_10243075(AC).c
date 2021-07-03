#include <stdio.h>

long long int n;

long long int f(long long int n)
{
    long long int m=0;
    while(n)
    {


         m=m*10+n%10;

        n=n/10;


    }

      return m;





}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
