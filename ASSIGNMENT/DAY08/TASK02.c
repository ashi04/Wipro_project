/* Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..


Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111

*/
#include <stdio.h>

long long int generateNthNumber(int n)
{
    long long int queue[1000];
    int front = 0, rear = -1;

    queue[++rear] = 1;
    queue[++rear] = 4;
    queue[++rear] = 6;
    queue[++rear] = 9;

    for(int i = 1; i < n; i++) 
    {
        long long int curr = queue[front++];
        queue[++rear] = curr * 10 + 1;
        queue[++rear] = curr * 10 + 4;
        queue[++rear] = curr * 10 + 6;
        queue[++rear] = curr * 10 + 9;
    }
      

    return queue[front];
}

int main() 
{
    int T, N;
    printf("enter test cases:");
    scanf("%d", &T);

    
    for(int i = 0; i < T; i++) 
    {
        printf("Enter N: ");
        scanf("%d", &N);
        long long int result = generateNthNumber(N);
        printf("Output: %lld\n", result);
    }

    return 0;
}