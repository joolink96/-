#include <stdio.h>
#include <string.h>
int main()
{
   char arr[91]="";
   int ans[30]={0};
   gets(arr);
   char c='a';

   for(int i=0;i<strlen(arr);i++)
   {

       if(arr[i]-'a'<0||arr[i]-'z'>0)
       {
           continue;
       }

       else
       {
           ans[arr[i]-'a']++;

       }
   }


  for(int i=0;i<26;i++)
  {
      printf("%c:%d\n",c++,ans[i]);
  }


}
