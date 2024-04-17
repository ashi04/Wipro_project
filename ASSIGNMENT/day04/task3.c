#include <stdio.h>

int main() 
{
    int num;

    // Ask the user for input
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table
    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}