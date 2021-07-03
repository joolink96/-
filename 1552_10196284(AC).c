#include <stdio.h>

double x;




double f(double x)
{

    int a=(int)x;

    return x-a;



}
int main()
{
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
}
