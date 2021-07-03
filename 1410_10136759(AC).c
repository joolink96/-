#include <stdio.h>

int main()
{
    int i,j;
    char arr[100001]="";
    int cnt=0,dnt=0;

  gets(arr);

    for(i=0;i<100001;i++)
    {
        if(arr[i]=='(')
        {
            cnt++;
        }

        else if(arr[i]==')')
        {
            dnt++;
        }
    }

    printf("%d %d",cnt,dnt);




}
