/*
Write the logic to print star pattern or rectangle star pattern
Sample Input:
5

Sample Output:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main()
{
    
    for(int i=0;i<= 5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            printf(" * ");
        }

            printf( "\n");
    }
}