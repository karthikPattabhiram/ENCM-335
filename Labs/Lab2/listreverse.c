// not lab material


#include <stdio.h>
#include <stdlib.h>


char reverseArray(char arr[], int size) {
    char a[] = arr;
    int m = size;

    int n;

    char b;
    for(n = 0; n < 5; n++) {
        b = a[n];
        a[n] = a[m-1-n];
        a[m-1-n] = b;
    }

    n =0;
    for(n = 0; n < 8; n++) {
        printf("%c", a[n]);
    }
    return 0;
};

int main () {
    char arr[] = {'1', '2', '3'};

   reverseArray(arr, 3);

}