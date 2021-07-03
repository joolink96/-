#include <stdio.h>

int n;




int f(n)
{
    
    if(n==1)
    {
        printf("hello");
        
    }
    else if(n==2)
    {
        printf("world");
    }
    
    
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
