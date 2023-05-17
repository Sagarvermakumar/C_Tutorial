#include <stdio.h>
int main()
{

  // check even or not

  int number;
  // printf("Enter a number for checking even and odd or not : ");
  // scanf("%d", &number);

  // if (number % 2 == 0)
  // {
  //     printf("Your entered number is a even number %d", number);
  // }
  // else
  // {
  //     printf("Your entered number is a odd number %d", number);
  // }

  // print 1 to 30  all even numbers

  for (int i = 1; i <= 30; i++)
  {
    if (i % 2 == 1)
    {
      printf("%d, ", i);
    }
    //   printf("%d , ",i);
  }
}