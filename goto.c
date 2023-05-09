#include <stdio.h>
// goto sends program to lebel:
int main()
{
    int i=1;
    print:
          printf("%d",i);
          if (i<5)
          goto print;
    return 0;
}