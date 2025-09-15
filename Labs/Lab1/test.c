#include <stdio.h>



void f (double i) {
    if (i) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}


int main () {
    f(0.0);
    f(0.001);
    f(-1.5);
    f(3.14159);
    return 0;

}