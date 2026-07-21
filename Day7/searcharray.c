// Iterative Linear Search in Array
#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;   // Return index if found
        }
    }
    return -1;   // Return -1 if not found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 3;

    int result = linearSearch(arr, n, key);

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
