/* Program to do stuff
program date: 09-10-2025
name: sandipan ray
regn no.:2025ca085	*/

#include <stdio.h>
#include <math.h>
#define eps 1e-10
#define pi 3.1416
double factorial(int x);
 int main () {
 	double x,erf,sum=0.0,a;
 	int n=0;
 	printf ("Enter the value of x: ");
 	scanf ("%lf",&x);
 	do {
 		a=(pow((-1),n)*pow(x,(2*n+1)))/(factorial(n)*(2*n+1));
 		sum+=a;
 		n++;
 		
 	} while (fabs(a)>eps);
 	erf=(2/sqrt(pi))*sum;
 	printf ("%.4lf", erf);
 }
 double factorial(int x) {
 	double fact=1;
 	if (x==0)
 		fact=1;
 	for (int i=1;i<=x;i++) {
 		fact*=i;
 	}
 	return fact;
 }
