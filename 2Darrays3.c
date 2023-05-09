#include <stdio.h>

int main()
{
    int A[3][4],B[3][4],i,j;
    printf("Enter elements of A Matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of B Matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("the A matrix is :\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("the B matrix is :\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }


    return 0;
}

