#include <stdio.h>

int main()
{
    int x=10,y=20,sum;
    int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    printf("X = %d\n",*ptr1);
    printf("Y = %d\n",*ptr2);
    printf("Sum = %d",*ptr1+*ptr2);
}
