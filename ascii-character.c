#include <stdio.h>

int main()
{
    /*if we put data from int to char the program will transform
    int into a char acording to ascii chart*/
    int n;
    printf("Enter any ascii value : ");
    scanf("%d", &n);
    printf("Ascii character is %c",n);
    return 0;
}