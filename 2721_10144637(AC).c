#include <stdio.h>
#include <string.h>

int main()
{
    char arr[21]="";
    char brr[21]="";
    char crr[21]="";

    scanf("%s",arr);

        scanf("%s",brr);

            scanf("%s",crr);


    if(arr[strlen(arr)-1]==brr[0]&&brr[strlen(brr)-1]==crr[0]&&crr[strlen(crr)-1]==arr[0])
    {
        printf("good");
    }
    else
    {
        printf("bad");
    }






}



