/*
demo on data types

*/

#include <stdio.h>

int main()
{
    // unsigned int i=2147483648;
    signed int i=4294967295;
    float f;
    double d;
    char ch;

    printf("\nSizeof int = %ld valueof i=%d",sizeof(i),i);
    printf("\nSizeof float = %ld",sizeof(f));
    printf("\nSizeof double = %ld",sizeof(d));
    printf("\nSizeof char = %ld",sizeof(ch));
    printf("\n\n");
    return 0;
    
}
