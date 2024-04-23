/* Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium index (if any) or -1 (if no equilibrium indexes exist).
3
TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4

*/

  
#include <stdio.h>

int findEquilibriumPosition(int arr[], int n) 
{
    int totalSum = 0;
    int leftSum = 0;

   
    for (int i = 0; i < n; i++) 
    {
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
       
        if (leftSum == totalSum - leftSum - arr[i]) 
        {
            return i;  
        }

        
        leftSum += arr[i];
    }

    
    return -1;
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int equilibriumIndex = findEquilibriumPosition(arr, n);
    if (equilibriumIndex != -1)
    {
        printf("Equilibrium position is at index %d\n", equilibriumIndex);
    } 
    else 
    {
        printf("No equilibrium position found\n");
    }

    return 0;
}



   