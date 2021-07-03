#include <stdio.h>

int main()
{


    int i,j,n;
    int min=999;
    int imsi=0;
    scanf("%d",&n);
    int arr[100]={0};



    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }



    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                imsi=arr[i];
                arr[i]=arr[j];
                arr[j]=imsi;
                 }
        }
    }

    printf("%d",arr[0]);
}
