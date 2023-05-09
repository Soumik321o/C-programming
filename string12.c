#include <stdio.h>

int main()
{
    char s1[50]="lol";
    char s2[50];

    int i=0,len=0,j;

    while (s1[i]!='\0')
    {
        i++;
        len++;
    }
    for (j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    printf("s1 string = %s\n",s1);
    printf("s2 string = %s\n",s2);

    int d=strcmp(s1,s2);

    if (d==0)
    {
        printf("s1 & s2 are palindrome");
    }
    else
    {
        printf("s1 & s2 are not palindrome");
    }
    return 0;
}
