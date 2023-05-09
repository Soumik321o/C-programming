#include <stdio.h>
//1*2+2*3+3*4+....+n1*n2
int main()
{
    int num,i,sum=0;
    printf("Enter the last number of the series : ");
    scanf("%d",&num);
    printf("1*2+2*3+3*4+....+%d*%d",num,num+1);

    for(i=1;i<=num;i++)
    {
        sum=sum+i*(i+1);
    }
    printf("= %d",sum);
    return 0;
}
