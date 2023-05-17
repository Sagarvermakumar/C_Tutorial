#include <stdio.h>

int main()
{
    // 2. Write a program in C to read n number of values in an array and display them in reverse order. Go to the editor
    //  Test Data :
    //  Input the number of elements to store in the array :3
    //  Input 3 number of elements in the array :
    //  element - 0 : 2
    //  element - 1 : 5
    //  element - 2 : 7
    //  Expected Output :
    //  The values store into the array are :
    //  2 5 7
    //  The values store into the array in reverse are :
    //  7 5 2
    int numOfElement = 5 , arrayOfNumbers[10];
    // printf("Input the how may numbers  to store in the array : ");
    // scanf("%d ", &numOfElement);
    // printf(" Number of element will have creating %d",numOfElement);

    for (int i = 0; i < numOfElement; i++)
    {
        printf("Input the %d of element in the array : \n", i + 1);
        scanf("%d", &arrayOfNumbers[i]);
    }
    for (int j = 0; j < numOfElement; j++)
    {
        printf(" index %d The values store into the array are %d \n", j + 1, arrayOfNumbers[j]);
    }
}