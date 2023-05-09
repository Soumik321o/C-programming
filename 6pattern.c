
#include <stdio.h>


int main()
{
    int N,row,col;
    printf("Enter number of row :");
    scanf("%d",&N);

    for(row=1;row<=N;row++)
    {
        for(col=1;col<=N-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

    for(row=N-1;row>0;row--)
    {
        for(col=1;col<=N-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}
