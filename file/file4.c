#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("test1.txt","w");
    char name[20];
    int age;

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File has been created\n");

        printf("Enter your name : ");
        gets(name);

        printf("Enter age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s \nAge = %d",name,age);
        fclose(file);
    }

}

