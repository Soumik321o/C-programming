#include <stdio.h>

int main()
{
    int num,n1=0,n2=1,count=0,fibo;
    printf("Print fibonacii sereies till terms = ");
    scanf("%d",&num);
    printf("%d\n%d\n",n1,n2);

    while(count<=num-3)
    {
      fibo=n1+n2;
      printf("%d\n",fibo);
      n1=n2;
      n2=fibo;
      count++;
    }
    return 0;
}
