
#include <stdio.h>

int main()
{
 int a,b;
 int i;
 int sum=0;
 scanf("%d %d",&a,&b);

 for(i=a;i<=b;i++)
 {
     if(i%2==0)
     {   printf("-%d",i);
         sum-=i;
     }
     else if(i%2==1)
     {
         printf("+%d",i);
         sum+=i;
     }
 }

printf("=%d",sum);

}

