#include <stdio.h>

int main()
{
    int array1[5]={10,20,30,40,50},array2[5],i;
    printf("Array1 : \n");
    for (i=0;i<5;i++)
    {
        printf("%d\n",array1[i]);
    }
    for (i=0;i<5;i++)
    {
        array2[i]=array1[i];
    }
    printf("Array2 :\n");
    for(i=0;i<5;i++)
    {
        printf("%d \n",array2[i]);
    }
    return 0;
}
