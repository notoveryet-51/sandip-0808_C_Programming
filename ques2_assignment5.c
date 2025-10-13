/* Program to find the roots between given intervals 0 and 1
Name: Sandipan Ray
Regn no.: 2025ca085
Date: 09-10-2025	*/

#include <stdio.h>
#include <math.h>
int main () {
	double a=0,b=1,r,f_r,f_a,f_b;
	do {
		r=(a+b)/2;
		if ( fabs(b-a) < 1e-12)
			break;
		f_r=(1-r)*cos(r)-sin(r);
		f_a=(1-a)*cos(a)-sin(a);
		f_b=(1-b)*cos(b)-sin(b);
		if (f_a*f_r<0)
			b=r;
		if (f_b*f_r<0)
			a=r;
	} while (f_r!=0);
	printf("%.4f\n",r);
}
