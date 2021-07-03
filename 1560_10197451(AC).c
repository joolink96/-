#include <stdio.h>

long long int n, m;
long long int f(long long int n,long long int m)
{ 
    long long int sum=0;
    if(n>m)
    {
         return sum=n-m;
    }

    else if(n<m)
    {
         return sum=m-n;
    }
   
    else if(n==m)
    {
        return sum=m-n;
    }
    
}

int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
