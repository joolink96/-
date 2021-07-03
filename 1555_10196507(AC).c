#include <stdio.h>

int n;





long long int f(int n)
{

    int i;
    long long int sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;


}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
