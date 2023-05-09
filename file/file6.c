#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt","r");
    char ch[40];

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File exists\n");

        while(!feof(file))
        {
            fgets(ch,39,file);
            printf("%s\n",ch);
        }

        fclose(file);
    }
}

