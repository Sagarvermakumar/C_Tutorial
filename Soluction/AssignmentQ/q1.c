// Q1  Write a program in c using switch statement.
#include <stdio.h>
int main()
{
    
    int day = 5;
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf(" Invalid number , Enter number from 1 to 7 for the  finding the day ");
    }
    return 0;
}