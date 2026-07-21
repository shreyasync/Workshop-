#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the value");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("FishBus\n");
        }
        else if(i % 3 == 0)
        {
            printf("Fish\n");
        }
        else if(i % 5 == 0)
        {
            printf("Bus\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
