/*  rotate array every kth element
i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 7 6 5 4 9 8
*/
#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) 
{
    for (int i = 0; i < n; i += k) 
    {
        int start = i;
        int end = (i + k - 1 < n) ? i + k - 1 : n - 1;
        reverseArray(arr, start, end);
    }
}
int main() 
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;

    printf("Input: ");
    for (int i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
        printf("\nk: %d\n", k1);

        rotateArray(arr1, n1, k1);

        printf("Output: ");
    for (int i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
        printf("\n");

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
        printf("\nInput: ");
    for (int i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
        printf("\nk: %d\n", k2);

        rotateArray(arr2, n2, k2);

        printf("Output: ");
    for (int i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
        printf("\n");

    return 0;
}

