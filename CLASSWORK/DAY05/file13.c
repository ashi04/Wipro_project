#include <stdio.h>

int main()
{
    int i,a=0,sum=0;
    for(i=0;i<6;i++)
    {
        a=a*10+3;
        sum=sum+a;
    }
    printf("sum of series:  %d", sum);
    return 0;
}