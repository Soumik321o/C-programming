#include <stdio.h>
double powers (double base,double exp);

int main()
{
    double base,exp;

    printf("Enter base : ");
    scanf("%lf",&base);

    printf("Enter exponent : ");
    scanf("%lf",&exp);

    printf("%.lf to the power %.lf is : %.2lf",base,exp,powers(base ,exp));
}

double powers (double base,double exp)
{
    double result=1,i;
    for (i=1;i<=exp;i++)
    {
        result=result*base;
    }
    return result;

}
