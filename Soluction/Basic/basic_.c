#include <stdio.h>

int main()
{

    //  Q1. Write a C program that accepts 4 integers p, q, r, s from the user
    //  where q, r and s are positive and p is even.
    //  If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q
    //   print "Correct values", otherwise print "Wrong values". Go to the editor
    // Test Data :
    // Input the second integer: 35
    // Input the third integer: 15
    // Input the fourth integer: 46
    // Expected Output:
    // Wrong values
    printf("Q1 Answer");
    int p, q, r, s, t, sumOfrs = 0, sumOfpq = 0;
    // printf("Enter the value of P (positive Integers) : ");
    // scanf("%d", &p);
    // printf("Enter the value of Q (positive Integers): ");
    // scanf("%d", &q);
    // printf("Enter the value of R (positive Integers): ");
    // scanf("%d", &r);
    // printf("Enter the value of S (positive Integers): ");
    // scanf("%d", &s);
    sumOfpq = p + q;
    sumOfrs = r + s;
    if (p > r && s > p && sumOfrs > sumOfpq)
    {
        printf("Correct values");
    }
    else
    {
        printf("Wrong values");
    }

    printf("\n The value of P %d Q %d R %d S %d", p, q, r, s);

    //     25. Write a C program that reads an integer between 1 and 12 and prints the month of the year in English. Go to the editor
    // Test Data :
    // Input a number between 1 to 12 to get the month name: 8
    // Expected Output:
    // August

    int num;
    printf("Enter your number to find month: ");
    scanf("%d", &num);

    char months[][12] = {"Jan", "Fab", "March", "April", "May", "June", "July", "August", "Sepetember", "October", "November", "December"};
    printf("%s", months[num-1]);
    return 0;
}