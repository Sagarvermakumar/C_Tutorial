//Q3 Write a program in c to find area of right angle triangle

#include <stdio.h>
int main()
{
    int height, base, area;
    height = 5;
    base = 20;
    area = 0.5 * height * base;
    printf("Area of right angle triangle is %d", area);
    return 0;
}