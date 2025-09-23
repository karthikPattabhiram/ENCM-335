// ENCM 335 Fall 2025 Lab 2 Exercise B

#include <stdio.h>

int walk(int w);
int swim(int s);
int fly(int f1, int f2);

int main(void)
{
  int ma = 3000, mb = 400, mc = 2;
  ma += fly(mb + 5, mc + 3);
  printf("ma has a value of %d\n", ma);
  return 0;
}

int walk(int w)
{
  int d;
  d = w % 10;
  
  // point one (main fly and walk are active)

  return d;
}

int swim(int s)
{
  int c;
  c = s * 40;
  
  // point two ( main fly swim)

  return c;
}

int fly(int f1, int f2)
{
  int y, z;
  y = walk(f1);
  z = swim(f2);
  return -z + y;
}

