#include <stdio.h>

int main()
{
    int num,i,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2 ; i<num ;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
        
        
    }
    if (count ==0)
    {
        printf("The number is a prime number");
    }
    else {
        printf("the number is not a prime number");
    }

    return 0;
}