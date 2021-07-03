#include <stdio.h>

int main()
{
    double a,b;
    double avg;
    double how;
    scanf("%lf %lf",&a,&b);

   if(a>=160)
   {


    avg=(a-100)*0.9;
    how=(b-avg)*100/avg;
   }

    if(a<150)
   {


    avg=(a-100);
    how=(b-avg)*100/avg;
   }


    if(a>=150&&a<160)
   {


    avg=(a-150)/2+50;
    how=(b-avg)*100/avg;
   }

    if(how>20)
    {
        printf("비만");
    }
    else if(how>10&&how<=20)
    {
        printf("과체중");
    }
    else if(how<=10)
    {
        printf("정상");

    }
}

