/*
demo on while loop
*/

#include <stdio.h>


int main()
{
    int i=1, tab=2;
    printf("\n\n");
    while(i<=10)
    {
        printf("\n%d x %d = %d",tab,i,(tab*i));
        i++;
    }
    printf("\nProgram End \n");
    return 0;
}