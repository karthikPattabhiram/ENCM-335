// ENCM 335 Fall 2025 Lab 3 Exercise C part IV
// An exercise to help you understand the use of pointer variables
// and parameters.

#include <stdio.h>

void foo(int *a, int b);
void bar(int *c, int *d);

int main(void)
{
  int i = 300, j = 400;
  int *p;
  p = &i;
  bar(&j, p);
  printf("i, j values: %d, %d.\n", i, j);
  
  return 0;
}

void foo(int *a, int b)
{
  // Hint: a must point to an int variable. In other words,
  // a contains the address of an int variable.

  // point one (main, bar, foo)

  *a = b + 7;

  // point two (main, bar, foo)

  return;
}

void bar(int *c, int *d)
{
  *c += 30;
  *d += 10;
  
  // Hint: The next call passes the address that is in c
  // but passes the value of the int pointed to by d.
  foo(c, *d);
}

