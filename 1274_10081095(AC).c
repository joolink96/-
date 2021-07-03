#include <stdio.h>

int main()
{
  int n;
  int i;
  int cnt=0;

  scanf("%d",&n);

  for(i=2;i<=n;i++)
  {
      if(n%i==0)
      {
          cnt++;
      }
  }
 if(cnt==1)
 {
     printf("prime");
 }
 else
 {
     printf("not prime");
 }




}
