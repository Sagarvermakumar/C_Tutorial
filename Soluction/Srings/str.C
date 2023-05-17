#include <stdio.h>

int main()
{
    char str[10] = "C String";

    printf("%c", str[0]);
    printf("%c", str[1]);
    printf("%c", str[2]);

    char greatings[] = "\bHello World";
    printf("%s", greatings);
    greatings[0] = 'J';
    printf("%s", greatings);

    // char myName[20];
    // printf("Enter your name: ");
    // scanf("%s", &myName);
    // printf("Your name is %s", myName);

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    return 0;
}