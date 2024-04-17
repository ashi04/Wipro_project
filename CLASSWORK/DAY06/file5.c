#include <stdio.h>
#define CAP 5
int main()
{
    int i;
    int arr[CAP];
    //strore elements of array
    printf("\nEnter %d elements of the arrays\n",CAP);
    for(i=0;i<CAP;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nList is\n");
    for(i=0;i<CAP;i++)
    {
        printf("\narr[%d] = %d",i, arr[i]);
    }
    printf("\n\n");
    return 0;
}