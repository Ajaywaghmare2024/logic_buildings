
/*WAP to accept an array of n integers and
 calculate sum of odd numbers and even numbers using the pointer to an array.*/
#include <stdio.h>
#include <malloc.h>

void main() {
  int i, n, sum = 0;
  int * a;
  printf("Enter the size of array A\n");
  scanf("%d", & n);
  a = (int * ) malloc(n * sizeof(int)); /*Dynamic Memory Allocation */
  printf("Enter Elements of First List\n");
  for (i = 0; i < n; i++) {
    scanf("%d", a + i); /* increment the location of pointer to get next value */
  }
  for (i = 0; i < n; i++) /*Compute the sum of all elements in the given array*/ {
    sum = sum + * (a + i);
  }
  printf("Sum of all elements in array = %d\n", sum); /*display sum of the numbers in array */
} /* End of main() */






















