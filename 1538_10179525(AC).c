#include <stdio.h>

int n;




int f(n)
{
    
    if(n%2==1)
    {
        printf("odd");
        
    }
    else if(n%2==0)
    {
        printf("even");
    }
    
    
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
