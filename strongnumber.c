#include <stdio.h>

int main()
{
    int num,sum=0,rem,temp;
    printf("Enter a number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        int i,fact=1;
        for(i=1;i<=rem;i++)
        {
           fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("the number is strong number");
    }
    else
    {
        printf("the number is not strong number");
    }
    return 0;
}
