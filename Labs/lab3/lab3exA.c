// ENCM 335 Fall 2025 Lab 3 Exercise A

#include <math.h>
// The above directive will read many function prototypes, including ...
//
//     double sin(double x);
//
// for the sine function.  It's assumed that the units for the argument
// value are radians, not degrees.

// Note to Linux users: You might need to build the executable like this ...
//   gcc -Wall lab3exA.c -lm
// ... in order to link in the sin function.  Mac and Cywgin users won't
// have to put -lm at the end of the command.

#include <stdio.h>

// For now, just trust that the following #define directive properly
// sets up a useful constant.  How it works will be explained
// later in the course.
#define PI 3.14159265358979323846

double deg2rad(double degrees);

int main(void)
{
    double row;

    printf("degrees");
    // printf(" THIS IS WHERE +0, +1, +2, ETC., SHOULD BE\n");
    // printf(" %+7d %+7d %+7d %+7d %+7d %+7d %+7d %+7d %+7d %+7d\n",
    //        0, 1, 2, 3, 4, 5, 6, 7, 8, 9 );
    for (int col = 0; col <= 9; col++)
    {
        printf(" %+7d", col);
    }
    printf("\n");

    for (row = 0; row <= 80; row += 10)
    {
        printf("%7.0f ", row);
        // printf(" %7.4f %7.4f %7.4f %7.4f %7.4f %7.4f %7.4f %7.4f %7.4f %7.4f\n",
        //        sin(deg2rad((row))),sin(deg2rad(row+1)), sin(deg2rad(row+2)), sin(deg2rad(row+3)), sin(deg2rad(row+4)), sin(deg2rad(row+5)), sin(deg2rad(row+6)), sin(deg2rad(row+7)), sin(deg2rad(row+8)), sin(deg2rad(row+9)) );

        for (int col = 0; col <= 9; col++)
        {
            printf("%7.4f ", sin(deg2rad(row + col)));
        }

        printf("\n");
    }
    return 0;
}

double deg2rad(double degrees)
{
    return (PI / 180.0) * degrees;
}
