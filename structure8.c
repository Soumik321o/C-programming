#include <stdio.h>

struct person
{
    char name[20];
    int age ;
    float salary;
};

void display (struct person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %f\n",p.salary);
}

int main()
{
    struct person person1;

    strcpy(person1.name,"Soumik Das");
    person1.age=21;
    person1.salary=21000;
    display (person1);
}
