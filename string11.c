#include <stdio.h>

int main()
{
    char s1[50]="Soumik Das";
    char s2[50];
    int i=0,len=0,j;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf("%s",s2);

    return 0;
}
