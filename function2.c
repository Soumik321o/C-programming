#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The square of %d is : %d ",num,square(num));
}

int square (int a)
{
    return a*a;
}
