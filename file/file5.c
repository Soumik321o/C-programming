#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt","r");
    char ch;

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File exists\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
}
