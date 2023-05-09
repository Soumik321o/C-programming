#include <stdio.h>

int main()
{
    int num1,num2,n1,n2,rem, lcd;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    lcd =(num1*num2)/n1;
    printf("GCD and LCD are :%d&%d",n1,lcd);
    return 0;
}