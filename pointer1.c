#include <stdio.h>

int main()
{
    int x=5;
    int *ptr;
    ptr=&x;

    printf("Value of x : %d\n",x);
    printf("Address of x : %d\n",&x);
    printf("Address of x : %d\n",ptr);
    printf("content of ptr : %d\n",*ptr);
    printf("Address of ptr : %d\n",&ptr);
}
