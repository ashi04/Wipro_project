/* Write a c program to print alphabet triangle.
Input: 5
Output:

         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
*/
#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char alphabet = 'A';

        for (int j = 0; j < N - i - 1; j++)
        {
            printf(" ");
        } 

        for (int j = 0; j <= i; j++) 
        {
            printf("%c", alphabet++);
        }

        alphabet--; 
        for (int j = 0; j < i; j++)
        {
            printf("%c", --alphabet);
        }

        printf("\n");
    }

    return 0;
}

      
