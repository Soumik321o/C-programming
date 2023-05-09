#include <stdio.h>
#include <math.h>

int main()
{
    int num,temp,rem,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,0);
        temp=temp/10;
    }

    printf("Number of digits = %d",sum);

    return 0;
}
