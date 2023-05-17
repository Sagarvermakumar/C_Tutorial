#include <stdio.h>

int main()
{
    // 3. Write a program in C to find the sum of all elements of the array. Go to the editor
    // Test Data :
    // Input the number of elements to be stored in the array :3
    // Input 3 elements in the array :
    // element - 0 : 2
    // element - 1 : 5
    // element - 2 : 8
    // Expected Output :
    // Sum of all elements stored in the array is : 15
    int numOfElem = 3;
    int array[10];

    printf("Input the number of elements to be stored in an array : %d\n", numOfElem);
    printf("Input 3 elements in the array : %d\n", numOfElem);
    for (int i = 1; i < numOfElem; i++)
    {
        printf("element %d : ", i);
        scanf("%d", &array[i]);
    }

    return 0;
}