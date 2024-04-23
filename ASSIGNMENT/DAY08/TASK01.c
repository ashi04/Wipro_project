/* check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17

No of Ways = 4
No of Ways=-1


*/
#include <stdio.h>

int isPrime(int num) 
{
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

void findPrimeSum(int n)
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) && isPrime(n - i)) 
        {
            printf("%d = %d + %d\n", n, i, n - i);
            count++;
        }
    }
     
    if (count == 0) 
    {
        printf("NoofWays = -1\n");
    } 
    else 
    {
        printf("NoofWays = %d\n", count);
    }
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    findPrimeSum(num);

    return 0;
}