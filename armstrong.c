
#include <stdio.h>

int main()
{
    int num,temp,rem,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }

    if(num==sum)
    {
        printf("the number is armstrong number");
    }
    else
    {
        printf("the number is not armstrong number");
    }

    return 0;
}
