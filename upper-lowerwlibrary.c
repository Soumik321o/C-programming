#include <stdio.h>

int main()
{
    //tlower changes uppercase to lowercase
    char lower,upper;
    printf("Enter a uppercase letter : ");
    scanf("%c" ,&upper);
    lower = tolower(upper);
    printf("The uppercase letter is %c", lower);
    return 0;
}