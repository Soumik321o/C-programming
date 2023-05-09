
#include <stdio.h>
//1+2+3+.......+
int main()
{
    int num,i,sum=1;

    printf("Enter the last number of the series : ");
    scanf("%d", &num);
    printf("1x2x3x4x...x%d",num);
    for(i=1;i<=num;i=i+1)
    {
        sum=sum*(i*i);
    }
    printf("= %d",sum);

    return 0;
}
