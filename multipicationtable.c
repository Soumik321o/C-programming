#include <stdio.h>

int main()
{
    while(1){
    int num , i;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Multipication Table of %d\n",num);
    for (i=1 ; i<=10 ; i++)
    {
        printf("%3d x %3d = %3d\n",num ,i ,num*i);
    }}
    return 0;
}