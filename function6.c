#include <stdio.h>
void display(int x[])
{
    int i,max=x[0];
    for (i=0;i<7;i++)
    {
        if (x[i]>max)
        {
            max=x[i];
        }
    }
    printf("Maximum number is : %d",max);
}
int main ()
{
    int num[]={1,2,3,4,5,6,7};
    display (num);
}

