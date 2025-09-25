// ENCM 335 Fall 2025 Lab 3 Exercise C part III
// An exercise to help you understand the use of pointer variables
// and parameters.

#include <stdio.h>

int foo(int *f0, int f1);

int main(void)
{
  int x, y, z;
  x = 3000;
  y = 400;
  z = 50;
  
  // point one

  printf("In main before call to foo, values are %d, %d, %d.\n",
	 x, y, z);

  x = foo(&y, z);

  // point three

  printf("In main after call to foo, values are %d, %d, %d.\n",
	 x, y, z);

  return 0;
}

int foo(int *f0, int f1)
{
  f1 += 6;
  *f0 += 4;

  // point two

  return f1 + 5;
}
