//7. Write a C program to accept a character and invert the case of it.

#include <stdio.h>
#include <ctype.h>
main()
{
  char x;
  printf("Enter an alphabet :");
  x = getchar(); // read a character from keyboard
  if (islower(x))
     putchar(toupper(x)); //change to uppercase
  else
     putchar(tolower(x)); //else change to lowercase
}
