#include <stdio.h>
#include <string.h>
int main()
{
   char str[501]="";
   int n;

   scanf("%s",str);


   int i;
   int sum=0;
   for(i=0;i<strlen(str);i++)
   {
       sum+=(str[i]-'0');

   }
   if(sum%3==0)
   {
       printf("1");
   }

   else
   {
       printf("0");
   }

}

