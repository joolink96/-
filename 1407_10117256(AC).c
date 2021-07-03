#include <stdio.h>
#include <string.h>
int main()
{


    char arr[100]="";
    int i;
    gets(arr);

    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]>=65&&arr[i]<=122)
        {
            printf("%c",arr[i]);
        }
        else
        {
            printf("");
        }

    }










}
