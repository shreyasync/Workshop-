// Iterative Binary Search
#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            return mid;    // Element found
        }
        else if(key < arr[mid])
        {
            high = mid - 1;   // Search left half
        }
        else
        {
            low = mid + 1;    // Search right half
        }
    }

    return -1;   // Element not found
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key = 50;

    int result = binarySearch(arr, n, key);

    if(result == -1)
    {
        printf("Element not found in the array\n");
    }
    else
    {
        printf("Element found at index %d\n", result);
    }

    printf("Array elements are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
