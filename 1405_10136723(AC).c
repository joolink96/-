#include <stdio.h>

int main()
{


    int i,j,n, imsi;

    scanf("%d",&n);
    int arr[100]={0};



    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

     for(i=1;i<n;i++)
         {
             imsi=arr[0];
             for(j=1; j<n; j++)
                {
                    arr[j-1]=arr[j];
                    printf("%d ", arr[j-1]);
                }
             arr[n-1]=imsi;
            printf("%d\n", arr[n-1]);
         }
}
