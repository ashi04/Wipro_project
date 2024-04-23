/* Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000
Input  :
1
10
Output :
 33

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

int generateNthPrime(int n) 
{
    int count = 0;
    int num = 2;
    while (count < n)
    {
        if (isPrime(num))
        {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main()

{
    int T, N;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        printf("Enter N: ");
        scanf("%d", &N);
        int result = generateNthPrime(N);
        printf("Output: %d\n", result);
    }

    return 0;
}

	


