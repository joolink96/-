#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100]="";

    char brr[30]="IOI";
    scanf("%s",arr);

    if(strcmp(brr,arr)==0)
    {
        printf("IOI is the International Olympiad in Informatics.");
    }

    else
    {
        printf("I don't care.");
    }



}

