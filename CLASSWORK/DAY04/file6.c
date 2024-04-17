#include <stdio.h>

int func1(int);


int main()
{
    int z=10, retValue=0;
    long double ld;
    printf("\n%d %d\n\n", sizeof(z), sizeof(ld));
    retValue = func1(++z);
    
    printf("\nRetValue = %d\tz=%d",retValue,z);
    retValue = sizeof(++z);
    printf("\nRetValue = %d\tz=%d",retValue,z);
    
    printf("\n\n");
    return 0;

}

int func1(int x)
{
    return x;
}