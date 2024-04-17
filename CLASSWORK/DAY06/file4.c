/*
demo on arrays
*/
#include <stdio.h>
#define SIZE 3

int main()
{
    int CAP=3;
    int arr[SIZE] = {10,20,30};
    
    printf("\naddress of arr[%d] = %u and value=%d",0,&arr[0],arr[0]);
    printf("\naddress of arr[%d] = %u and value=%d",1,&arr[1],arr[1]);
    printf("\naddress of arr[%d] = %u and value=%d",2,&arr[2],arr[2]);
    
    arr[0] = 101;
    printf("\naddress of arr[%d] = %u and value=%d",0,&arr[0],arr[0]);
    printf("\naddress of arr[%d] = %u and value=%d",1,&arr[1],arr[1]);
    printf("\naddress of arr[%d] = %u and value=%d",2,&arr[2],arr[2]);
    
    printf("\n\n");
    return 0;
}