#include <stdio.h>

int main()
{


    int i,j,n;
    int cnt=0;
    int arr[23]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    scanf("%d",&n);
    int brr[23]={0};
    int crr[23]={0};



    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }

    for(i=0;i<23;i++)
    {   cnt=0;
        for(j=0;j<23;j++)
        {
         if(arr[i]==brr[j])
        {
            cnt++;
            crr[i]=cnt;

        }


        }


    }

    for(i=0;i<23;i++)
    {
        printf("%d ",crr[i]);
    }

}
