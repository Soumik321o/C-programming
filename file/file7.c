#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt","r");
    char fname[20];
    char lname[20];

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File exists\n");

        fscanf(file,"%s %s",&fname,&lname);
        printf("%s %s",fname,lname);

        fclose(file);


    }
}
