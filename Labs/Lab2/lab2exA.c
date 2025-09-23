// ENCM 335 Fall 2025 Lab 2 Exercise A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int m, n, input_count;
  printf("Please enter two integers, separated by a space:\n");
  input_count = scanf("%d %d", &m, &n);
  
  // If scanf didn't get two values, quit the program.
  if (input_count != 2) {
    printf("Sorry, that input was not valid.  I'm quitting!\n");
    exit(1);
  }
  
  // Echo the input.
  printf("The values read were %d for m and %d for n.\n", m, n);
  
  // Add code below this comment to complete the exercise ...
  if ((m < 0) && (n < 0)) {
    printf("both m and n are negative.\n");
  } else if (m < 0) {
    printf("m is negative but n is not.\n");
  } else if (n < 0) {
    printf("n is negative but m is not.\n");
  } else {
    printf("Neither m nor n is negative.\n");
  }
  

  return 0;
}
