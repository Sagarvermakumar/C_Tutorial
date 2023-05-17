#include <stdio.h>

// void keyword : indicates that the function should not return a value.
void addNum(int num1, int num2)
{
    printf("Num1 + Num2 is : %d\n ", num1 + num2);
}

// If you want the function to return a value, 
//you can use a data type (such as int or float, etc.)
// instead of void, and use the return keyword inside the function:
int subtract(int num1, int num2)
{
    int subtract = num1 - num2;
    return subtract;
}
int main()
{
    addNum(11, 12);
    addNum(54, 46);
    addNum(31, 42);

    int sub1 = subtract(10, 5);
    printf(" Suntraction is : %d", sub1);

    return 0;
};
