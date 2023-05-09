#include <stdio.h>

int main()
{
    //scanf takes input from users
    //& means address
    //%d is format specifier
    int num1 ,num2 ;
    printf("Enter two integer : ");
    scanf("%d %d", &num1, &num2);
    printf("Numbers are : %d %d",num1 ,num2);
    return 0;
}