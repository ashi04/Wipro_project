/* Print series 1, 2, 4, 8, 16, 32, 64. given n = 64 */

#include <stdio.h>

int main() 
{
    int n = 1;
    
    while (n <= 64) 
    {
        printf("%d , ", n);
        n *= 2;
    }
    return 0;
}