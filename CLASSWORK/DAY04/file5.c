#include <stdio.h>

int main()
{
    int x,y,z, big=0;
    x=10;
    y=500;
    z=81;
    big = (x>y)?(x>z?x:z):(y>z?y:z);
    printf("\nz=%d",big);

    printf("\n\n");
    return 0;
}