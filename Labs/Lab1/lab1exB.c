#include <stdio.h>

double mult3(double x, double y, double z)
{
    return x * y * z;
}

int main(void)
{
    double a, b, c;
    a = -1.5;
    b = 2.5;
    c = 3.5;
    printf("%.1f * %.1f * %.1f is %.3f\n",
           a, b, c, mult3(a, b, c));
    printf("%.1f * %.1f * %.1f is %.3f\n",
           b, c, 4.5, mult3(b, c, 4.5));
    return 0;

}

