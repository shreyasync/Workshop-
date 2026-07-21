#include<stdio.h>
int main()
{
  int a,b,temp;
printf("Enter the first number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
printf("\nBefore Swapping;\n");
printf("A=%d\n",a);
printf("B=%d\n",b);
temp=a;
a=b;
b=temp;
printf("\nAfter Swapping;\n");
printf("A=%d\n",a);
printf("B=%d\n",b);
return 0;
}
