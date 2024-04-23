/*
Demo on command line args

*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i;
    int arr[100];
    printf("\nNo of args passed=%d",argc);
    for(i=0;i<argc;i++)   
        printf("\nargv[%d] = %s",i,argv[i]);
    
    for(i=1;i<argc;i++)
    {
        arr[i-1] = atoi(argv[i]);
    }

    printf("\nList is \n");

    for(i=0;i<argc-1;i++)
        printf(" %d ",arr[i]);


    printf("\n\n");
    return 0;
}