#include <stdio.h>
#include <stdlib.h>


double get_double_or_exit(void);
// REQUIRES:
//    User has been prompted to enter a double.
// PROMISES:
//    Function tries to read a double using scanf and "%d"
//    On success, that double is echoed to the user,
//    and the double is the function return value.
//    On failure, and error message is printed and
//    exit is called with an argument of 1.
int get_int_or_exit(void);
// REQUIRES:
//    User has been prompted to enter an int.
// PROMISES:
//    Function tries to read an int using scanf and "%d"
//    On success, that int is echoed to the user,
//    and the int is the function return value.
//    On failure, and error message is printed and
//    exit is called with an argument of 1.

void get_input(double *km_in, int *minutes_in, double *seconds_in);
// PROMISES:



int main(void) {
    double km, seconds, time_s, avg_1k, avg_1m, min, sec;
    int minutes;
   

    get_input(&km, &minutes, &seconds);

    printf("Distance run: %f km.\n",km);

    time_s = minutes*60 +seconds;
    avg_1k = time_s / km;
    avg_1m = time_s / (km * 0.621371);
   
    printf("Total time of run: %d minute(s), %f second(s)\n", minutes, seconds);
    min = (int)avg_1k / 60;
    sec = avg_1k - min*60;
    printf("Average time per 1 km: %d minute(s), %f second(s)\n", (int)min, sec);
    min = (int)avg_1m / 60;
    sec = avg_1m - min*60;
    printf("Average time per 1 mile: %d minute(s), %f second(s)\n", (int)min, sec);
    return 0;



};

int get_int_or_exit(void)
{
  int result;
  if (1 != scanf("%d", &result)) {
    printf("I could not read an int. I am quitting.\n");
    exit(1);
  }
  printf("I read an int value of %d.\n", result);
  return result;
}

double get_double_or_exit(void) {
  double result;
  if (1 != scanf("%lf", &result)) {
    printf("I could not read a double. I am quitting.\n");
    exit(1);
  }
  printf("I read a double value of %lf.\n", result);
  return result;

}

void get_input(double *km_in, int *minutes_in, double *seconds_in) {

    printf("Please enter a distance in km, using type double.\n");
    *km_in = get_double_or_exit();
    
    printf("Please enter a number of minute, using type int.\n");
    *minutes_in = get_int_or_exit();

    printf("Please enter a number of seconds, using type double.\n");
    *seconds_in = get_double_or_exit();
    


}
