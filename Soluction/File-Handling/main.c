#include <stdio.h>

int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen("C:/Users/sksag/OneDrive/Desktop/C_Tutorial/Soluction/File-Handling/s.txt", "w");

  // Close the file
  fclose(fptr);

  return 0;
}