#include <stdio.h>
int main()
{
    int arr[] = {6,7,67,7,23,9};
    int n = 6;
    int max = arr[1], min = arr[1];

for (int i = 1; i < n; i++)
{
    if (arr[i] > max)
    
        max = arr[i];
    
    if (arr[i] < min)
    
        min = arr[i];
    
}
printf("Maximum element is: %d\n", max);
printf("Minimum element is: %d\n", min);
return 0;
}
