
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

          if(a==b)
      {
          printf("%d",i);
          sum+=i;
      }
         else if(i==b)

     {
         printf("+%d",i);
         sum+=i;
         break;
     }
      else if(i==a)
      {
           printf("%d",i);
         sum+=i;
     }
     else
     {
         printf("+%d",i);
         sum+=i;
     }
      }


 }
 if(sum>0)
 {
     printf("=+%d",sum);
 }
 else if(sum<0)
 {
      printf("=%d",sum);
 }


}

