/*
nesting of loops
*/

#include <stdio.h>

int main()
{
    int i=1,tab=2;
    
    while(tab<=5) // outer loop
    {
        i=1;
        while(i<=10) //inner loop
        {
            printf("\n%d x %d = %d",tab,i,(tab*i));
            i++;
        }
        printf("\n============================\n");
        tab++;
    }
    printf("\nProgram end\n");
    return 0;
}