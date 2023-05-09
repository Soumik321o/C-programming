#include <stdio.h>

void display (int *ptr1,int *ptr2)
{
    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("After swapping x = %d\n",*ptr1);
    printf("After swapping y = %d\n",*ptr2);
}

int main()
{
    int x=10,y=20;

    printf("Before swapping x = %d\n",x);
    printf("Before swapping y = %d\n",y);

    display (&x,&y);


}
