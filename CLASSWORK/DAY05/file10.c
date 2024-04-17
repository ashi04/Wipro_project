// series 0,3,8,15,24,35,48,63,80,99
#include <stdio.h>

int main()
{
    int n=10;
    int i;
    i = 1;
    while(i<n)
    {
        printf("%d,",(i*i)-1);
        i++;
    }
    printf("%d",(i*i)-1);
    return 0;

}