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

  if(person3.age==person2.age && person3.salary==person2.salary)
  {
      printf("Person2 equal person3");
  }
  else
  {
      printf("Person2 not equal Person3");
  }

}


