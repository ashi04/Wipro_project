#include<stdio.h>

int main()
{
    int a[3]={65538,65539,65540};
    int i;
    char *ptr;
    //ptr is pointing to BA of array
    ptr = &a[0];
    printf("\nBase Address of array: %u\n",&a[0]);
    for(i=0;i<3;i++)
        printf("%d\t",a[i]);

    printf("\nptr = %d address= %u",*ptr,ptr);
    ptr = ptr+4;
    getchar();
    printf("\nptr = %d address= %u",*ptr,ptr);
    ptr += 4;
    getchar();
    printf("\nptr = %d address= %u",*ptr,ptr);
    ptr += 4;
    getchar();
    printf("\nptr = %d address= %u",*ptr,ptr);
    
    printf("\n\n");
    return 0;
}