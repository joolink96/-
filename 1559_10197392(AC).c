#include <stdio.h>

int n, m;

long long int f(int n,int m)
{
    long long int sum=(long long int)n+m;

    return sum;



}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
