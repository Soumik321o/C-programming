#include <stdio.h>

int main()
{
    int num;
   // printf("Enter any octal number : ");
   // scanf("%o", &num);
   // printf("The hexadecimal number is : %x",num);
    printf("Enter any hexadecimal number : ");
    scanf("%x", &num);
    printf("The octal number is : %o",num);
    return 0;
}