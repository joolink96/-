#include <stdio.h>



int main()
{

int n;
int imsi;
int arr[10000]={0};
scanf("%d",&n);
int i,j;

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

for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}




}
