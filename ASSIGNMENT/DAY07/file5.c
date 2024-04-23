/*
demo on rec. fuc
*/
#include <stdio.h>

int fact(int);

int main()
{
    printf("\nFactorial = %d",fact(5));
    printf("\n\n");
    return 0;
}

int fact(int n)
{
    int ret=0;
    printf("\nn=%d\n",n);
    if(n==0)
        return 1;
    ret = n * fact(n-1);
    printf("\nRet=%d and n=%d\n",ret,n);
    return ret;
    
}