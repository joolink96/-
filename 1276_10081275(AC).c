#include <stdio.h>

int main()
{
  int n;
  int i=0;
  int sum=1;

  scanf("%d",&n);

  do
  {
      sum*=n-i;
      i++;
  }while(i<n);

  printf("%d",sum);
}
