#include <stdio.h>

int main()
{
    int arr[5]={0};
    int i;
    int max=-999999;
    int min=999999;

    for(i=0;i<5;i++)
    {
        scanf("%d\n",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }



    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    printf("%d\n",max);
    printf("%d",min);
}
