#include <stdio.h>
void display(int x[])
{
    int i;
    for (i=0;i<7;i++)
    {
        printf("%d\n",x[i]);
    }
}
int main ()
{
    int num[]={1,2,3,4,5,6,7};
    display(num);
}
