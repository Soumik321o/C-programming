
#include <stdio.h>

int main()
{
    int N,row,col;
    printf("Enter number of row :");
    scanf("%d",&N);

    for(row=1;row<=N;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
