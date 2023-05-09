#include <stdio.h>

int main()
{
    int A[100][100],B[100][100],result[100][100];
    int i,j,k,rowA,colA,rowB,colB,sum=0;
    //if A's col not equal B's row
    printf("Enter the number of rows &cols for matrix A : ");
    scanf("%d %d",&rowA ,&colA);

    printf("Enter the number of rows &cols for matrix B : ");
    scanf("%d %d",&rowB ,&colB);

    while(colA!=rowB)
    {
        printf("\n\nError! Multiplication is not possible.\n\n");

        printf("Enter the number of rows &cols for matrix A : ");
        scanf("%d %d",&rowA ,&colA);

        printf("Enter the number of rows &cols for matrix B : ");
        scanf("%d %d",&rowB ,&colB);

    }

    //taking input for Mat A
    printf("\nEnter the elements of Matrix A :\n\n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colA;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //print Mat a
    printf("Matrix A = \n");
    for (i=0;i<rowA;i++)
    {
      for (j=0;j<colA;j++)
      {
         printf("%d\t",A[i][j]);
      }
      printf("\n");
    }

    printf("\nEnter the elements of Matrix B :\n\n");
    for(i=0;i<rowB;i++)
    {
        for(j=0;j<colB;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //print Mat b
    printf("Matrix B = \n");
    for (i=0;i<rowB;i++)
    {
      for (j=0;j<colB;j++)
      {
         printf("%d\t",B[i][j]);
      }
      printf("\n");
    }

    //Calculate mat A X mat B
    for (i=0;i<rowA;i++)
    {
        for (j=0;j<colB;j++)
        {
            for (k=0;k<colA;k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    printf("Mat A X Mat B =\n");

    for (i=0;i<rowA;i++)
    {
        for (j=0;j<colB;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }



    return 0;
}
