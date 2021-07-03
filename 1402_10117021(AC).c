#include <stdio.h>

int main()
{


    int i,j,n;

    scanf("%d",&n);
    int arr[100]={0};



    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }



    for(i=n-1;i>=0;i--)
    {
       printf("%d ",arr[i]);
    }


}
