#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    printf("The sum is : %d\n",sum(num1,num2));
}
//return_type function_name (arguments)
int sum (int a,int b)
{
  return a+b;
}
