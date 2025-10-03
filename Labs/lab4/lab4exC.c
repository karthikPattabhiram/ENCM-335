// ENCM 335 Fall 2025 Lab 4 Exercise C

#include <stdio.h>

void copy_str(char *dest, const char *src);
// Like the C library function strcpy, but does not return a value.


int main(void)
{
  char aa[6] = {'g', 'h', 'i', 'j', 'k', 'l'};
  char bb[6];
  printf("%c", aa[5]);
  copy_str(aa, "abcd");
  // after copy

  copy_str(bb, aa);
 
  return 0;
}


void copy_str(char *dest, const char *src)
{
  int i;
  for (i = 0; src[i] != '\0'; i++)
    dest[i] = src[i];

  // point one (this is after the for loop has finished)

  dest[i] = '\0';
  return;
}
