
#include <stdio.h>

int main()
{
    int A[10][10],i,j,row,col,sum=0;

    printf("Enter the row & col for Mat A : ");
    scanf("%d %d",&row, &col);

    while (row!=col)
    {
        printf("Error! The matrix is not a square matrix.");

        printf("Enter the row & col for Mat A : ");
        scanf("%d %d",&row, &col);
    }

    printf("Enter the elements of Mat A :\n");
    for (i=0;i<row;i++)
    {
      for (j=0;j<col;j++)
      {
          printf("A[%d][%d]=",i,j);
          scanf("%d",&A[i][j]);
      }
      printf("\n");
    }

    printf("Matrix A :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            if (i-j<=0)
            {
                sum=sum+A[i][j];
            }
        }
    }
    printf("\nSum of upper triangle is = %d ",sum);
    return 0;
}
