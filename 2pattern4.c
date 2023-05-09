
#include <stdio.h>

int main()
{
    int N,row,col;
    printf("Enter number of col :");
    scanf("%d",&N);

    for(col=N;col>0;col--)
    {
        for(row=1;row<=col;row++)
        {
            printf("%d",col%2!=0);
        }
        printf("\n");
    }
    return 0;
}
