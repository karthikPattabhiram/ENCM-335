// ENCM 335 Fall 2025 Lab 2 Exercise D

#include <stdio.h>

int is_valid_time(int h, int min, int s);
// Returns 1 if the parameters describe a valid time of day
// between 00:00:00 and 23:59:59.
// Returns 0 otherwise.

void call_is_valid_time(int h, int min, int s);
// Prints parameters within in a message stating whether
// the parameters make sense together as a time of day.

void describe(int h, int min, int s);
// Assumes that the parameters describe a valid time of day.
// Prints the time and a description of the time using terms
// such as "wee hours", "morning", etc., as described in the Lab 2
// instructions.

int main(void)
{
  call_is_valid_time(-1, 0, 0);
  call_is_valid_time(0, -1, 0);
  call_is_valid_time(0, 0, -1);

  call_is_valid_time(24, 0, 0);
  call_is_valid_time(0, 60, 0);
  call_is_valid_time(0, 0, 60);

  call_is_valid_time(0, 0, 0);
  call_is_valid_time(23, 59, 59);

  printf("\n");

  describe(0, 0, 0);
  describe(4, 12, 59);
  describe(5, 30, 0);
  describe(5, 30, 1);
  describe(10, 59, 59);
  describe(11, 0, 0);
  describe(11, 0, 1);
  describe(13, 50, 0);
  describe(14, 15, 0);
  describe(14, 15, 1);
  describe(15, 59, 59);
  describe(17, 29, 30);
  describe(17, 29, 31);
  describe(18, 51, 0);
  describe(23, 59, 59);

  return 0;
}

int is_valid_time(int h, int min, int s)
{

  int v = 0;
  if ((h >= 0) && (h < 24))
    v = 1;
  else
    return v = 0;
  if ((min >= 0) && (min < 60))
    v = 1;
  else
    return v = 0;
  if ((s >= 0) && (s < 60))
    v = 1;
  else
    return v = 0;

  return v;
}

void call_is_valid_time(int h, int min, int s)
{
  // Note %02d says "print an int with at least 2 digits,
  // and fill with leading zeros if necessary.
  printf("%02d:%02d:%02d ", h, min, s);
  if (is_valid_time(h, min, s))
    printf("makes");
  else
    printf("does not make");
  printf(" sense as a time of day.\n");
}

void describe(int h, int min, int s)
{
  printf("%02d:%02d:%02d is in the ", h, min, s);
  // classifier logic 
  if ((h >= 00 && h <= 05)) // wee hours  logic
  {
    if (h == 05 && min >= 30 && s != 0)
      printf("morning.\n");
    // else if (h == 05 && min <= 30)
    // {
    //   printf("wee hours.\n");
    // }
    else
      printf("wee hours.\n");
  }
  else if ((h >= 05 && h <= 10)) // morning logic
  {
    printf("morning.\n");
  }
  else if ((h >= 11 && h <= 14)) // mid-day logic
  {
    if (h == 14 && min >= 15 && s != 0)
      printf("afternoon.\n");
    // else if (h == 14 && min <= 15)
    //   printf("mid-day.\n");
    else
      printf("mid-day.\n");
  }
  else if (h >= 14 && h <= 17) // afternoon logic
  {
    if (h == 17 && min == 29 && s <= 30)
      printf("afternoon.\n");
    else if (h == 17 && min >= 29 && s >= 30)
      printf("evening.\n");
    else
      printf("afternoon.\n");
  }
  else if (h >= 17 && h <= 23) // evening logic
  {
    printf("evening.\n");
  }
}
