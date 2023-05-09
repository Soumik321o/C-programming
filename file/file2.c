#include <stdio.h>

int main()
{
    FILE *file;
    char name[20]="Soumik Das";
    int length = strlen(name);
    int i;

    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully");
        fclose(file);
        return 0;
    }
}
