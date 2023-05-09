#include <stdio.h>

int main() 
{
    int num1=10;
    int num2=5;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1=%d num2=%d",num1, num2);
    return 0;
}