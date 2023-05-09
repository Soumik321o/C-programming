#include <stdio.h>

int main()
{
    int num[100],n,i;
    printf("How many numbers : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];

    for(i=1;i<n;i++)
    {
        if (max < num[i])
        {
            max=num[i];
        }
    }
    printf("Maxium number is %d\n",max);

    int mini=num[0];

    for (i=1;i<n;i++)
    {
        if (mini>num[i])
        {
            mini=num[i];
        }
    }

    printf("Minimum number is %d",mini);

    return 0;
}
