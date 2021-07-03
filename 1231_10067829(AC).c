#include <stdio.h>

int main()
{
    int a,b;
    char c;
    int re;
    float d;
    scanf("%d%c%d",&a,&c,&b);

    switch(c)
    {
    case '+':
           re=a+b;
           printf("%d",re);
           break;
    case '-':
           re=a-b;
           printf("%d",re);
           break;
    case '/':
        d=(float)a/b;
        printf("%.2f",d);
        break;

    case '*':
        re=a*b;
        printf("%d",re);
        break;
    }


}

