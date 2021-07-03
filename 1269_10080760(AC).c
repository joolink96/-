#include <stdio.h>

int main()
{
  int a,b,c,d;
  int i;
  scanf("%d %d %d %d",&a,&b,&c,&d);


  for(i=1;i<d;i++)
  {
      a=a*b+c;
  }

  printf("%d",a);




}
