#include <stdio.h>

int main()
{
    char string[50];
    printf("Enter a string : ");
    gets(string);


    int capital,small,digit,i,other;
    capital=small=digit=other=i=0;

    while(string[i]!='\0')
    {
        if((string[i]>='A')&&(string[i]<='Z') )
        {
            capital++;
        }
        else if((string[i]>='a')&&(string[i]<='z'))
        {
            small++;
        }
        else if(string[i]>='0'&&string[i]<='9')
        {
            digit++;
        }
        else if(string[i]==' ')
        {

        }
        else
        {
            other++;
        }
        i++;
    }

    printf("Number of capital letters : %d\n",capital);
    printf("Number of small letters : %d\n",small);
    printf("Number of digits : %d\n",digit);
    printf("Number of other symbols : %d",other);
    return 0;
}
