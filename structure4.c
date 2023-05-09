#include <stdio.h>

//global structure
struct person
{
    int age;
    float salary;
};

int main()
{
  struct person person1={27,25250.24};
  struct person person2,person3;
 //element wise initialization
  person2.age=28;
  person2.salary=28340.70;

  person3=person2;


  printf("Person1 : \n");
  printf("Age = %d\n",person1.age);
  printf("Salary = %.2f\n",person1.salary);


  printf("Person2 :\n");
  printf("Age = %d\n",person2.age);
  printf("Salary = %.2f\n",person2.salary);

  printf("Person3 :\n");
  printf("Age = %d\n",person3.age);
  printf("Salary = %.2f\n",person3.salary);



}

