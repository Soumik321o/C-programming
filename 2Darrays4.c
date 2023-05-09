#include <stdio.h>

int main()
{
    int numberOfRows,numberOfCols;
    int A[10][10],B[10][10],sum[10][10],i,j;
    printf("Enter the number of rows & cols : ");
    scanf("%d %d",&numberOfRows,&numberOfCols);
    printf("Enter the elements of matrix A :\n");
    for (i=0;i<numberOfRows;i++)
    {
        for (j=0;j<numberOfCols;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A =\n");
    for (i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of matrix B :\n");
    for (i=0;i<numberOfRows;i++)
    {
        for (j=0;j<numberOfCols;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B =\n");
    for (i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrix A and B =\n");
    for (i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d\t",A[i][j]+B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
