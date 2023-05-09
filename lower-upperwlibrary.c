#include <stdio.h>

int main()
{
    //toupper changes lowercase to uppercase
    char lower,upper;
    printf("Enter a lowercase letter : ");
    scanf("%c" ,&lower);
    upper = toupper(lower);
    printf("The uppercase letter is %c", upper);
    return 0;
}