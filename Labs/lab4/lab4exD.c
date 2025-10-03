// ENCM 335 Fall 2025 Lab 4 Exercise D

#include <stdio.h>

int main(void)
{
  char buffer[80];   // enough space for a string of length <= 79

  // THIS IS A GOOD WAY TO LEARN SOMETHING ABOUT C STRINGS, BUT IT'S
  // NOT A GOOD EXAMPLE OF READABLE OR PRACTICAL CODE! 

  // Put characters into the string using ASCII codes.
  // make it so that buffer contains the string "In C the value of 200 % (6 + 3) == 180 is 1."
  buffer[0] = 73;   // 'I'
  buffer[1] = 110;  // 'n'
  buffer[2] = 32;   // ' '
  buffer[3] = 67;   // 'C'
  buffer[4] = 32;   // ' '
  buffer[5] = 116;  // 't'
  buffer[6] = 104;  // 'h'
  buffer[7] = 101;  // 'e'
  buffer[8] = 32;   // ' '
  buffer[9] = 118;  // 'v'
  buffer[10] = 97;  // 'a'
  buffer[11] = 108; // 'l'
  buffer[12] = 117; // 'u'
  buffer[13] = 101; // 'e'
  buffer[14] = 32;  // ' '
  buffer[15] = 111; // 'o'
  buffer[16] = 102; // 'f'
  buffer[17] = 32;  // ' '
  buffer[18] = 50;  // '2'
  buffer[19] = 48;  // '0'
  buffer[20] = 48;  // '0'
  buffer[21] = 32;  // ' '
  buffer[22] = 37;  // '%'
  buffer[23] = 32;  // ' '
  buffer[24] = 40;  // '('
  buffer[25] = 54;  // '6'
  buffer[26] = 32;  // ' '
  buffer[27] = 43;  // '+'
  buffer[28] = 32;  // ' '
  buffer[29] = 51;  // '3'
  buffer[30] = 41;  // ')'
  buffer[31] = 32;  // ' '
  buffer[32] = 61;  // '='
  buffer[33] = 61;  // '='
  buffer[34] = 32;  // ' '
  buffer[35] = 49;  // '1'
  buffer[36] = 56;  // '8'
  buffer[37] = 48;  // '0'
  buffer[38] = 32;  // ' '
  buffer[39] = 105; // 'i'
  buffer[40] = 115; // 's'
  buffer[41] = 32;  // ' '
  buffer[42] = 49;  // '1'
  buffer[43] = 46;  // '.'

  // Put the end-of-string character at the end of the string.
  buffer[44] = 0;

  printf("The string in buffer is \"%s\"\n", buffer);
  return 0;
}
