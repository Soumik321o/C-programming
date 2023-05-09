#include <stdio.h>
double area (double b,double h);
int main()
{
    double base,height;

    printf("Enter base : ");
    scanf("%lf",&base);

    printf("Enter height : ");
    scanf("%lf",&height);

    printf("The area of triangle is : %.2lf",area(base,height));
}
double area (double b,double h)
{
    return 0.5*h*b;
}
