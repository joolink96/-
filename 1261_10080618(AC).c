#include <stdio.h>

int main()
{
    int arr[10]={0};
    int i;
    int cnt=0;

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        if(arr[i]%5==0)
        {
            printf("%d",arr[i]);
            cnt++;
            break;

        }


    }
    if(cnt==0)
    {
        printf("0");
    }



}
