#include <stdio.h>

int main()
{
    char lower;
    printf("Enter a lower case letter : ");//a=97
    scanf("%c", &lower);
    printf("The upper case letter : %c",lower-32);//A=65
    return 0;
}