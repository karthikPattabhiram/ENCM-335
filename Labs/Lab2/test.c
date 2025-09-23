// Not lab material

#include <stdio.h>

int min(int i, int j) {
    return (i > j) ? j :  i;
}


void draw_triangle(int nrow){

    for (int i = 0; i<nrow; i++) {
        int n= 0;
        while (n <= i) {
            printf("*");
            n++;
        }
        printf("\n");
        

    }
}

int main(void) {
    
    // int x,y;
    // scanf("%d %d", &x, &y);
    // printf("%d\n", min(x,y));
    // return 0;


    // for (int i = 1; i <= 100; i++) {
    //     if ((i % 3 == 0) && !(i% 5 ==0)) {
    //         printf("%d *\n", i);
    //     }
    //       printf("%d\n", i);
        
    // }


    draw_triangle(4);
    draw_triangle(6);

}