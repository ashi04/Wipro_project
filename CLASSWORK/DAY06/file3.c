/*
demo on do while

sy:
do
{
    body of loop
}while(cond);

*/
#include <stdio.h>
int main()
{
    int i;
    i=10;
    /*
     while (i<10)
    {
        printf("\ni=%d",i);
        i++;
    }
    */
    
   

    do
    {
        printf("\ni=%d",i);
        i++;
    } while (i<10);
    

    printf("\nProgram End\n");
    return 0;
    
}