// ENCM 335 Fall 2025 Lab 3 Exercise B

#include <stdio.h>

void print_and_swap(int *left, int *right);
// REQUIRES: left and right point to variables.
// PROMISES:
//   Values of left, *left, right, and *right at the moment the function
//   starts are printed. Values of *left and *right are exchanged.

int ga = 22;
int gb = 33;

int main(void)
{
  int la = 44, lb = 55;
  print_and_swap(&ga, &gb);
  printf("After swapping, ga is %d and gb is %d.\n", ga, gb); 
  print_and_swap(&la, &lb);
  printf("After swapping, la is %d and lb is %d.\n", la, lb); 
  return 0;
}

void print_and_swap(int *left, int *right)
{
  int old_star_left;
  printf("The address in left is %p.\n", left);
  printf("The value of the int in *left is %d.\n", *left);
  printf("The address in right is %p.\n", right);
  printf("The value of the int in *right is %d.\n", *right);

  old_star_left = *left;
  *left = *right;
  *right = old_star_left;
}
