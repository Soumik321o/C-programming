#include <stdio.h>

int main()
{
    int A[10][10],transpose[10][10],i,j,k,row,col;

    printf("Enter the row & col for Mat A : ");
    scanf("%d %d",&row, &col);

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

    printf("Transpose of Matrix A :\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}
