#include <stdio.h>

int main()
{

    // 1. Write a program in C to store elements in an array and print them. Go to the editor
    int number[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your %d number, For creating a array : ", i);
        scanf("%d ", &number[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("Yor enterd number are %d \n ", number[j]);
    }

    return 0;
}