#include <stdio.h>
#include <string.h>

int main()
{
   char arr[11]="";
   int i;
   int brr[11]={0};
   scanf("%s",arr);


   for(i=0;i<strlen(arr);i++)
   {
     if(arr[i]=='t')
     {
        brr[i]=i+1;

     }

   }

   for(i=0;i<11;i++)
   {
     if(brr[i]!=0)
     {
     printf("%d ",brr[i]);
     }


   }




}
