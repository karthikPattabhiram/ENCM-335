#include <stdio.h>

int add3(int x, int y, int z)
{
    return x + y + z;
}

int main(void)
{
    int a, b, c;
    a = 3;
    b = 5;
    c = 7;
    printf("%d + %d + %d is %d\n",
           a, b, c, add3(a, b, c));
    printf("%d + %d + %d is %d\n",
           b, c, 11, add3(b, c, 11));
    return 0;
}
