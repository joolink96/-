#include <stdio.h>

int main()
{
    double a,b;


    scanf("%lf %lf",&a,&b);


    do
    {printf("%.2lf ",a);
        a+=0.01;


    }while(a<=b);








}
