#include "myMath.h"
#include <stdio.h>
int main() {

printf("please insert a real number");
double a;
if (scanf ("%lf",&a) != 1){
printf("Invalid input");
return 0;
}
double q1=add(exponent((int)a),sub(power(a,3),2));
printf ("the value of q1 is %0.4lf" ,q1);
printf ("\n------------------\n");

double q2=(mul(2,power(a,2)));
q2=add(q2,mul(3.0,a));
printf ("the value of q2 is %0.4lf" ,q2);
printf ("\n------------------\n");

double q3=div(mul(4,power(a,3)),5);
q3=sub(q3,mul(2,a));
printf ("the value of q3 is %0.4lf" ,q3);
printf ("\n------------------\n");

}

