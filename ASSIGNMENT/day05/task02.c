#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int count = 1; 

  
    for (int i = 1; i <= N; i++) 
    {
        
        for (int j = 1; j <= N; j++) 
        {
            printf("%d", count++);
            if (j < N)
            {
                printf("*");
            }
        }     printf("\n");
    }

    return 0;
}
