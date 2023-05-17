#include <stdio.h>
int main()
{
    // Q1. Find largest number among three number..........................................................
    printf("Q1 Answer is : ");

    int num1 = 15;
    int num2 = 5;
    int num3 = 85;

    if (num1 > num2 & num1 > num3)
    {
        printf("First number is grater than second number and third number.");
    }
    else if (num2 > num1 & num2 > num3)
    {
        printf("Second number is grater than first number and third number.");
    }
    else if (num3 > num1 & num3 > num2)
    {
        printf("Third number is grater than first number and second number.");
    }
    else if (num1 == num2 == num3)
    {
        printf("All numbers are equle");
    }
    else
    {
        printf("Invalid number");
    };

    // Q2 1. Write a C program to print your name, date of birth, and mobile number..................................
    printf("\nQ2 Answer is - \n ");
    printf("\tName : Sagar verma \n");
    printf("\tDOB : 12-06-2001 \n");
    printf("\tNo : 8434131226 \n");

    // secod soluction
    char name[20] = "Sagar", dob[12] = "12-06-2201", number[11] = "84444455";

    printf("\nQ2 Answer is - \n ");
    printf("Enter your name dob and number : ");
    // scanf("%s %s %s", &name, &dob, &number);
    printf("\tName : %s\n", name);
    printf("\tDOB : %s \n", dob);
    printf("\tNo : %s \n", number);
    // Q3Write a C program to print the following characters in reverse test charactor 'X','M','L'..................
    printf("Q3 Answer is : ");
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';

    printf("The reverse charactor is %c %c %c is %c %c %c . \n", char1, char2, char3, char3, char2, char1);

    // Q4  WAP to compute parameter and area of a rectangle with a height of 7 inches  and width of 5 inches.
    printf("Q4 Answer is : ");
    int height, width, perimeter, area;
    height = 7;
    width = 5;

    perimeter = 2 * (height + width);
    area = width * height;

    printf("Parameter of ractangle is %d and area is %d \n", perimeter, area);

    // Q5 WAP to compute parameter and area of given radious is 6.
    printf("Q5 Answer is : ");
    int radiousOfCircle = 6;
    float perimeterOfCircle, areaOfCircle;

    perimeterOfCircle = 2 * 3.14 * radiousOfCircle;
    areaOfCircle = 3.14 * radiousOfCircle * radiousOfCircle;

    printf("parameter of circle is : %f", perimeterOfCircle);
    printf("area of circle is : %f", areaOfCircle);

    // Q6 Write a C program to display following variables..........................................................
    // a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
    // Variable declaration : given variables and its value .

    printf("\nQ6 Answer is - \n ");
    int a = 125, b = 12345;
    long ax = 123456789;
    short s = 4043;
    float x = 3.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf(" \ta + c = %d \n", a + c);
    printf(" \tx + c = \n", x + c);
    printf(" \tdx + x = \n", dx + x);
    printf(" \t int dx = \n", ((int)dx) + x);
    printf(" \ta + x= \n", a + x);
    printf(" \ts + b= \n", s + b);
    printf(" \tax + b= \n", ax + b);
    printf(" \ts + c = \n", s + c);
    printf(" \tax + c = \n", ax + c);
    printf(" \tax + ux = \n", ax + ux);
    // char n = 'A';
    // printf("%c", n + 5); // F

    // Q7 WAP to convert specified days into years, week and days. ignore leap year.
    printf("Q7 Answer is :");
    int noOfDays, years, weeks;
    noOfDays = 1329;
    years = noOfDays / 365;
    weeks = (noOfDays % 365) / 7;
    noOfDays = noOfDays - ((years * 365) + (weeks * 7));
    printf(" In 1329 Days,  Years = %d weeks = %d Days = %d", years, weeks, noOfDays);

    // Q9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
    printf("\nQ9 Answer is : sholve later");

    // Q10 Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value. Go to the editor
    // Test Data : Weight - Item1 : 15 No.of item1 : 5 Weight - Item2 : 25 No.of item2 : 4 Expected Output : Average Value = 19.444444
    printf("\nQ10 Answer is : ");
    int weightOfFirstItem = 15;
    int noOfFirstItem = 5;
    int weightOfSecondItem = 25;
    int noOfSecondItem = 4;
    int totalNoOfItem = noOfFirstItem + noOfSecondItem;
    float avg = (float)((weightOfFirstItem * noOfFirstItem) + (weightOfSecondItem * noOfSecondItem)) / totalNoOfItem;
    printf("The Average value is : %f ", avg);

    // Q11.14. Write a C program to calculate a bike’s average consumption from the given total distance(integer value) travelled(in km) and spent fuel(in litters, float number – 2 decimal points).Go to the editor Test Data : Input total distance in km : 350 Input total fuel spent in liters : 5
    printf("\nQ11. Answer is : ");
    int totalDistance, spendFule;

    totalDistance = 350;
    spendFule = 5;
    float bikeshAvg = (float)(totalDistance / spendFule);
    printf("Bike Average consumption (km/lt)  %f", bikeshAvg);

    // Q12. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
    printf("\nQ12 Asswer is\n ");
    int ammount = 274, noteOf100, noteOf50, noteOf20, noteOf10, noteOf5, noteOf2, noteOf1;
    noteOf100 = ammount / 100;
    noteOf50 = (ammount % 100) / 50;
    noteOf20 = (ammount - (noteOf100 * 100) - (noteOf50 * 50)) / 20;
    noteOf10 = (ammount - (noteOf100 * 100) - (noteOf50 * 50) - (noteOf20 * 20)) / 10;
    noteOf5 = (ammount - (noteOf100 * 100) - (noteOf50 * 50) - (noteOf20 * 20) - (noteOf10 * 10)) / 5;
    noteOf2 = (ammount - (noteOf100 * 100) - (noteOf50 * 50) - (noteOf20 * 20) - (noteOf10 * 10) - (noteOf5 * 5)) / 2;
    noteOf1 = (ammount - (noteOf100 * 100) - (noteOf50 * 50) - (noteOf20 * 20) - (noteOf10 * 10) - (noteOf5 * 5) - (noteOf2 * 2)) / 1;

    printf("\tIn Ammount , There are %d notes of 100 \n", noteOf100);
    printf("\tIn Ammount , There are %d notes of 50 \n", noteOf50);
    printf("\tIn Ammount , There are %d notes of 20 \n", noteOf20);
    printf("\tIn Ammount , There are %d notes of 10 \n", noteOf10);
    printf("\tIn Ammount , There are %d notes of 5 \n", noteOf5);
    printf("\tIn Ammount , There are %d notes of 2 \n", noteOf2);
    printf("\tIn Ammount , There are %d notes of 1 \n", noteOf1);

    // 13. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. Go to the editor
    printf("\nQ13 Answer is\n ");
    int hours, minutes, seconds;
    seconds = 107;
    hours = seconds / (60 * 60);
    minutes = (seconds - (hours * 60 * 60)) / 60;
    seconds = (seconds - (hours * 60 * 60) - (minutes * 60));
    printf("\tIn given seconds,  There are %d hours \n ", hours);
    printf("\tIn given Seconds,  There are %d minutes \n", minutes);
    printf("\tIn given Seconds,  There are %d seconds \n", seconds);

    // 14. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days. Go to the editor
    // Test Data :
    // Input no. of days: 2535
    // Expected Output: 6 Year(s)
    // 11 Month(s)
    // 15 Day(s)

    printf("\nQ14 Answer is\n ");
    int days = 365, year, months, day;
    years = days / 365;
    months = ((days % 365) / 30);
    days = (days - (years * 365) - (months * 30));
    printf("\tIn the given days,  There are %d years \n", years);
    printf("\tIn the given days,  There are %d months \n", months);
    printf("\tIn the given days,  There are %d days \n", days);

    // 15. Write a C program that prints all even numbers between 1 and 50 (inclusive). Go to the editor
    // Test Data :
    // Even numbers between 1 to 50 (inclusive):
    // Expected Output: 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50

    printf("\nQ15 Answer is\n ");
    int num = 51, i;
    for (i = 2; i < num; i++)
    {
        if (i % 2 == 0)
        {

            printf("\t%d  ", i);
        }
    }

    printf("\nQ16 Answer is\n ");
    // Program to calculate the sum of first n natural numbers
    // Positive integers 1,2,3...n are known as natural numbers

    int nthNumbers = 3, count, sum = 0;
    for (count = 1; count <= nthNumbers; ++count)
    {
        sum += count;
    }

    printf("The sum of nth integers is %d", sum);

    printf("\nQ17 Answer is\n ");
    return 0;
}
