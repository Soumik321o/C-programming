#include <stdio.h>

//global structure
struct person
{
    int age;
    float salary;
};
//struct person person1,person2;//global variable
int main()
{
  struct person person1,person2;//local variable

  printf("Enter information of person1 : \n");
  printf("Enter age : ");
  scanf("%d",&person1.age);

  printf("Enter salary : ");
  scanf("%f",&person1.salary);

  printf("Person1 : \n");
  printf("Age = %d\n",person1.age);
  printf("Salary = %.2f\n",person1.salary);

  printf("Enter information of person2 : \n");
  printf("Enter age : ");
  scanf("%d",&person2.age);

  printf("Enter salary : ");
  scanf("%f",&person2.salary);

  printf("Person2 :\n");
  printf("Age = %d\n",person2.age);
  printf("Salary = %.2f\n",person2.salary);


}

