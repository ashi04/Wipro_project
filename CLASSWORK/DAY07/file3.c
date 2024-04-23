/*
thumb rules of ptr
1. op[] = > array => *op
   *op => ptr => op[]

2. &* => Nullify each other 
     &*op => op
*/

#include <stdio.h>

int main()
{
    int a[3] = {10,20,30};

    int *ptr;

    printf("\nArray format\n");
    printf("\na[0] = %d",a[0]);
    printf("\na[1] = %d",a[1]);
    printf("\na[2] = %d",a[2]);

    printf("\nPointer notation\n");
    printf("\na[0] = %d",*(a+0));
    printf("\na[1] = %d",*(a+1));
    printf("\na[2] = %d",*(a+2));

    //ptr = &a[0];
    //ptr = (a+0);
    ptr = a; //=> base address of array == name of array 

    printf("\na[0] = %d=>using ptr",*ptr);

    ptr++;
    printf("\na[1] = %d=>using ptr",*ptr);

    ptr++;
    printf("\na[2] = %d=>using ptr",*ptr);



    printf("\n\n");
    return 0;
}

/*

sort the array element in assending order using ptr 
*/