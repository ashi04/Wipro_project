/* Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.
Input Format:
The first line contains an integer, denoting the size of the array.The second line contains integers denoting the elements
of the array.The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

*/
#include <stdio.h>

void findSubarray(int arr[], int n, int target_sum)
{
    int current_sum = arr[0];
    int start = 0;
    int end = 0;

    while (end < n) 
    {
       
        while (current_sum > target_sum && start <= end)
        {
            current_sum -= arr[start];
            start++;
        }
 
        if (current_sum == target_sum) 
        {
            printf("Sum found between indexes %d and %d\n", start, end);
            return;
        }

        end++;
        if (end < n) 
        {
            current_sum += arr[end];
        }
    }

    
    printf("No subarray found\n");
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

    int target_sum;
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    findSubarray(arr, n, target_sum);

    return 0;
}

