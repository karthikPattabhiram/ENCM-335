// ENCM 335 Fall 2025 Lab 3 Exercise C part I
// An exercise to help you understand the use of pointer variables.

#include <stdio.h>

int main(void)
{
  int alpha = 555, beta = 333;
  int *gamma;
  int *delta;
  
  gamma = &alpha;
  // point one 

  printf("point one: value of alpha is %d; value of beta is %d.\n", 
         alpha, beta);

  delta = &beta;
  *delta += 10;
  *gamma += 20;

  // point two

  printf("point two: value of alpha is %d; value of beta is %d.\n", 
         alpha, beta);

  gamma = &beta;
  *gamma += 2;

  // point three

  printf("point three: value of alpha is %d; value of beta is %d.\n", 
         alpha, beta);
  printf("point three: value of *gamma is %d; value of *delta is %d.\n", 
         *gamma, *delta);

  delta = &alpha;
  *gamma = *delta;

  // point four

  printf("point four: value of alpha is %d; value of beta is %d.\n", 
         alpha, beta);

  delta = gamma;
  *gamma += 2000;

  // point five

  printf("point five: value of alpha is %d; value of beta is %d.\n", 
         alpha, beta);
  printf("point five: value of *gammma is %d; value of *delta is %d.\n", 
         *gamma, *delta);

  return 0;
}
