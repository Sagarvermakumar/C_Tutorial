// Q2Write a program in c using  genrate table of a number.
#include <stdio.h>

int main()
{
    int tableOfNum = 5, i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", tableOfNum, i, tableOfNum * i);
    }
    return 0;
}