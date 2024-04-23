/* Print series 0,3,8,15,24,35,48,63,80,99 given n = 10 */


#include <stdio.h>

int main() 
{
    int n = 10;
    int i;
    int a = 0;
    for (i = 1; i <= n; i++) 
    {
        a = i * i - 1; 
        printf("%d , ", a);
    }
       return 0;
}
    