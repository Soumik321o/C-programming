//linear search
#include <stdio.h>

int main()
{
    int num[]={10,2,30,15,28,5},i;
    int value;
    int position =-1;
    printf("enter the value you want to find : ");
    scanf("%d",&value);
    for(i=0;i<6;i++)
    {
        if (value == num[i])
        {
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("not found");
    }
    else
    {
        printf("the position of %d is : %d",value,position);
    }

    return 0;
}
