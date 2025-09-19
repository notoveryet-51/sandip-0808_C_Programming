/* Program to accept a real no and print the corresponding value of sin (1/x)
Program Date:12-09-2025
Regn No.: 2025CA085
Name: Sandipan Ray                  */


#include<stdio.h>
#include<math.h>
int main () {
	double x, b;
	printf ("Enter the value of x: \n");
	scanf ("%lf",&x);
	b=1/x;
	printf ("The value of sin(1/x) is : %lf\n", sin(b));
	return 0;
}
