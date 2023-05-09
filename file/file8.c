#include <stdio.h>

int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,num,i;

    file=fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is open\n");

        printf("Enter number of students : ");
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            printf("Enter student's name :");
            fflush(stdin);
            gets(name);

            printf("Enter student's age : ");
            scanf("%d",&age);

            printf("Enter student's phone number : ");
            scanf("%d",&phoneNumber);

            fprintf(file,"\n%s\t\t %d\t%d",name,age,phoneNumber);
        }

        fclose(file);
    }
}
