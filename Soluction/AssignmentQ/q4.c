
#include <stdio.h>
int main()
{

    int choice, num1, num2;
    printf("Choose options : \n ");

    printf("\tChoose 1 for add \n");
    printf("\tChoose 2 for substract \n");
    printf("\tChoose 3 for multiply \n");
    printf("\tChoose 4 for divide \n");
    scanf("%d", &choice);
 
    if (choice < 5)
    {
        printf("Enter Num1: ");
        scanf("%d", &num1);
        printf("Enter Num2: ");
        scanf("%d", &num2);
    }

    switch (choice)
    {
    case 1:
        printf("Num1 + Num2 = %d", num1 + num2);
        break;
    case 2:
        printf("Num1 - Num2 = %d", num1 - num2);
        break;
    case 3:
        printf("Num1 * Num2 = %d", num1 * num2);
        break;
    case 4:
        printf("Num1 / Num2 = %d", num1 / num2);
        break; 
    default:
        printf("choose form given options");
        break;
    }

    return (0);
}