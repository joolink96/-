#include <stdio.h>

long long int n;



long long int sqrt(long long int n)
{
    long long int i=0;
    while(1)
    {
        i++;

        if(i*i>n)
        {
             break;
        }

    }

    return i-1;


}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
