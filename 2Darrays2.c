#include <stdio.h>

int main()
{
    int A[3][4],i,j;
    printf("Enter the 3x4 Matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("the 3x4 matrix is :\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
