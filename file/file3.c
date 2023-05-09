#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("test1.txt","w");
    char name[20];

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File has been created\n");
        printf("Enter your full name : ");
        gets(name);
        fputs(name,file);
        printf("File has been written successfully\n");
        fclose(file);
    }

}
