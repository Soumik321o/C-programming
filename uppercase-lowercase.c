#include <stdio.h>

int main()
{
    char upper;
    printf("Enter a uppercase letter : ");//A=65
    scanf("%c", &upper);
    printf("The lowercase letter : %c", upper+32);//a=97
    return 0;
}