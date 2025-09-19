/*Program to print the sum of series 1^4+2^4+4^4+7^4+11^4+...+m^4 where m is an user input less than 50
Program Date: 18-09-2025
Name: Sandipan Ray
Regn. No.: 2025CA085	*/

#include <stdio.h>
#include <math.h>
int main () {
	int a,m=0,sum=0,b,n;
	printf ("Enter any integer less than 50: \n");
	scanf ("%d",&n);
	if (n>50)
		printf ("You are out of range.\n");
	else {
	for (a=1;a<=n;) {
		b=pow(a,4);
		sum+=b;
		m++;
		a+=m;
	}
	
	printf ("The required sum is: %d\n",sum); }
}

