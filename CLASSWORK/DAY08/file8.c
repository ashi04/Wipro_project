#include <stdio.h>

int *f1(int);

int main()
{
    int v=2;
    int *ptr;
    ptr = f1(v); // dangling pointer situation
    printf("\nValue pointer by ptr = %d",*ptr);

    printf("\n\n");
    return 0; 
}

int *f1(int val)
{
   static int ret=101; //remove static to get d Ptr

    ret = ret+val;
    return &ret;
}
